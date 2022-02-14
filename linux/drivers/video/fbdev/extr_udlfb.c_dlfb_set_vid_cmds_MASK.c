
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_var_screeninfo {int left_margin; int hsync_len; int xres; int upper_margin; int vsync_len; int yres; int right_margin; int lower_margin; int pixclock; } ;


 char* FUNC_0 (char*,int,int) ;
 char* FUNC_1 (char*,int,int) ;
 char* FUNC_2 (char*,int,int) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, struct fb_var_screeninfo *VAR_1)
{
 u16 VAR_2, VAR_3;
 u16 VAR_4, VAR_5;
 u16 VAR_6;


 VAR_2 = VAR_1->left_margin + VAR_1->hsync_len;
 VAR_0 = FUNC_2(VAR_0, 0x01, VAR_2);

 VAR_4 = VAR_2 + VAR_1->xres;
 VAR_0 = FUNC_2(VAR_0, 0x03, VAR_4);


 VAR_3 = VAR_1->upper_margin + VAR_1->vsync_len;
 VAR_0 = FUNC_2(VAR_0, 0x05, VAR_3);

 VAR_5 = VAR_3 + VAR_1->yres;
 VAR_0 = FUNC_2(VAR_0, 0x07, VAR_5);


 VAR_0 = FUNC_2(VAR_0, 0x09,
   VAR_4 + VAR_1->right_margin - 1);


 VAR_0 = FUNC_2(VAR_0, 0x0B, 1);


 VAR_0 = FUNC_2(VAR_0, 0x0D, VAR_1->hsync_len + 1);


 VAR_0 = FUNC_0(VAR_0, 0x0F, VAR_1->xres);


 VAR_6 = VAR_1->yres + VAR_1->upper_margin + VAR_1->lower_margin +
   VAR_1->vsync_len;
 VAR_0 = FUNC_2(VAR_0, 0x11, VAR_6);


 VAR_0 = FUNC_2(VAR_0, 0x13, 0);


 VAR_0 = FUNC_2(VAR_0, 0x15, VAR_1->vsync_len);


 VAR_0 = FUNC_0(VAR_0, 0x17, VAR_1->yres);


 VAR_0 = FUNC_1(VAR_0, 0x1B,
   200*1000*1000/VAR_1->pixclock);

 return VAR_0;
}
