
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int length; int offset; } ;
struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int xres_virtual; int yres; int yres_virtual; int vmode; int height; int width; scalar_t__ accel_flags; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; TYPE_2__ transp; int pixclock; scalar_t__ xoffset; } ;
struct TYPE_6__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_4, struct fb_info *VAR_5)
{
 u32 VAR_6;

 if (VAR_4->bits_per_pixel != 8 && VAR_4->bits_per_pixel != 16 &&
     VAR_4->bits_per_pixel != 24 && VAR_4->bits_per_pixel != 32) {
  FUNC_0("depth not supported: %u\n", VAR_4->bits_per_pixel);
  return -VAR_0;
 }

 if (VAR_4->xres != VAR_4->xres_virtual) {
  FUNC_0("virtual x resolution != "
   "physical x resolution not supported\n");
  return -VAR_0;
 }

 if (VAR_4->yres > VAR_4->yres_virtual) {
  FUNC_0("virtual y resolution < "
   "physical y resolution not possible\n");
  return -VAR_0;
 }


 if (VAR_4->yres_virtual > 2047) {
  VAR_4->yres_virtual = 2047;
 }

 if (VAR_4->xoffset) {
  FUNC_0("xoffset not supported\n");
  return -VAR_0;
 }

 if ((VAR_4->vmode & VAR_2) == VAR_1) {
  FUNC_0("interlace not supported\n");
  return -VAR_0;
 }

 VAR_4->xres = (VAR_4->xres + 15) & ~15;
 VAR_6 = VAR_4->xres * ((VAR_4->bits_per_pixel + 7) >> 3);

 if (VAR_4->xres < 320 || VAR_4->xres > 1600) {
  FUNC_0("width not supported: %u\n", VAR_4->xres);
  return -VAR_0;
 }

 if (VAR_4->yres < 200 || VAR_4->yres > 1200) {
  FUNC_0("height not supported: %u\n", VAR_4->yres);
  return -VAR_0;
 }

 if (VAR_6 * VAR_4->yres_virtual > VAR_5->fix.smem_len) {
  FUNC_0("no memory for screen (%ux%ux%u)\n",
   VAR_4->xres, VAR_4->yres_virtual, VAR_4->bits_per_pixel);
  return -VAR_0;
 }

 if (FUNC_1(VAR_4->pixclock) > VAR_3) {
  FUNC_0("pixclock too high (%ldKHz)\n",
   FUNC_1(VAR_4->pixclock));
  return -VAR_0;
 }

 VAR_4->transp.offset = 0;
 VAR_4->transp.length = 0;
 switch (VAR_4->bits_per_pixel) {
 case 8:
  VAR_4->red.length = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.length = 8;
  break;
 case 16:
  VAR_4->red.offset = 11;
  VAR_4->red.length = 5;
  VAR_4->green.offset = 5;
  VAR_4->green.length = 6;
  VAR_4->blue.offset = 0;
  VAR_4->blue.length = 5;
  break;
 case 32:
  VAR_4->transp.offset = 24;
  VAR_4->transp.length = 8;
  VAR_4->red.offset = 16;
  VAR_4->green.offset = 8;
  VAR_4->blue.offset = 0;
  VAR_4->red.length = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.length = 8;
  break;
 case 24:




  VAR_4->red.offset = 16;
  VAR_4->blue.offset = 0;

  VAR_4->green.offset = 8;
  VAR_4->red.length = 8;
  VAR_4->green.length = 8;
  VAR_4->blue.length = 8;
  break;
 }
 VAR_4->height = -1;
 VAR_4->width = -1;

 VAR_4->accel_flags = 0;

 FUNC_0("Checking graphics mode at %dx%d depth %d\n",
  VAR_4->xres, VAR_4->yres, VAR_4->bits_per_pixel);
 return 0;
}
