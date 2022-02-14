
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vivid_dev {int dummy; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int hsync_len; int vsync_len; int pixclock; int right_margin; int lower_margin; int vmode; scalar_t__ nonstd; scalar_t__ upper_margin; scalar_t__ left_margin; scalar_t__ yoffset; scalar_t__ xoffset; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vivid_dev*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_2, struct vivid_dev *VAR_3)
{
 FUNC_0(VAR_3, 1, "vivid_fb_check_var\n");

 VAR_2->bits_per_pixel = 16;
 if (VAR_2->green.length == 5) {
  VAR_2->red.offset = 10;
  VAR_2->red.length = 5;
  VAR_2->green.offset = 5;
  VAR_2->green.length = 5;
  VAR_2->blue.offset = 0;
  VAR_2->blue.length = 5;
  VAR_2->transp.offset = 15;
  VAR_2->transp.length = 1;
 } else {
  VAR_2->red.offset = 11;
  VAR_2->red.length = 5;
  VAR_2->green.offset = 5;
  VAR_2->green.length = 6;
  VAR_2->blue.offset = 0;
  VAR_2->blue.length = 5;
  VAR_2->transp.offset = 0;
  VAR_2->transp.length = 0;
 }
 VAR_2->xoffset = VAR_2->yoffset = 0;
 VAR_2->left_margin = VAR_2->upper_margin = 0;
 VAR_2->nonstd = 0;

 VAR_2->vmode &= ~VAR_0;
 VAR_2->vmode |= VAR_1;


 VAR_2->hsync_len = 24;
 VAR_2->vsync_len = 2;
 VAR_2->pixclock = 84316;
 VAR_2->right_margin = 776;
 VAR_2->lower_margin = 591;
 return 0;
}
