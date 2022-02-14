
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct via_display_timing {int hor_addr; int hor_sync_start; int hor_sync_end; int hor_total; int hor_blank_start; int hor_blank_end; int ver_addr; int ver_sync_start; int ver_sync_end; int ver_total; int ver_blank_start; int ver_blank_end; } ;
struct fb_var_screeninfo {int xres; int yres; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; } ;



struct via_display_timing FUNC_0(const struct fb_var_screeninfo *VAR_0,
 u16 VAR_1, u16 VAR_2)
{
 struct via_display_timing VAR_3;
 u16 VAR_4 = (VAR_0->xres - VAR_1) / 2, VAR_5 = (VAR_0->yres - VAR_2) / 2;

 VAR_3.hor_addr = VAR_1;
 VAR_3.hor_sync_start = VAR_3.hor_addr + VAR_0->right_margin + VAR_4;
 VAR_3.hor_sync_end = VAR_3.hor_sync_start + VAR_0->hsync_len;
 VAR_3.hor_total = VAR_3.hor_sync_end + VAR_0->left_margin + VAR_4;
 VAR_3.hor_blank_start = VAR_3.hor_addr + VAR_4;
 VAR_3.hor_blank_end = VAR_3.hor_total - VAR_4;
 VAR_3.ver_addr = VAR_2;
 VAR_3.ver_sync_start = VAR_3.ver_addr + VAR_0->lower_margin + VAR_5;
 VAR_3.ver_sync_end = VAR_3.ver_sync_start + VAR_0->vsync_len;
 VAR_3.ver_total = VAR_3.ver_sync_end + VAR_0->upper_margin + VAR_5;
 VAR_3.ver_blank_start = VAR_3.ver_addr + VAR_5;
 VAR_3.ver_blank_end = VAR_3.ver_total - VAR_5;
 return VAR_3;
}
