
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int ;
struct sa1100fb_lcd_reg {int lccr0; int lccr1; int lccr2; int lccr3; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fix; } ;
struct sa1100fb_info {scalar_t__ dbar1; scalar_t__ palette_dma; scalar_t__ dbar2; scalar_t__ screen_dma; int reg_lccr0; int reg_lccr1; int reg_lccr2; int reg_lccr3; scalar_t__ base; int dev; TYPE_3__* inf; TYPE_2__ fb; } ;
struct fb_var_screeninfo {int xres; int hsync_len; int left_margin; int right_margin; int yres; int vsync_len; int upper_margin; int lower_margin; int sync; int bits_per_pixel; int pixclock; } ;
struct TYPE_6__ {int lccr0; int lccr3; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ,char*,int ,int) ;
 int FUNC_12 (struct sa1100fb_info*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct sa1100fb_info*,int ) ;

__attribute__((used)) static int FUNC_17(struct fb_var_screeninfo *VAR_19, struct sa1100fb_info *VAR_20)
{
 struct sa1100fb_lcd_reg VAR_21;
 u_int VAR_22, VAR_23, VAR_24;
 u_long VAR_25;

 FUNC_10(VAR_20->dev, "Configuring SA1100 LCD\n");

 FUNC_10(VAR_20->dev, "var: xres=%d hslen=%d lm=%d rm=%d\n",
  VAR_19->xres, VAR_19->hsync_len,
  VAR_19->left_margin, VAR_19->right_margin);
 FUNC_10(VAR_20->dev, "var: yres=%d vslen=%d um=%d bm=%d\n",
  VAR_19->yres, VAR_19->vsync_len,
  VAR_19->upper_margin, VAR_19->lower_margin);
 VAR_21.lccr0 = VAR_20->inf->lccr0 |
  VAR_10 | VAR_9 | VAR_6 |
  VAR_8 | VAR_11 | FUNC_0(0);

 VAR_21.lccr1 =
  FUNC_2(VAR_19->xres) +
  FUNC_4(VAR_19->hsync_len) +
  FUNC_1(VAR_19->left_margin) +
  FUNC_3(VAR_19->right_margin);





 VAR_23 = VAR_19->yres;
 if (VAR_20->inf->lccr0 & VAR_7)
  VAR_23 /= 2;

 VAR_21.lccr2 =
  FUNC_6(VAR_23) +
  FUNC_8(VAR_19->vsync_len) +
  FUNC_5(VAR_19->upper_margin) +
  FUNC_7(VAR_19->lower_margin);

 VAR_24 = FUNC_12(VAR_20, VAR_19->pixclock);
 VAR_21.lccr3 = FUNC_9(VAR_24) | VAR_20->inf->lccr3 |
  (VAR_19->sync & VAR_3 ? VAR_15 : VAR_16) |
  (VAR_19->sync & VAR_4 ? VAR_17 : VAR_18);

 FUNC_10(VAR_20->dev, "nlccr0 = 0x%08lx\n", VAR_21.lccr0);
 FUNC_10(VAR_20->dev, "nlccr1 = 0x%08lx\n", VAR_21.lccr1);
 FUNC_10(VAR_20->dev, "nlccr2 = 0x%08lx\n", VAR_21.lccr2);
 FUNC_10(VAR_20->dev, "nlccr3 = 0x%08lx\n", VAR_21.lccr3);

 VAR_22 = VAR_19->bits_per_pixel;
 VAR_22 = VAR_22 * VAR_19->xres * VAR_19->yres / 16;


 FUNC_14(VAR_25);
 VAR_20->dbar1 = VAR_20->palette_dma;
 VAR_20->dbar2 = VAR_20->screen_dma + VAR_22;

 VAR_20->reg_lccr0 = VAR_21.lccr0;
 VAR_20->reg_lccr1 = VAR_21.lccr1;
 VAR_20->reg_lccr2 = VAR_21.lccr2;
 VAR_20->reg_lccr3 = VAR_21.lccr3;
 FUNC_13(VAR_25);





 if (FUNC_15(VAR_20->base + VAR_5) != VAR_20->reg_lccr0 ||
     FUNC_15(VAR_20->base + VAR_12) != VAR_20->reg_lccr1 ||
     FUNC_15(VAR_20->base + VAR_13) != VAR_20->reg_lccr2 ||
     FUNC_15(VAR_20->base + VAR_14) != VAR_20->reg_lccr3 ||
     FUNC_15(VAR_20->base + VAR_1) != VAR_20->dbar1 ||
     FUNC_15(VAR_20->base + VAR_2) != VAR_20->dbar2)
  FUNC_16(VAR_20, VAR_0);

 return 0;
}
