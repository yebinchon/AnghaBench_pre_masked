
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_mmc_host {scalar_t__ irq; void* reset; void* clk_sample; void* clk_output; TYPE_1__* cfg; void* clk_mmc; void* clk_ahb; void* reg_base; int mmc; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ clk_delays; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,scalar_t__,int ,int ,int ,char*,struct sunxi_mmc_host*) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct sunxi_mmc_host*) ;
 int FUNC_12 (struct sunxi_mmc_host*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct sunxi_mmc_host *VAR_5,
          struct platform_device *VAR_6)
{
 int VAR_7;

 VAR_5->cfg = FUNC_8(&VAR_6->dev);
 if (!VAR_5->cfg)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_5->mmc);
 if (VAR_7)
  return VAR_7;

 VAR_5->reg_base = FUNC_4(&VAR_6->dev,
         FUNC_10(VAR_6, VAR_2, 0));
 if (FUNC_0(VAR_5->reg_base))
  return FUNC_1(VAR_5->reg_base);

 VAR_5->clk_ahb = FUNC_3(&VAR_6->dev, "ahb");
 if (FUNC_0(VAR_5->clk_ahb)) {
  FUNC_2(&VAR_6->dev, "Could not get ahb clock\n");
  return FUNC_1(VAR_5->clk_ahb);
 }

 VAR_5->clk_mmc = FUNC_3(&VAR_6->dev, "mmc");
 if (FUNC_0(VAR_5->clk_mmc)) {
  FUNC_2(&VAR_6->dev, "Could not get mmc clock\n");
  return FUNC_1(VAR_5->clk_mmc);
 }

 if (VAR_5->cfg->clk_delays) {
  VAR_5->clk_output = FUNC_3(&VAR_6->dev, "output");
  if (FUNC_0(VAR_5->clk_output)) {
   FUNC_2(&VAR_6->dev, "Could not get output clock\n");
   return FUNC_1(VAR_5->clk_output);
  }

  VAR_5->clk_sample = FUNC_3(&VAR_6->dev, "sample");
  if (FUNC_0(VAR_5->clk_sample)) {
   FUNC_2(&VAR_6->dev, "Could not get sample clock\n");
   return FUNC_1(VAR_5->clk_sample);
  }
 }

 VAR_5->reset = FUNC_6(&VAR_6->dev,
        "ahb");
 if (FUNC_1(VAR_5->reset) == -VAR_1)
  return FUNC_1(VAR_5->reset);

 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_5->irq = FUNC_9(VAR_6, 0);
 if (VAR_5->irq <= 0) {
  VAR_7 = -VAR_0;
  goto error_disable_mmc;
 }

 return FUNC_5(&VAR_6->dev, VAR_5->irq, VAR_4,
   VAR_3, 0, "sunxi-mmc", VAR_5);

error_disable_mmc:
 FUNC_11(VAR_5);
 return VAR_7;
}
