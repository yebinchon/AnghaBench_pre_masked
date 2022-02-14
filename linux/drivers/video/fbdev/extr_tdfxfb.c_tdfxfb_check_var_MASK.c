
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tdfx_par {scalar_t__ max_pixclock; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int xres_virtual; int yres; int yres_virtual; int vmode; int width; int height; int accel_flags; TYPE_4__ blue; TYPE_4__ green; TYPE_4__ red; TYPE_3__ transp; int pixclock; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_6__ {int smem_len; } ;
struct TYPE_5__ {scalar_t__ dclkmax; scalar_t__ vfmax; scalar_t__ hfmax; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ monspecs; struct tdfx_par* par; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct fb_var_screeninfo*,struct fb_info*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_5, struct fb_info *VAR_6)
{
 struct tdfx_par *VAR_7 = VAR_6->par;
 u32 VAR_8;

 if (VAR_5->bits_per_pixel != 8 && VAR_5->bits_per_pixel != 16 &&
     VAR_5->bits_per_pixel != 24 && VAR_5->bits_per_pixel != 32) {
  FUNC_0("depth not supported: %u\n", VAR_5->bits_per_pixel);
  return -VAR_0;
 }

 if (VAR_5->xres != VAR_5->xres_virtual)
  VAR_5->xres_virtual = VAR_5->xres;

 if (VAR_5->yres > VAR_5->yres_virtual)
  VAR_5->yres_virtual = VAR_5->yres;

 if (VAR_5->xoffset) {
  FUNC_0("xoffset not supported\n");
  return -VAR_0;
 }
 VAR_5->yoffset = 0;







 if (((VAR_5->vmode & VAR_3) == VAR_2) &&
     (VAR_7->max_pixclock < VAR_4)) {
  FUNC_0("interlace not supported\n");
  return -VAR_0;
 }

 if (VAR_6->monspecs.hfmax && VAR_6->monspecs.vfmax &&
     VAR_6->monspecs.dclkmax && FUNC_2(VAR_5, VAR_6) < 0) {
  FUNC_0("mode outside monitor's specs\n");
  return -VAR_0;
 }

 VAR_5->xres = (VAR_5->xres + 15) & ~15;
 VAR_8 = VAR_5->xres * ((VAR_5->bits_per_pixel + 7) >> 3);

 if (VAR_5->xres < 320 || VAR_5->xres > 2048) {
  FUNC_0("width not supported: %u\n", VAR_5->xres);
  return -VAR_0;
 }

 if (VAR_5->yres < 200 || VAR_5->yres > 2048) {
  FUNC_0("height not supported: %u\n", VAR_5->yres);
  return -VAR_0;
 }

 if (VAR_8 * VAR_5->yres_virtual > VAR_6->fix.smem_len) {
  VAR_5->yres_virtual = VAR_6->fix.smem_len / VAR_8;
  if (VAR_5->yres_virtual < VAR_5->yres) {
   FUNC_0("no memory for screen (%ux%ux%u)\n",
    VAR_5->xres, VAR_5->yres_virtual,
    VAR_5->bits_per_pixel);
   return -VAR_0;
  }
 }

 if (FUNC_1(VAR_5->pixclock) > VAR_7->max_pixclock) {
  FUNC_0("pixclock too high (%ldKHz)\n",
   FUNC_1(VAR_5->pixclock));
  return -VAR_0;
 }

 VAR_5->transp.offset = 0;
 VAR_5->transp.length = 0;
 switch (VAR_5->bits_per_pixel) {
 case 8:
  VAR_5->red.length = 8;
  VAR_5->red.offset = 0;
  VAR_5->green = VAR_5->red;
  VAR_5->blue = VAR_5->red;
  break;
 case 16:
  VAR_5->red.offset = 11;
  VAR_5->red.length = 5;
  VAR_5->green.offset = 5;
  VAR_5->green.length = 6;
  VAR_5->blue.offset = 0;
  VAR_5->blue.length = 5;
  break;
 case 32:
  VAR_5->transp.offset = 24;
  VAR_5->transp.length = 8;

 case 24:
  VAR_5->red.offset = 16;
  VAR_5->green.offset = 8;
  VAR_5->blue.offset = 0;
  VAR_5->red.length = VAR_5->green.length = VAR_5->blue.length = 8;
  break;
 }
 VAR_5->width = -1;
 VAR_5->height = -1;

 VAR_5->accel_flags = VAR_1;

 FUNC_0("Checking graphics mode at %dx%d depth %d\n",
  VAR_5->xres, VAR_5->yres, VAR_5->bits_per_pixel);
 return 0;
}
