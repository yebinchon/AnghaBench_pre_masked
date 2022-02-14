
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_mem_info {scalar_t__ type; int size; } ;
struct omapfb_info {int num_overlays; struct omap_overlay** overlays; struct omapfb2_mem_region* region; struct omapfb2_device* fbdev; } ;
struct omapfb2_mem_region {size_t size; scalar_t__ type; int lock; int lock_count; int map_count; int id; } ;
struct omapfb2_device {int num_fbs; int dev; struct fb_info** fbs; } ;
struct omap_overlay {scalar_t__ (* is_enabled ) (struct omap_overlay*) ;} ;
struct omap_dss_device {TYPE_1__* driver; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int (* sync ) (struct omap_dss_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ) ;
 struct omap_dss_device* FUNC_7 (struct fb_info*) ;
 int FUNC_8 (struct fb_info*,size_t,scalar_t__) ;
 int FUNC_9 (struct omap_dss_device*) ;
 scalar_t__ FUNC_10 (struct omap_overlay*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct fb_info *VAR_3, struct omapfb_mem_info *VAR_4)
{
 struct omapfb_info *VAR_5 = FUNC_0(VAR_3);
 struct omapfb2_device *VAR_6 = VAR_5->fbdev;
 struct omap_dss_device *VAR_7 = FUNC_7(VAR_3);
 struct omapfb2_mem_region *VAR_8;
 int VAR_9 = 0, VAR_10;
 size_t VAR_11;

 if (VAR_4->type != VAR_2)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_4->size);

 if (VAR_7 && VAR_7->driver->sync)
  VAR_7->driver->sync(VAR_7);

 VAR_8 = VAR_5->region;

 FUNC_6(&VAR_8->lock, VAR_8->id);
 FUNC_3(&VAR_8->lock_count);

 if (VAR_8->size == VAR_11 && VAR_8->type == VAR_4->type)
  goto out;

 if (FUNC_4(&VAR_8->map_count)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->num_fbs; VAR_10++) {
  struct omapfb_info *VAR_12 = FUNC_0(VAR_6->fbs[VAR_10]);
  int VAR_13;

  if (VAR_12->region != VAR_8)
   continue;

  for (VAR_13 = 0; VAR_13 < VAR_12->num_overlays; VAR_13++) {
   struct omap_overlay *VAR_14;
   VAR_14 = VAR_12->overlays[VAR_13];
   if (VAR_14->is_enabled(VAR_14)) {
    VAR_9 = -VAR_0;
    goto out;
   }
  }
 }

 VAR_9 = FUNC_8(VAR_3, VAR_11, VAR_4->type);
 if (VAR_9) {
  FUNC_5(VAR_6->dev, "realloc fbmem failed\n");
  goto out;
 }

 out:
 FUNC_2(&VAR_8->lock_count);
 FUNC_11(&VAR_8->lock);

 return VAR_9;
}
