
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {int num_overlays; int region; struct omap_overlay** overlays; scalar_t__* rotation; struct omapfb2_device* fbdev; } ;
struct omapfb2_device {int num_overlays; int dev; struct omap_overlay** overlays; } ;
struct omap_overlay {TYPE_1__* manager; int id; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* apply ) (TYPE_1__*) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 struct fb_info* FUNC_3 (struct device*) ;
 struct omapfb_info* FUNC_4 (struct omapfb2_device*,struct omap_overlay*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct fb_info*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct omapfb2_device*) ;
 int FUNC_9 (struct omap_overlay*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct omapfb2_device*) ;
 int FUNC_12 (char*,char**,int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct fb_info *VAR_6 = FUNC_3(VAR_2);
 struct omapfb_info *VAR_7 = FUNC_1(VAR_6);
 struct omapfb2_device *VAR_8 = VAR_7->fbdev;
 struct omap_overlay *VAR_9[VAR_1];
 struct omap_overlay *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;
 bool VAR_15 = 0;

 VAR_11 = 0;

 VAR_14 = FUNC_13(VAR_4);
 if (VAR_4[VAR_14 - 1] == '\n')
  VAR_14 = VAR_14 - 1;

 FUNC_5(VAR_6);
 FUNC_8(VAR_8);

 if (VAR_14 > 0) {
  char *VAR_16 = (char *)VAR_4;
  int VAR_17;

  while (VAR_16 < VAR_4 + VAR_14) {
   int VAR_18;
   if (VAR_11 == VAR_1) {
    VAR_12 = -VAR_0;
    goto out;
   }

   VAR_17 = FUNC_12(VAR_16, &VAR_16, 0);
   if (VAR_17 > VAR_8->num_overlays) {
    VAR_12 = -VAR_0;
    goto out;
   }

   VAR_18 = 0;
   for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
    if (VAR_9[VAR_13] == VAR_8->overlays[VAR_17]) {
     VAR_18 = 1;
     break;
    }
   }

   if (!VAR_18)
    VAR_9[VAR_11++] = VAR_8->overlays[VAR_17];

   VAR_16++;
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
  struct omapfb_info *VAR_19 = FUNC_4(VAR_8, VAR_9[VAR_13]);
  if (VAR_19 && VAR_19 != VAR_7) {
   FUNC_2(VAR_8->dev, "overlay already in use\n");
   VAR_12 = -VAR_0;
   goto out;
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_7->num_overlays; ++VAR_13) {
  int VAR_20, VAR_21;

  VAR_10 = VAR_7->overlays[VAR_13];

  VAR_21 = 0;

  for (VAR_20 = 0; VAR_20 < VAR_11; ++VAR_20) {
   if (VAR_10 == VAR_9[VAR_20]) {
    VAR_21 = 1;
    break;
   }
  }

  if (VAR_21)
   continue;

  FUNC_0("detaching %d\n", VAR_7->overlays[VAR_13]->id);

  FUNC_7(VAR_7->region);

  FUNC_9(VAR_10, 0);

  if (VAR_10->manager)
   VAR_10->manager->apply(VAR_10->manager);

  FUNC_10(VAR_7->region);

  for (VAR_20 = VAR_13 + 1; VAR_20 < VAR_7->num_overlays; VAR_20++) {
   VAR_7->rotation[VAR_20-1] = VAR_7->rotation[VAR_20];
   VAR_7->overlays[VAR_20-1] = VAR_7->overlays[VAR_20];
  }

  VAR_7->num_overlays--;
  VAR_13--;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {
  int VAR_22, VAR_23;

  VAR_10 = VAR_9[VAR_13];

  VAR_23 = 0;

  for (VAR_22 = 0; VAR_22 < VAR_7->num_overlays; ++VAR_22) {
   if (VAR_10 == VAR_7->overlays[VAR_22]) {
    VAR_23 = 1;
    break;
   }
  }

  if (VAR_23)
   continue;
  VAR_7->rotation[VAR_7->num_overlays] = 0;
  VAR_7->overlays[VAR_7->num_overlays++] = VAR_10;

  VAR_15 = 1;
 }

 if (VAR_15) {
  FUNC_7(VAR_7->region);

  VAR_12 = FUNC_6(VAR_6, 0);

  FUNC_10(VAR_7->region);

  if (VAR_12)
   goto out;
 }

 VAR_12 = VAR_5;
out:
 FUNC_11(VAR_8);
 FUNC_15(VAR_6);

 return VAR_12;
}
