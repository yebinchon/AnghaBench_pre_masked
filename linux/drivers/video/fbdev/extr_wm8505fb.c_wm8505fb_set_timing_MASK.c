
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8505fb_info {scalar_t__ regbase; } ;
struct TYPE_2__ {int left_margin; int xres; int right_margin; int hsync_len; int upper_margin; int yres; int lower_margin; int vsync_len; } ;
struct fb_info {TYPE_1__ var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct wm8505fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_9)
{
 struct wm8505fb_info *VAR_10 = FUNC_0(VAR_9);

 int VAR_11 = VAR_9->var.left_margin;
 int VAR_12 = VAR_11 + VAR_9->var.xres;
 int VAR_13 = VAR_12 + VAR_9->var.right_margin;
 int VAR_14 = VAR_9->var.hsync_len;

 int VAR_15 = VAR_9->var.upper_margin;
 int VAR_16 = VAR_15 + VAR_9->var.yres;
 int VAR_17 = VAR_16 + VAR_9->var.lower_margin;
 int VAR_18 = VAR_9->var.vsync_len;

 FUNC_1(0, VAR_10->regbase + VAR_0);

 FUNC_1(VAR_11, VAR_10->regbase + VAR_3);
 FUNC_1(VAR_12, VAR_10->regbase + VAR_2);
 FUNC_1(VAR_13, VAR_10->regbase + VAR_1);
 FUNC_1(VAR_14, VAR_10->regbase + VAR_4);

 FUNC_1(VAR_15, VAR_10->regbase + VAR_7);
 FUNC_1(VAR_16, VAR_10->regbase + VAR_6);
 FUNC_1(VAR_17, VAR_10->regbase + VAR_5);
 FUNC_1(VAR_18, VAR_10->regbase + VAR_8);

 FUNC_1(1, VAR_10->regbase + VAR_0);

 return 0;
}
