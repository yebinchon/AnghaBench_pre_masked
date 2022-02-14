
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {int num_overlays; struct omapfb2_mem_region* region; struct omap_overlay** overlays; struct omapfb2_device* fbdev; } ;
struct omapfb2_mem_region {unsigned long size; int lock; int lock_count; int type; int map_count; int id; } ;
struct omapfb2_device {int num_fbs; struct fb_info** fbs; } ;
struct omap_overlay {scalar_t__ (* is_enabled ) (struct omap_overlay*) ;} ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* sync ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct device*,char*) ;
 struct fb_info* FUNC_6 (struct device*) ;
 int FUNC_7 (int *,int ) ;
 struct omap_dss_device* FUNC_8 (struct fb_info*) ;
 int FUNC_9 (char const*,int ,unsigned long*) ;
 int FUNC_10 (struct fb_info*) ;
 int FUNC_11 (struct fb_info*,unsigned long,int ) ;
 int FUNC_12 (struct omap_dss_device*) ;
 scalar_t__ FUNC_13 (struct omap_overlay*) ;
 int FUNC_14 (struct fb_info*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_6(VAR_1);
 struct omapfb_info *VAR_6 = FUNC_0(VAR_5);
 struct omapfb2_device *VAR_7 = VAR_6->fbdev;
 struct omap_dss_device *VAR_8 = FUNC_8(VAR_5);
 struct omapfb2_mem_region *VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_9(VAR_3, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(VAR_10);

 FUNC_10(VAR_5);

 if (VAR_8 && VAR_8->driver->sync)
  VAR_8->driver->sync(VAR_8);

 VAR_9 = VAR_6->region;

 FUNC_7(&VAR_9->lock, VAR_9->id);
 FUNC_3(&VAR_9->lock_count);

 if (FUNC_4(&VAR_9->map_count)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7->num_fbs; VAR_12++) {
  struct omapfb_info *VAR_13 = FUNC_0(VAR_7->fbs[VAR_12]);
  int VAR_14;

  if (VAR_13->region != VAR_9)
   continue;

  for (VAR_14 = 0; VAR_14 < VAR_13->num_overlays; VAR_14++) {
   struct omap_overlay *VAR_15;
   VAR_15 = VAR_13->overlays[VAR_14];
   if (VAR_15->is_enabled(VAR_15)) {
    VAR_11 = -VAR_0;
    goto out;
   }
  }
 }

 if (VAR_10 != VAR_6->region->size) {
  VAR_11 = FUNC_11(VAR_5, VAR_10, VAR_6->region->type);
  if (VAR_11) {
   FUNC_5(VAR_1, "realloc fbmem failed\n");
   goto out;
  }
 }

 VAR_11 = VAR_4;
out:
 FUNC_2(&VAR_9->lock_count);
 FUNC_15(&VAR_9->lock);

 FUNC_14(VAR_5);

 return VAR_11;
}
