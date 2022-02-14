
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct omapfb_info {int* rotation; TYPE_1__* region; } ;
struct omapfb2_device {int dev; int pseudo_palette; } ;
struct omap_dss_device {TYPE_2__* driver; } ;
struct fb_var_screeninfo {int bits_per_pixel; int rotate; int xres; int yres; int xres_virtual; int yres_virtual; scalar_t__ nonstd; } ;
struct fb_info {int cmap; int pseudo_palette; int flags; int * fbops; struct fb_var_screeninfo var; } ;
struct TYPE_4__ {int (* get_resolution ) (struct omap_dss_device*,void**,void**) ;} ;
struct TYPE_3__ {scalar_t__ size; } ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_info*) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 struct omap_dss_device* FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct omapfb2_device*,struct omap_dss_device*) ;
 int VAR_5 ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (struct omap_dss_device*,void**,void**) ;

__attribute__((used)) static int FUNC_10(struct omapfb2_device *VAR_6, struct fb_info *VAR_7)
{
 struct fb_var_screeninfo *VAR_8 = &VAR_7->var;
 struct omap_dss_device *VAR_9 = FUNC_4(VAR_7);
 struct omapfb_info *VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = 0;

 VAR_7->fbops = &VAR_5;
 VAR_7->flags = VAR_1;
 VAR_7->pseudo_palette = VAR_6->pseudo_palette;

 if (VAR_10->region->size == 0) {
  FUNC_2(VAR_7);
  return 0;
 }

 VAR_8->nonstd = 0;
 VAR_8->bits_per_pixel = 0;

 VAR_8->rotate = VAR_4;

 if (VAR_9) {
  u16 VAR_12, VAR_13;
  int VAR_14 = (VAR_8->rotate + VAR_10->rotation[0]) % 4;

  VAR_9->driver->get_resolution(VAR_9, &VAR_12, &VAR_13);

  if (VAR_14 == VAR_3 ||
    VAR_14 == VAR_2) {
   VAR_8->xres = VAR_13;
   VAR_8->yres = VAR_12;
  } else {
   VAR_8->xres = VAR_12;
   VAR_8->yres = VAR_13;
  }

  VAR_8->xres_virtual = VAR_8->xres;
  VAR_8->yres_virtual = VAR_8->yres;

  if (!VAR_8->bits_per_pixel) {
   switch (FUNC_6(VAR_6, VAR_9)) {
   case 16:
    VAR_8->bits_per_pixel = 16;
    break;
   case 24:
    VAR_8->bits_per_pixel = 32;
    break;
   default:
    FUNC_3(VAR_6->dev, "illegal display "
      "bpp\n");
    return -VAR_0;
   }
  }
 } else {

  VAR_8->xres = 320;
  VAR_8->yres = 240;
  VAR_8->xres_virtual = VAR_8->xres;
  VAR_8->yres_virtual = VAR_8->yres;
  if (!VAR_8->bits_per_pixel)
   VAR_8->bits_per_pixel = 16;
 }

 VAR_11 = FUNC_1(VAR_7, VAR_8);
 if (VAR_11)
  goto err;

 FUNC_7(VAR_7);
 VAR_11 = FUNC_8(VAR_7);
 if (VAR_11)
  goto err;

 VAR_11 = FUNC_5(&VAR_7->cmap, 256, 0);
 if (VAR_11)
  FUNC_3(VAR_6->dev, "unable to allocate color map memory\n");

err:
 return VAR_11;
}
