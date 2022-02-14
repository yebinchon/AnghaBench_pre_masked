
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int xres; int yres; int upper_margin; int lower_margin; int left_margin; int right_margin; int hsync_len; int vsync_len; scalar_t__ pixclock; int xres_virtual; int bits_per_pixel; } ;
struct TYPE_5__ {int line_length; int smem_start; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; int device; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int xres; int yres; int upper_margin; int lower_margin; int left_margin; int right_margin; int hsync_len; int vsync_len; scalar_t__ pixclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct clk* FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct clk*,scalar_t__) ;
 int FUNC_3 (int,int) ;
 TYPE_3__ VAR_18 ;
 TYPE_2__ VAR_19 ;
 TYPE_1__* VAR_20 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_21)
{
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28;
 VAR_21->fix.line_length = FUNC_3(VAR_21->var.xres_virtual,
      VAR_21->var.bits_per_pixel);

 VAR_24 = VAR_21->var.xres + VAR_21->var.right_margin;
 VAR_25 = VAR_24 + VAR_21->var.hsync_len;
 VAR_22 = VAR_25 + VAR_21->var.left_margin;

 VAR_26 = VAR_21->var.yres + VAR_21->var.lower_margin;
 VAR_27 = VAR_26 + VAR_21->var.vsync_len;
 VAR_23 = VAR_27 + VAR_21->var.upper_margin;

 switch (VAR_21->var.bits_per_pixel) {
 case 8:
  VAR_28 = VAR_6;
  break;
 case 16:
  VAR_28 = VAR_3;
  break;
 case 24:
  VAR_28 = VAR_4;
  break;
 case 32:
  VAR_28 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 FUNC_4(VAR_21->fix.smem_start, VAR_9);
 FUNC_4(VAR_21->var.yres, VAR_13);
 FUNC_4(FUNC_3(VAR_21->var.xres,
   VAR_21->var.bits_per_pixel) >> 3, VAR_14);

 FUNC_4((VAR_22 << 16) | (VAR_21->var.xres), VAR_10);
 FUNC_4(((VAR_22 - 1) << 16) | (VAR_21->var.xres - 1), VAR_11);
 FUNC_4(((VAR_25 - 1) << 16) | (VAR_24 - 1), VAR_12);
 FUNC_4((VAR_23 << 16) | (VAR_21->var.yres), VAR_15);
 FUNC_4(((VAR_23 - 1) << 16) | (VAR_21->var.yres - 1), VAR_16);
 FUNC_4(((VAR_27 - 1) << 16) | (VAR_26 - 1), VAR_17);
 FUNC_4(VAR_7 | VAR_8
   | VAR_28 | 0xC0000001, VAR_2);

 return 0;
}
