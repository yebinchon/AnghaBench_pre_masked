
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int offset; int length; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct fb_var_screeninfo *VAR_2)
{
 switch (VAR_2->bits_per_pixel) {
     case 16:
  FUNC_0(VAR_1);
  VAR_2->red.offset = 11; VAR_2->red.length = 5;
  VAR_2->green.offset = 5; VAR_2->green.length = 6;
  VAR_2->blue.offset = 0; VAR_2->blue.length = 5;
  VAR_2->transp.offset = 0; VAR_2->transp.length = 0;
  break;
     case 24:
  VAR_2->red.offset = 16; VAR_2->red.length = 8;
  VAR_2->green.offset = 8; VAR_2->green.length = 8;
  VAR_2->blue.offset = 0; VAR_2->blue.length = 8;
  VAR_2->transp.offset = 0; VAR_2->transp.length = 0;
  break;
     case 32:
  FUNC_0(VAR_0);
  VAR_2->red.offset = 16; VAR_2->red.length = 8;
  VAR_2->green.offset = 8; VAR_2->green.length = 8;
  VAR_2->blue.offset = 0; VAR_2->blue.length = 8;
  VAR_2->transp.offset = 24; VAR_2->transp.length = 8;
  break;
 }
}
