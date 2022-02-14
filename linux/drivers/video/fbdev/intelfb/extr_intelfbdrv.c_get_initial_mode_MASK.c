
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int length; int offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct fb_var_screeninfo {int xres; int yres; int bits_per_pixel; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; int pixclock; int height; int width; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; TYPE_1__ transp; } ;
struct intelfb_info {int initial_vga; int initial_video_ram; int initial_pitch; int initial_fb_base; struct fb_var_screeninfo initial_var; } ;
struct TYPE_10__ {int lfb_size; int lfb_width; int lfb_height; int lfb_depth; int red_size; int green_size; int blue_size; int rsvd_size; int rsvd_pos; int blue_pos; int green_pos; int red_pos; int lfb_linelength; int lfb_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fb_var_screeninfo*,int ,int) ;
 TYPE_5__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct intelfb_info *VAR_1)
{
 struct fb_var_screeninfo *VAR_2;
 int VAR_3, VAR_4;

 FUNC_1("get_initial_mode\n");

 VAR_1->initial_vga = 1;
 VAR_1->initial_fb_base = VAR_0.lfb_base;
 VAR_1->initial_video_ram = VAR_0.lfb_size * FUNC_2(64);
 VAR_1->initial_pitch = VAR_0.lfb_linelength;

 VAR_2 = &VAR_1->initial_var;
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->xres = VAR_0.lfb_width;
 VAR_2->yres = VAR_0.lfb_height;
 VAR_2->bits_per_pixel = VAR_0.lfb_depth;
 switch (VAR_0.lfb_depth) {
 case 15:
  VAR_2->bits_per_pixel = 16;
  break;
 case 24:
  VAR_2->bits_per_pixel = 32;
  break;
 }

 FUNC_1("Initial info: FB is 0x%x/0x%x (%d kByte)\n",
  VAR_1->initial_fb_base, VAR_1->initial_video_ram,
  FUNC_0(VAR_1->initial_video_ram));

 FUNC_1("Initial info: mode is %dx%d-%d (%d)\n",
  VAR_2->xres, VAR_2->yres, VAR_2->bits_per_pixel,
  VAR_1->initial_pitch);


 VAR_2->left_margin = (VAR_2->xres / 8) & 0xf8;
 VAR_2->right_margin = 32;
 VAR_2->upper_margin = 16;
 VAR_2->lower_margin = 4;
 VAR_2->hsync_len = (VAR_2->xres / 8) & 0xf8;
 VAR_2->vsync_len = 4;

 VAR_3 = VAR_2->xres + VAR_2->left_margin +
  VAR_2->right_margin + VAR_2->hsync_len;
 VAR_4 = VAR_2->yres + VAR_2->upper_margin +
  VAR_2->lower_margin + VAR_2->vsync_len;
 VAR_2->pixclock = 10000000 / VAR_3 * 1000 / VAR_4 * 100 / 60;

 VAR_2->height = -1;
 VAR_2->width = -1;

 if (VAR_2->bits_per_pixel > 8) {
  VAR_2->red.offset = VAR_0.red_pos;
  VAR_2->red.length = VAR_0.red_size;
  VAR_2->green.offset = VAR_0.green_pos;
  VAR_2->green.length = VAR_0.green_size;
  VAR_2->blue.offset = VAR_0.blue_pos;
  VAR_2->blue.length = VAR_0.blue_size;
  VAR_2->transp.offset = VAR_0.rsvd_pos;
  VAR_2->transp.length = VAR_0.rsvd_size;
 } else {
  VAR_2->red.length = 8;
  VAR_2->green.length = 8;
  VAR_2->blue.length = 8;
 }
}
