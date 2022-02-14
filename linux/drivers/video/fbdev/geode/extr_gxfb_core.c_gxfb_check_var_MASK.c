
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct TYPE_10__ {int smem_len; } ;
struct fb_info {TYPE_5__ fix; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 if (VAR_1->xres > 1600 || VAR_1->yres > 1200)
  return -VAR_0;
 if ((VAR_1->xres > 1280 || VAR_1->yres > 1024) && VAR_1->bits_per_pixel > 16)
  return -VAR_0;

 if (VAR_1->bits_per_pixel == 32) {
  VAR_1->red.offset = 16; VAR_1->red.length = 8;
  VAR_1->green.offset = 8; VAR_1->green.length = 8;
  VAR_1->blue.offset = 0; VAR_1->blue.length = 8;
 } else if (VAR_1->bits_per_pixel == 16) {
  VAR_1->red.offset = 11; VAR_1->red.length = 5;
  VAR_1->green.offset = 5; VAR_1->green.length = 6;
  VAR_1->blue.offset = 0; VAR_1->blue.length = 5;
 } else if (VAR_1->bits_per_pixel == 8) {
  VAR_1->red.offset = 0; VAR_1->red.length = 8;
  VAR_1->green.offset = 0; VAR_1->green.length = 8;
  VAR_1->blue.offset = 0; VAR_1->blue.length = 8;
 } else
  return -VAR_0;
 VAR_1->transp.offset = 0; VAR_1->transp.length = 0;


 if (FUNC_0(VAR_1->xres, VAR_1->bits_per_pixel) * VAR_1->yres > VAR_2->fix.smem_len)
  return -VAR_0;



 return 0;
}
