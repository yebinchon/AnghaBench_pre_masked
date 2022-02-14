
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int base; int npwm; int * ops; int * dev; } ;
struct mtk_disp_pwm {void* clk_main; void* clk_mm; TYPE_2__* data; TYPE_1__ chip; void* base; } ;
struct TYPE_4__ {int con0_sel; int con0; int bls_debug_mask; int bls_debug; int has_commit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,struct resource*) ;
 struct mtk_disp_pwm* FUNC_7 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct mtk_disp_pwm*,int ,int ,int ) ;
 TYPE_2__* FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct mtk_disp_pwm*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct mtk_disp_pwm *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->data = FUNC_9(&VAR_4->dev);

 VAR_6 = FUNC_10(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_6(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk_main = FUNC_5(&VAR_4->dev, "main");
 if (FUNC_0(VAR_5->clk_main))
  return FUNC_1(VAR_5->clk_main);

 VAR_5->clk_mm = FUNC_5(&VAR_4->dev, "mm");
 if (FUNC_0(VAR_5->clk_mm))
  return FUNC_1(VAR_5->clk_mm);

 VAR_7 = FUNC_2(VAR_5->clk_main);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5->clk_mm);
 if (VAR_7 < 0)
  goto disable_clk_main;

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.ops = &VAR_3;
 VAR_5->chip.base = -1;
 VAR_5->chip.npwm = 1;

 VAR_7 = FUNC_12(&VAR_5->chip);
 if (VAR_7 < 0) {
  FUNC_4(&VAR_4->dev, "pwmchip_add() failed: %d\n", VAR_7);
  goto disable_clk_mm;
 }

 FUNC_11(VAR_4, VAR_5);





 if (!VAR_5->data->has_commit) {
  FUNC_8(VAR_5, VAR_5->data->bls_debug,
      VAR_5->data->bls_debug_mask,
      VAR_5->data->bls_debug_mask);
  FUNC_8(VAR_5, VAR_5->data->con0,
      VAR_5->data->con0_sel,
      VAR_5->data->con0_sel);
 }

 return 0;

disable_clk_mm:
 FUNC_3(VAR_5->clk_mm);
disable_clk_main:
 FUNC_3(VAR_5->clk_main);
 return VAR_7;
}
