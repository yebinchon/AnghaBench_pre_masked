
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int color_depth; int en_crtc; int en_graphic_req; int en_graphic_crtc; int lcd_pclk_on; int lcd_sclk_on; int total_req_graphic; unsigned long portrait_mode; int req_freq; int low_power_on; } ;
struct TYPE_7__ {int color_depth; int en_crtc; int en_graphic_req; int en_graphic_crtc; int lcd_pclk_on; int lcd_sclk_on; int low_power_on; int req_freq; unsigned long portrait_mode; int total_req_graphic; } ;
union graphic_ctrl_u {unsigned long val; TYPE_2__ f_w32xx; TYPE_1__ f_w100; } ;
typedef unsigned long u32 ;
struct w100fb_par {int xres; int yres; int chip_id; TYPE_3__* mode; scalar_t__ flip; } ;
struct TYPE_10__ {unsigned long pclk_post_div; int pclk_src_sel; } ;
struct TYPE_11__ {scalar_t__ val; TYPE_4__ f; } ;
struct TYPE_12__ {TYPE_5__ pclk_cntl; } ;
struct TYPE_9__ {int xres; unsigned long pixclk_divider; unsigned long pixclk_divider_rotated; int pixclk_src; } ;


 unsigned long VAR_0 ;



 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct w100fb_par *VAR_8)
{
 unsigned long VAR_9=0, VAR_10, VAR_11=0;
 union graphic_ctrl_u VAR_12;


 if (VAR_8->xres == VAR_8->mode->xres) {
  if (VAR_8->flip) {
   VAR_9=3;
   VAR_11=(VAR_8->xres * VAR_8->yres) - 1;
  }
  VAR_10 = VAR_8->mode->pixclk_divider;
 } else {
  if (VAR_8->flip) {
   VAR_9=2;
   VAR_11=VAR_8->xres - 1;
  } else {
   VAR_9=1;
   VAR_11=VAR_8->xres * (VAR_8->yres - 1);
  }
  VAR_10 = VAR_8->mode->pixclk_divider_rotated;
 }

 VAR_12.val = 0;
 switch (VAR_8->chip_id) {
  case 130:
   VAR_12.f_w100.color_depth=6;
   VAR_12.f_w100.en_crtc=1;
   VAR_12.f_w100.en_graphic_req=1;
   VAR_12.f_w100.en_graphic_crtc=1;
   VAR_12.f_w100.lcd_pclk_on=1;
   VAR_12.f_w100.lcd_sclk_on=1;
   VAR_12.f_w100.low_power_on=0;
   VAR_12.f_w100.req_freq=0;
   VAR_12.f_w100.portrait_mode=VAR_9;


   switch(VAR_8->xres) {
    case 240:
    case 320:
    default:
     VAR_12.f_w100.total_req_graphic=0xa0;
     break;
    case 480:
    case 640:
     switch(VAR_9) {
      case 0:
      case 3:
       VAR_12.f_w100.low_power_on=1;
       VAR_12.f_w100.req_freq=5;
      break;
      case 1:
      case 2:
       VAR_12.f_w100.req_freq=4;
       break;
      default:
       break;
     }
     VAR_12.f_w100.total_req_graphic=0xf0;
     break;
   }
   break;
  case 129:
  case 128:
   VAR_12.f_w32xx.color_depth=6;
   VAR_12.f_w32xx.en_crtc=1;
   VAR_12.f_w32xx.en_graphic_req=1;
   VAR_12.f_w32xx.en_graphic_crtc=1;
   VAR_12.f_w32xx.lcd_pclk_on=1;
   VAR_12.f_w32xx.lcd_sclk_on=1;
   VAR_12.f_w32xx.low_power_on=0;
   VAR_12.f_w32xx.req_freq=0;
   VAR_12.f_w32xx.total_req_graphic=VAR_8->mode->xres >> 1;
   VAR_12.f_w32xx.portrait_mode=VAR_9;
   break;
 }


 VAR_7.pclk_cntl.f.pclk_src_sel = VAR_8->mode->pixclk_src;
 VAR_7.pclk_cntl.f.pclk_post_div = VAR_10;
 FUNC_0((u32) (VAR_7.pclk_cntl.val), VAR_6 + VAR_5);

 FUNC_0(VAR_12.val, VAR_6 + VAR_2);
 FUNC_0(VAR_1 + ((VAR_11 * VAR_0/8)&~0x03UL), VAR_6 + VAR_3);
 FUNC_0((VAR_8->xres*VAR_0/8), VAR_6 + VAR_4);
}
