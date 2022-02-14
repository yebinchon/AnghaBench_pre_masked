
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_5__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ nonstd; TYPE_1__ transp; scalar_t__ grayscale; } ;



__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0, u8 VAR_1)
{
 VAR_0->grayscale = 0;
 VAR_0->red.msb_right = 0;
 VAR_0->green.msb_right = 0;
 VAR_0->blue.msb_right = 0;
 VAR_0->transp.offset = 0;
 VAR_0->transp.length = 0;
 VAR_0->transp.msb_right = 0;
 VAR_0->nonstd = 0;
 switch (VAR_1) {
 case 8:
  VAR_0->bits_per_pixel = 8;
  VAR_0->red.offset = 0;
  VAR_0->green.offset = 0;
  VAR_0->blue.offset = 0;
  VAR_0->red.length = 8;
  VAR_0->green.length = 8;
  VAR_0->blue.length = 8;
  break;
 case 15:
  VAR_0->bits_per_pixel = 16;
  VAR_0->red.offset = 10;
  VAR_0->green.offset = 5;
  VAR_0->blue.offset = 0;
  VAR_0->red.length = 5;
  VAR_0->green.length = 5;
  VAR_0->blue.length = 5;
  break;
 case 16:
  VAR_0->bits_per_pixel = 16;
  VAR_0->red.offset = 11;
  VAR_0->green.offset = 5;
  VAR_0->blue.offset = 0;
  VAR_0->red.length = 5;
  VAR_0->green.length = 6;
  VAR_0->blue.length = 5;
  break;
 case 24:
  VAR_0->bits_per_pixel = 32;
  VAR_0->red.offset = 16;
  VAR_0->green.offset = 8;
  VAR_0->blue.offset = 0;
  VAR_0->red.length = 8;
  VAR_0->green.length = 8;
  VAR_0->blue.length = 8;
  break;
 case 30:
  VAR_0->bits_per_pixel = 32;
  VAR_0->red.offset = 20;
  VAR_0->green.offset = 10;
  VAR_0->blue.offset = 0;
  VAR_0->red.length = 10;
  VAR_0->green.length = 10;
  VAR_0->blue.length = 10;
  break;
 }
}
