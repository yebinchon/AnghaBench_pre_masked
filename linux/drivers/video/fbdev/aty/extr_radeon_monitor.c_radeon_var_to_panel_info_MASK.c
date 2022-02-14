
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock; int hAct_high; int vAct_high; int valid; int pwr_delay; scalar_t__ vblank; scalar_t__ vSync_width; scalar_t__ vOver_plus; scalar_t__ hblank; scalar_t__ hSync_width; scalar_t__ hOver_plus; int yres; int xres; } ;
struct radeonfb_info {TYPE_1__ panel_info; } ;
struct fb_var_screeninfo {int pixclock; int sync; scalar_t__ vsync_len; scalar_t__ lower_margin; scalar_t__ upper_margin; scalar_t__ hsync_len; scalar_t__ right_margin; scalar_t__ left_margin; int yres; int xres; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct radeonfb_info *VAR_2, struct fb_var_screeninfo *VAR_3)
{
 VAR_2->panel_info.xres = VAR_3->xres;
 VAR_2->panel_info.yres = VAR_3->yres;
 VAR_2->panel_info.clock = 100000000 / VAR_3->pixclock;
 VAR_2->panel_info.hOver_plus = VAR_3->right_margin;
 VAR_2->panel_info.hSync_width = VAR_3->hsync_len;
        VAR_2->panel_info.hblank = VAR_3->left_margin +
  (VAR_3->right_margin + VAR_3->hsync_len);
 VAR_2->panel_info.vOver_plus = VAR_3->lower_margin;
 VAR_2->panel_info.vSync_width = VAR_3->vsync_len;
        VAR_2->panel_info.vblank = VAR_3->upper_margin +
  (VAR_3->lower_margin + VAR_3->vsync_len);
 VAR_2->panel_info.hAct_high =
  (VAR_3->sync & VAR_0) != 0;
 VAR_2->panel_info.vAct_high =
  (VAR_3->sync & VAR_1) != 0;
 VAR_2->panel_info.valid = 1;





 VAR_2->panel_info.pwr_delay = 200;
}
