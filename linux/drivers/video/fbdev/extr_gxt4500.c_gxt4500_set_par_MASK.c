
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gxt4500_par {int pll_n; int pll_m; int pll_pd2; int pll_pd1; unsigned int pixfmt; } ;
struct fb_var_screeninfo {unsigned int xres; unsigned int left_margin; unsigned int right_margin; unsigned int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; int pixclock; int xres_virtual; int xoffset; int yoffset; int sync; } ;
struct TYPE_2__ {unsigned int line_length; int visual; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; struct gxt4500_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct gxt4500_par*) ;
 int* VAR_48 ;
 int FUNC_1 (int) ;
 int* VAR_49 ;
 unsigned int* VAR_50 ;
 int FUNC_2 (struct gxt4500_par*,scalar_t__) ;
 int FUNC_3 (int) ;
 int* VAR_51 ;
 int FUNC_4 (struct gxt4500_par*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_52)
{
 struct gxt4500_par *VAR_53 = VAR_52->par;
 struct fb_var_screeninfo *VAR_54 = &VAR_52->var;
 int VAR_55;
 u32 VAR_56, VAR_57;
 unsigned int VAR_58, VAR_59, VAR_60;
 unsigned int VAR_61, VAR_62;
 unsigned int VAR_63, VAR_64;
 struct gxt4500_par VAR_65;

 VAR_65 = *VAR_53;
 VAR_55 = FUNC_0(VAR_54, VAR_53);
 if (VAR_55) {
  *VAR_53 = VAR_65;
  return VAR_55;
 }


 VAR_56 = FUNC_2(VAR_53, VAR_10);
 VAR_56 &= ~(VAR_11 | VAR_12);
 FUNC_4(VAR_53, VAR_10, VAR_56);


 VAR_57 = FUNC_2(VAR_53, VAR_31) & ~0x7f;
 if (VAR_53->pll_n < 38)
  VAR_57 |= 0x29;
 if (VAR_53->pll_n < 69)
  VAR_57 |= 0x35;
 else if (VAR_53->pll_n < 100)
  VAR_57 |= 0x76;
 else
  VAR_57 |= 0x7e;
 FUNC_4(VAR_53, VAR_31, VAR_57);
 FUNC_4(VAR_53, VAR_32, VAR_48[VAR_53->pll_m - 1]);
 FUNC_4(VAR_53, VAR_33, VAR_49[VAR_53->pll_n - 2]);
 VAR_57 = ((8 - VAR_53->pll_pd2) << 3) | (8 - VAR_53->pll_pd1);
 if (VAR_53->pll_pd1 == 8 || VAR_53->pll_pd2 == 8) {

  FUNC_4(VAR_53, VAR_34, VAR_57 | 0x9);
  FUNC_3(1);
 }
 FUNC_4(VAR_53, VAR_34, VAR_57);
 FUNC_1(20);


 FUNC_4(VAR_53, VAR_2, VAR_3);


 FUNC_4(VAR_53, VAR_1, VAR_0 | (VAR_0 << 16));
 FUNC_3(10);
 FUNC_4(VAR_53, VAR_1, VAR_0 << 16);


 VAR_64 = VAR_54->xres + VAR_54->left_margin + VAR_54->right_margin +
  VAR_54->hsync_len;
 FUNC_4(VAR_53, VAR_14, VAR_64 - 1);
 FUNC_4(VAR_53, VAR_13, VAR_54->xres - 1);
 FUNC_4(VAR_53, VAR_17, VAR_54->xres + VAR_54->right_margin - 1);
 FUNC_4(VAR_53, VAR_15,
   VAR_54->xres + VAR_54->right_margin + VAR_54->hsync_len - 1);
 FUNC_4(VAR_53, VAR_16,
   VAR_54->xres + VAR_54->right_margin + VAR_54->hsync_len - 1);
 FUNC_4(VAR_53, VAR_19,
   VAR_54->yres + VAR_54->upper_margin + VAR_54->lower_margin +
   VAR_54->vsync_len - 1);
 FUNC_4(VAR_53, VAR_18, VAR_54->yres - 1);
 FUNC_4(VAR_53, VAR_22, VAR_54->yres + VAR_54->lower_margin - 1);
 FUNC_4(VAR_53, VAR_21,
   VAR_54->yres + VAR_54->lower_margin + VAR_54->vsync_len - 1);
 VAR_63 = 3300000 / VAR_54->pixclock;
 if (VAR_63 >= VAR_64)
  VAR_63 = VAR_64 - 1;
 FUNC_4(VAR_53, VAR_20, VAR_64 - VAR_63 - 1);
 VAR_56 |= VAR_11 | VAR_12;
 FUNC_4(VAR_53, VAR_10, VAR_56);


 if (VAR_54->xres_virtual > 2048) {
  VAR_60 = 4096;
  VAR_58 = VAR_8;
 } else if (VAR_54->xres_virtual > 1024) {
  VAR_60 = 2048;
  VAR_58 = VAR_7;
 } else {
  VAR_60 = 1024;
  VAR_58 = VAR_6;
 }


 VAR_61 = (VAR_54->xres_virtual + 63) >> 6;


 FUNC_4(VAR_53, VAR_23, VAR_25 | (VAR_61 << 16) | 0);
 FUNC_4(VAR_53, VAR_35, VAR_25 | (VAR_61 << 16) | 0);
 FUNC_4(VAR_53, VAR_24, VAR_25 | (VAR_61 << 16) | 0);
 FUNC_4(VAR_53, VAR_36, VAR_25 | (VAR_61 << 16) | 0);
 FUNC_4(VAR_53, VAR_38, (VAR_54->xoffset << 16) | VAR_54->yoffset);
 FUNC_4(VAR_53, VAR_37, (VAR_54->xres << 16) | VAR_54->yres);



 VAR_59 = VAR_53->pixfmt;
 VAR_58 |= VAR_5 | VAR_59;
 FUNC_4(VAR_53, VAR_4, VAR_58);






 for (VAR_62 = 0; VAR_62 < 32; ++VAR_62) {
  FUNC_4(VAR_53, VAR_45 + (VAR_62 << 4), VAR_51[VAR_59]);
  FUNC_4(VAR_53, VAR_43 + (VAR_62 << 4), 0);
  FUNC_4(VAR_53, VAR_44 + (VAR_62 << 4), 0);
  FUNC_4(VAR_53, VAR_46 + (VAR_62 << 4), VAR_47);
 }


 VAR_56 = FUNC_2(VAR_53, VAR_39) &
  ~(VAR_41 | VAR_40 |
    VAR_42);
 if (VAR_54->sync & VAR_27)
  VAR_56 |= VAR_41;
 if (!(VAR_54->sync & VAR_26))
  VAR_56 |= VAR_40;
 if (!(VAR_54->sync & VAR_28))
  VAR_56 |= VAR_42;
 FUNC_4(VAR_53, VAR_39, VAR_56);

 VAR_52->fix.line_length = VAR_60 * VAR_50[VAR_59];
 VAR_52->fix.visual = (VAR_59 == VAR_9)? VAR_30:
  VAR_29;

 return 0;
}
