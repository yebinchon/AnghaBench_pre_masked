
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_3__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xres_virtual; scalar_t__ xres; int yres_virtual; scalar_t__ yres; scalar_t__ xoffset; scalar_t__ yoffset; int vmode; int accel_flags; TYPE_2__ transp; TYPE_1__ blue; TYPE_1__ green; TYPE_1__ red; } ;
struct fb_info {int screen_size; int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_4 (struct cirrusfb_info*) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_4,
         struct fb_info *VAR_5)
{
 int VAR_6;

 unsigned VAR_7 = VAR_5->screen_size * 8 / VAR_4->bits_per_pixel;
 struct cirrusfb_info *VAR_8 = VAR_5->par;

 switch (VAR_4->bits_per_pixel) {
 case 1:
  VAR_4->red.offset = 0;
  VAR_4->red.length = 1;
  VAR_4->green = VAR_4->red;
  VAR_4->blue = VAR_4->red;
  break;

 case 8:
  VAR_4->red.offset = 0;
  VAR_4->red.length = 8;
  VAR_4->green = VAR_4->red;
  VAR_4->blue = VAR_4->red;
  break;

 case 16:
  VAR_4->red.offset = 11;
  VAR_4->green.offset = 5;
  VAR_4->blue.offset = 0;
  VAR_4->red.length = 5;
  VAR_4->green.length = 6;
  VAR_4->blue.length = 5;
  break;

 case 24:
  VAR_4->red.offset = 16;
  VAR_4->green.offset = 8;
  VAR_4->blue.offset = 0;
  VAR_4->red.length = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.length = 8;
  break;

 default:
  FUNC_1(VAR_5->device,
   "Unsupported bpp size: %d\n", VAR_4->bits_per_pixel);
  return -VAR_0;
 }

 if (VAR_4->xres_virtual < VAR_4->xres)
  VAR_4->xres_virtual = VAR_4->xres;

 if (VAR_4->yres_virtual == -1) {
  VAR_4->yres_virtual = VAR_7 / VAR_4->xres_virtual;

  FUNC_3(VAR_5->device,
    "virtual resolution set to maximum of %dx%d\n",
    VAR_4->xres_virtual, VAR_4->yres_virtual);
 }
 if (VAR_4->yres_virtual < VAR_4->yres)
  VAR_4->yres_virtual = VAR_4->yres;

 if (VAR_4->xres_virtual * VAR_4->yres_virtual > VAR_7) {
  FUNC_2(VAR_5->device, "mode %dx%dx%d rejected... "
        "virtual resolution too high to fit into video memory!\n",
   VAR_4->xres_virtual, VAR_4->yres_virtual,
   VAR_4->bits_per_pixel);
  return -VAR_0;
 }


 if (VAR_4->xoffset > VAR_4->xres_virtual - VAR_4->xres)
  VAR_4->xoffset = VAR_4->xres_virtual - VAR_4->xres - 1;
 if (VAR_4->yoffset > VAR_4->yres_virtual - VAR_4->yres)
  VAR_4->yoffset = VAR_4->yres_virtual - VAR_4->yres - 1;

 VAR_4->red.msb_right =
     VAR_4->green.msb_right =
     VAR_4->blue.msb_right =
     VAR_4->transp.offset =
     VAR_4->transp.length =
     VAR_4->transp.msb_right = 0;

 VAR_6 = VAR_4->yres;
 if (VAR_4->vmode & VAR_2)
  VAR_6 *= 2;
 else if (VAR_4->vmode & VAR_3)
  VAR_6 = (VAR_6 + 1) / 2;

 if (VAR_6 >= 1280) {
  FUNC_2(VAR_5->device, "ERROR: VerticalTotal >= 1280; "
   "special treatment required! (TODO)\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_4, VAR_5))
  return -VAR_0;

 if (!FUNC_4(VAR_8))
  VAR_4->accel_flags = VAR_1;

 return 0;
}
