
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa168fb_info {int clk; int dev; scalar_t__ reg_base; struct fb_info* info; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {int smem_start; int smem_len; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct fb_info {TYPE_1__ fix; int screen_base; TYPE_2__ cmap; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct fb_info*) ;
 struct pxa168fb_info* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 unsigned int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_3)
{
 struct pxa168fb_info *VAR_4 = FUNC_6(VAR_3);
 struct fb_info *VAR_5;
 int VAR_6;
 unsigned int VAR_7;

 if (!VAR_4)
  return 0;


 VAR_7 = FUNC_8(VAR_4->reg_base + VAR_1);
 VAR_7 &= ~VAR_0;
 FUNC_10(VAR_7, VAR_4->reg_base + VAR_1);

 VAR_5 = VAR_4->info;

 FUNC_9(VAR_5);

 FUNC_10(FUNC_0(0x0), VAR_4->reg_base + VAR_2);

 if (VAR_5->cmap.len)
  FUNC_4(&VAR_5->cmap);

 VAR_6 = FUNC_7(VAR_3, 0);

 FUNC_3(VAR_4->dev, FUNC_1(VAR_5->fix.smem_len),
      VAR_5->screen_base, VAR_5->fix.smem_start);

 FUNC_2(VAR_4->clk);

 FUNC_5(VAR_5);

 return 0;
}
