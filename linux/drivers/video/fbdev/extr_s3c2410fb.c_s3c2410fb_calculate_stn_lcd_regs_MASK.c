
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410fb_info {int dev; } ;
struct s3c2410fb_hw {int lcdcon1; int lcdcon3; int lcdcon4; int lcdcon2; } ;
struct fb_var_screeninfo {int xres; int left_margin; int hsync_len; int bits_per_pixel; int right_margin; scalar_t__ yres; } ;
struct fb_info {struct fb_var_screeninfo var; struct s3c2410fb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_7(const struct fb_info *VAR_7,
          struct s3c2410fb_hw *VAR_8)
{
 const struct s3c2410fb_info *VAR_9 = VAR_7->par;
 const struct fb_var_screeninfo *VAR_10 = &VAR_7->var;
 int VAR_11 = VAR_8->lcdcon1 & ~VAR_6;
 int VAR_12 = VAR_10->xres >> 2;
 unsigned VAR_13 = (VAR_10->left_margin >> 4) - 1;
 unsigned VAR_14 = (VAR_10->hsync_len >> 4) - 1;

 if (VAR_11 != VAR_3)
  VAR_12 >>= 1;

 switch (VAR_10->bits_per_pixel) {
 case 1:
  VAR_8->lcdcon1 |= VAR_1;
  break;
 case 2:
  VAR_8->lcdcon1 |= VAR_2;
  break;
 case 4:
  VAR_8->lcdcon1 |= VAR_4;
  break;
 case 8:
  VAR_8->lcdcon1 |= VAR_5;
  VAR_12 *= 3;
  break;
 case 12:
  VAR_8->lcdcon1 |= VAR_0;
  VAR_12 *= 3;
  break;

 default:

  FUNC_5(VAR_9->dev, "invalid bpp %d\n",
   VAR_10->bits_per_pixel);
 }

 FUNC_6("setting horz: lft=%d, rt=%d, sync=%d\n",
  VAR_10->left_margin, VAR_10->right_margin, VAR_10->hsync_len);

 VAR_8->lcdcon2 = FUNC_0(VAR_10->yres - 1);

 if (VAR_13 > 3)
  VAR_13 = 3;

 if (VAR_14 > 3)
  VAR_14 = 3;

 VAR_8->lcdcon3 = FUNC_3(VAR_13) |
   FUNC_2(VAR_10->right_margin / 8) |
   FUNC_1(VAR_12 - 1);

 VAR_8->lcdcon4 = FUNC_4(VAR_14);
}
