
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct atmel_hlcdc_regmap {void* regs; } ;
struct atmel_hlcdc {scalar_t__ irq; void* regmap; void* slow_clk; void* sys_clk; void* periph_clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct atmel_hlcdc*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,int *,int ,int *) ;
 void* FUNC_9 (struct device*,int *,struct atmel_hlcdc_regmap*,int *) ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct atmel_hlcdc_regmap *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct atmel_hlcdc *VAR_8;
 struct resource *VAR_9;

 VAR_6 = FUNC_7(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_11(VAR_5, VAR_2, 0);
 VAR_6->regs = FUNC_6(VAR_7, VAR_9);
 if (FUNC_1(VAR_6->regs))
  return FUNC_2(VAR_6->regs);

 VAR_8->irq = FUNC_10(VAR_5, 0);
 if (VAR_8->irq < 0)
  return VAR_8->irq;

 VAR_8->periph_clk = FUNC_5(VAR_7, "periph_clk");
 if (FUNC_1(VAR_8->periph_clk)) {
  FUNC_3(VAR_7, "failed to get peripheral clock\n");
  return FUNC_2(VAR_8->periph_clk);
 }

 VAR_8->sys_clk = FUNC_5(VAR_7, "sys_clk");
 if (FUNC_1(VAR_8->sys_clk)) {
  FUNC_3(VAR_7, "failed to get system clock\n");
  return FUNC_2(VAR_8->sys_clk);
 }

 VAR_8->slow_clk = FUNC_5(VAR_7, "slow_clk");
 if (FUNC_1(VAR_8->slow_clk)) {
  FUNC_3(VAR_7, "failed to get slow clock\n");
  return FUNC_2(VAR_8->slow_clk);
 }

 VAR_8->regmap = FUNC_9(VAR_7, ((void*)0), VAR_6,
      &VAR_4);
 if (FUNC_1(VAR_8->regmap))
  return FUNC_2(VAR_8->regmap);

 FUNC_4(VAR_7, VAR_8);

 return FUNC_8(VAR_7, -1, VAR_3,
        FUNC_0(VAR_3),
        ((void*)0), 0, ((void*)0));
}
