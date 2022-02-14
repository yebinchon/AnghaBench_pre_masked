
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
struct TYPE_9__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_8__ {scalar_t__ offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int xres_virtual; int xoffset; int xres; int yoffset; int yres; int yres_virtual; int bits_per_pixel; int height; int width; scalar_t__ rotate; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; scalar_t__ nonstd; scalar_t__ grayscale; } ;
struct TYPE_10__ {int smem_len; } ;
struct fb_info {int device; TYPE_5__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fb_var_screeninfo*,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_3, struct fb_info *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_6, &VAR_5);
 if (!VAR_7)
  return -VAR_1;


 if (VAR_3->xres_virtual > VAR_5 / VAR_0) {
  FUNC_0(VAR_4->device,
   "Horizontal virtual screen size too large\n");
  return -VAR_1;
 }

 if (VAR_3->xoffset + VAR_3->xres > VAR_3->xres_virtual ||
     VAR_3->yoffset + VAR_3->yres > VAR_3->yres_virtual) {
  FUNC_0(VAR_4->device, "panning out-of-range\n");
  return -VAR_1;
 }


 if (VAR_3->bits_per_pixel > 32 || VAR_3->grayscale ||
     VAR_3->red.offset > 16 || VAR_3->green.offset > 8 ||
     VAR_3->blue.offset > 0 || VAR_3->transp.offset > 24 ||
     VAR_3->red.length > 8 || VAR_3->green.length > 8 ||
     VAR_3->blue.length > 8 || VAR_3->transp.length > 8 ||
     VAR_3->red.msb_right || VAR_3->green.msb_right ||
     VAR_3->blue.msb_right || VAR_3->transp.msb_right || VAR_3->nonstd) {
  FUNC_0(VAR_4->device, "We support ARGB8888 only\n");
  return -VAR_1;
 }

 VAR_3->bits_per_pixel = 32;
 VAR_3->red.offset = 16;
 VAR_3->green.offset = 8;
 VAR_3->blue.offset = 0;
 VAR_3->transp.offset = 24;
 VAR_3->red.length = 8;
 VAR_3->green.length = 8;
 VAR_3->blue.length = 8;
 VAR_3->transp.length = 8;
 VAR_3->red.msb_right = 0;
 VAR_3->green.msb_right = 0;
 VAR_3->blue.msb_right = 0;
 VAR_3->transp.msb_right = 0;


 if (VAR_3->rotate) {
  FUNC_0(VAR_4->device, "Rotation is not supported\n");
  return -VAR_1;
 }


 if (VAR_3->yres_virtual * VAR_5 > VAR_4->fix.smem_len) {
  FUNC_0(VAR_4->device, "Not enough memory\n");
  return -VAR_2;
 }

 VAR_3->height = -1;
 VAR_3->width = -1;

 return 0;
}
