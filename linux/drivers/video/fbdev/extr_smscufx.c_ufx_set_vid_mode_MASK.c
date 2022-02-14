
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ufx_data {int dummy; } ;
struct fb_var_screeninfo {int xres; int right_margin; int hsync_len; int left_margin; int upper_margin; int yres; int lower_margin; int vsync_len; int sync; int pixclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ufx_data*,int) ;
 int FUNC_2 (struct ufx_data*,int ) ;
 int FUNC_3 (struct ufx_data*,int) ;
 int FUNC_4 (struct ufx_data*,int) ;
 int FUNC_5 (struct ufx_data*,int,int) ;
 int FUNC_6 (struct ufx_data*,int) ;

__attribute__((used)) static int FUNC_7(struct ufx_data *VAR_2, struct fb_var_screeninfo *VAR_3)
{
 u32 VAR_4;
 u16 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u16 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 int VAR_17 = FUNC_5(VAR_2, 0x8028, 0);
 FUNC_0(VAR_17, "ufx_set_vid_mode error disabling RGB pad");

 VAR_17 = FUNC_5(VAR_2, 0x8024, 0);
 FUNC_0(VAR_17, "ufx_set_vid_mode error disabling VDAC");


 VAR_17 = FUNC_1(VAR_2, 1);
 FUNC_0(VAR_17, "ufx_set_vid_mode error blanking display");

 VAR_17 = FUNC_3(VAR_2, 1);
 FUNC_0(VAR_17, "ufx_set_vid_mode error disabling display");

 VAR_17 = FUNC_2(VAR_2, VAR_3->pixclock);
 FUNC_0(VAR_17, "ufx_set_vid_mode error configuring pixclock");

 VAR_17 = FUNC_5(VAR_2, 0x2000, 0x00000104);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2000");


 VAR_5 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len + VAR_3->left_margin;
 VAR_6 = VAR_3->xres;
 VAR_7 = VAR_3->xres + VAR_3->right_margin;
 VAR_8 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len;
 VAR_9 = VAR_3->xres + VAR_3->right_margin;
 VAR_10 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len;

 VAR_4 = ((VAR_5 - 1) << 16) | (VAR_6 - 1);
 VAR_17 = FUNC_5(VAR_2, 0x2008, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2008");

 VAR_4 = ((VAR_7 - 1) << 16) | (VAR_8 - 1);
 VAR_17 = FUNC_5(VAR_2, 0x200C, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x200C");

 VAR_4 = ((VAR_9 - 1) << 16) | (VAR_10 - 1);
 VAR_17 = FUNC_5(VAR_2, 0x2010, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2010");


 VAR_11 = VAR_3->upper_margin + VAR_3->yres + VAR_3->lower_margin + VAR_3->vsync_len;
 VAR_12 = VAR_3->yres;
 VAR_13 = VAR_3->yres + VAR_3->lower_margin;
 VAR_14 = VAR_3->yres + VAR_3->lower_margin + VAR_3->vsync_len;
 VAR_15 = VAR_3->yres + VAR_3->lower_margin;
 VAR_16 = VAR_3->yres + VAR_3->lower_margin + VAR_3->vsync_len;

 VAR_4 = ((VAR_11 - 1) << 16) | (VAR_12 - 1);
 VAR_17 = FUNC_5(VAR_2, 0x2014, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2014");

 VAR_4 = ((VAR_13 - 1) << 16) | (VAR_14 - 1);
 VAR_17 = FUNC_5(VAR_2, 0x2018, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2018");

 VAR_4 = ((VAR_15 - 1) << 16) | (VAR_16 - 1);
 VAR_17 = FUNC_5(VAR_2, 0x201C, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x201C");

 VAR_17 = FUNC_5(VAR_2, 0x2020, 0x00000000);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2020");

 VAR_17 = FUNC_5(VAR_2, 0x2024, 0x00000000);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2024");


 VAR_4 = VAR_3->xres * VAR_3->yres * 2;
 VAR_4 = (VAR_4 + 7) & (~0x7);
 VAR_17 = FUNC_5(VAR_2, 0x2028, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2028");


 VAR_17 = FUNC_5(VAR_2, 0x2040, 0);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2040");

 VAR_17 = FUNC_5(VAR_2, 0x2044, 0);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2044");

 VAR_17 = FUNC_5(VAR_2, 0x2048, 0);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2048");


 VAR_4 = 0x00000001;
 if (VAR_3->sync & VAR_0)
  VAR_4 |= 0x00000010;

 if (VAR_3->sync & VAR_1)
  VAR_4 |= 0x00000008;

 VAR_17 = FUNC_5(VAR_2, 0x2040, VAR_4);
 FUNC_0(VAR_17, "ufx_set_vid_mode error writing 0x2040");


 VAR_17 = FUNC_4(VAR_2, 1);
 FUNC_0(VAR_17, "ufx_set_vid_mode error enabling display");


 VAR_17 = FUNC_6(VAR_2, 1);
 FUNC_0(VAR_17, "ufx_set_vid_mode error unblanking display");


 VAR_17 = FUNC_5(VAR_2, 0x8028, 0x00000003);
 FUNC_0(VAR_17, "ufx_set_vid_mode error enabling RGB pad");


 VAR_17 = FUNC_5(VAR_2, 0x8024, 0x00000007);
 FUNC_0(VAR_17, "ufx_set_vid_mode error enabling VDAC");

 return 0;
}
