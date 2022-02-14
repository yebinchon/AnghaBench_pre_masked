
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
struct TYPE_9__ {unsigned int length; int offset; } ;
struct TYPE_8__ {unsigned int length; int offset; } ;
struct TYPE_7__ {unsigned int length; int offset; } ;
struct TYPE_6__ {unsigned int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {unsigned int bits_per_pixel; int height; int width; int xres; int xres_virtual; int yres; int yres_virtual; int vmode; scalar_t__ accel_flags; int pixclock; scalar_t__ xoffset; TYPE_4__ red; TYPE_3__ transp; TYPE_2__ green; TYPE_1__ blue; } ;
struct TYPE_10__ {int smem_len; } ;
struct fb_info {TYPE_5__ fix; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_4, struct fb_info *VAR_5)
{
 u32 VAR_6;
 unsigned VAR_7 = VAR_4->red.length + VAR_4->green.length
   + VAR_4->blue.length + VAR_4->transp.length;

 if (VAR_7 != VAR_4->bits_per_pixel) {


  switch (VAR_4->bits_per_pixel) {
  case 8:
   VAR_4->red.length = 8;
   VAR_4->green.length = 8;
   VAR_4->blue.length = 8;
   VAR_4->red.offset = 0;
   VAR_4->green.offset = 0;
   VAR_4->blue.offset = 0;
   VAR_4->transp.offset = 0;
   VAR_4->transp.length = 0;
   break;
  case 16:
   VAR_4->red.length = 5;
   VAR_4->blue.length = 5;
   VAR_4->green.length = 6;
   VAR_4->transp.length = 0;
   break;
  case 32:
   VAR_4->red.length = 8;
   VAR_4->green.length = 8;
   VAR_4->blue.length = 8;
   VAR_4->transp.length = 8;
   break;
  default:
   FUNC_0("depth not supported: %u\n",
    VAR_4->bits_per_pixel);
   return -VAR_0;
  }
 }

 if (VAR_4->bits_per_pixel > 8 ) {
  VAR_4->blue.offset = 0;
  VAR_4->green.offset = VAR_4->blue.length;
  VAR_4->red.offset = VAR_4->green.offset + VAR_4->green.length;
  VAR_4->transp.offset = VAR_4->red.offset + VAR_4->red.length;
 }
 VAR_4->height = -1;
 VAR_4->width = -1;

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

 if (VAR_4->xoffset) {
  FUNC_0("xoffset not supported\n");
  return -VAR_0;
 }

 if ((VAR_4->vmode & VAR_2) == VAR_1) {
  FUNC_0("interlace not supported\n");
  return -VAR_0;
 }

 VAR_4->xres = (VAR_4->xres + 31) & ~31;
 VAR_6 = VAR_4->xres * ((VAR_4->bits_per_pixel + 7) >> 3);

 if (VAR_4->xres < 200 || VAR_4->xres > 2048) {
  FUNC_0("width not supported: %u\n", VAR_4->xres);
  return -VAR_0;
 }

 if (VAR_4->yres < 200 || VAR_4->yres > 4095) {
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

 VAR_4->accel_flags = 0;

 FUNC_0("Checking graphics mode at %dx%d depth %d\n",
  VAR_4->xres, VAR_4->yres, VAR_4->bits_per_pixel);
 return 0;
}
