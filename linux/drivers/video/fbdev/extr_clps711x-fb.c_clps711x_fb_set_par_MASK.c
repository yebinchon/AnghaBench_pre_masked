
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int xres; int yres; int bits_per_pixel; int pixclock; } ;
struct TYPE_3__ {int line_length; int smem_len; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct clps711x_fb_info* par; } ;
struct clps711x_fb_info {int buffsize; int ac_prescale; int syscon; scalar_t__ base; int clk; } ;
typedef int resource_size_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_8)
{
 struct clps711x_fb_info *VAR_9 = VAR_8->par;
 resource_size_t VAR_10;
 u32 VAR_11, VAR_12;

 VAR_10 = (VAR_8->var.xres * VAR_8->var.yres * VAR_8->var.bits_per_pixel) / 8;
 if (VAR_10 > VAR_9->buffsize)
  return -VAR_1;

 switch (VAR_8->var.bits_per_pixel) {
 case 1:
  VAR_8->fix.visual = VAR_2;
  break;
 case 2:
 case 4:
  VAR_8->fix.visual = VAR_3;
  break;
 default:
  return -VAR_1;
 }

 VAR_8->fix.line_length = VAR_8->var.xres * VAR_8->var.bits_per_pixel / 8;
 VAR_8->fix.smem_len = VAR_10;

 VAR_11 = (VAR_8->var.xres * VAR_8->var.yres *
    VAR_8->var.bits_per_pixel) / 128 - 1;
 VAR_11 |= ((VAR_8->var.xres / 16) - 1) << 13;
 VAR_11 |= (VAR_9->ac_prescale & 0x1f) << 25;

 VAR_12 = FUNC_1(VAR_9->clk) / (FUNC_0(VAR_8->var.pixclock) * 1000);
 if (VAR_12)
  VAR_12--;
 VAR_11 |= (VAR_12 & 0x3f) << 19;

 if (VAR_8->var.bits_per_pixel == 4)
  VAR_11 |= VAR_5;
 if (VAR_8->var.bits_per_pixel >= 2)
  VAR_11 |= VAR_4;


 FUNC_2(VAR_9->syscon, VAR_7, VAR_6, 0);
 FUNC_3(VAR_11, VAR_9->base + VAR_0);
 FUNC_2(VAR_9->syscon, VAR_7,
      VAR_6, VAR_6);

 return 0;
}
