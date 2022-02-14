
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmiofb_par {scalar_t__ lcr; } ;
struct tmio_fb_data {int (* lcd_set_power ) (struct platform_device*,int) ;int (* lcd_mode ) (struct platform_device*,struct fb_videomode*) ;} ;
struct platform_device {int dev; } ;
struct fb_videomode {int hsync_len; int left_margin; int xres; int right_margin; int vsync_len; int upper_margin; int yres; int lower_margin; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct tmiofb_par* par; struct fb_videomode* mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 struct tmio_fb_data* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct fb_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int) ;
 int FUNC_4 (struct platform_device*,struct fb_videomode*) ;
 int FUNC_5 (struct platform_device*,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_21)
{
 struct tmio_fb_data *VAR_22 = FUNC_0(&VAR_21->dev);
 struct fb_info *VAR_23 = FUNC_2(VAR_21);
 struct fb_videomode *VAR_24 = VAR_23->mode;
 struct tmiofb_par *VAR_25 = VAR_23->par;
 unsigned int VAR_26;

 FUNC_6(0, VAR_25->lcr + VAR_2);
 VAR_22->lcd_set_power(VAR_21, 0);
 FUNC_6(0x0010, VAR_25->lcr + VAR_10);
 VAR_22->lcd_mode(VAR_21, VAR_24);
 VAR_22->lcd_set_power(VAR_21, 1);

 FUNC_6(VAR_23->fix.line_length, VAR_25->lcr + VAR_17);
 FUNC_6(0, VAR_25->lcr + VAR_0);
 FUNC_6(0, VAR_25->lcr + VAR_1);
 FUNC_6(VAR_23->fix.line_length >> 16, VAR_25->lcr + VAR_15);
 FUNC_6(VAR_23->fix.line_length, VAR_25->lcr + VAR_16);
 FUNC_6(VAR_26 = 0, VAR_25->lcr + VAR_6);
 FUNC_6(VAR_26 += VAR_24->hsync_len, VAR_25->lcr + VAR_5);
 FUNC_6(VAR_26 += VAR_24->left_margin, VAR_25->lcr + VAR_3);
 FUNC_6(VAR_26 += VAR_24->xres + VAR_24->right_margin, VAR_25->lcr + VAR_7);
 FUNC_6(VAR_24->xres, VAR_25->lcr + VAR_4);
 FUNC_6(VAR_26 = 0, VAR_25->lcr + VAR_19);
 FUNC_6(VAR_26 += VAR_24->vsync_len, VAR_25->lcr + VAR_18);
 FUNC_6(VAR_26 += VAR_24->upper_margin, VAR_25->lcr + VAR_14);
 FUNC_6(VAR_26 += VAR_24->yres, VAR_25->lcr + VAR_8);
 FUNC_6(VAR_26 += VAR_24->lower_margin, VAR_25->lcr + VAR_20);
 FUNC_6(3, VAR_25->lcr + VAR_11);
 FUNC_6(1, VAR_25->lcr + VAR_2);
 FUNC_6(0x4007, VAR_25->lcr + VAR_9);
 FUNC_6(3, VAR_25->lcr + VAR_12);

 FUNC_6(0x0010, VAR_25->lcr + VAR_10);
 FUNC_1(5);
 FUNC_6(0x0014, VAR_25->lcr + VAR_10);
 FUNC_1(5);
 FUNC_6(0x0015, VAR_25->lcr + VAR_10);
 FUNC_6(0xfffa, VAR_25->lcr + VAR_13);
}
