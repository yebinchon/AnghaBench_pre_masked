
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct lpc18xx_scu_data {int pctl; int clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 struct lpc18xx_scu_data* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int *,struct lpc18xx_scu_data*) ;
 int FUNC_9 (int *,struct lpc18xx_scu_data*) ;
 int VAR_3 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct lpc18xx_scu_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct lpc18xx_scu_data *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_10(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_6(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk)) {
  FUNC_4(&VAR_4->dev, "Input clock not found.\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_7 = FUNC_9(&VAR_4->dev, VAR_5);
 if (VAR_7) {
  FUNC_4(&VAR_4->dev, "Unable to create group func map.\n");
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_5->clk);
 if (VAR_7) {
  FUNC_4(&VAR_4->dev, "Unable to enable clock.\n");
  return VAR_7;
 }

 FUNC_11(VAR_4, VAR_5);

 VAR_5->pctl = FUNC_8(&VAR_4->dev, &VAR_3, VAR_5);
 if (FUNC_0(VAR_5->pctl)) {
  FUNC_4(&VAR_4->dev, "Could not register pinctrl driver\n");
  FUNC_2(VAR_5->clk);
  return FUNC_1(VAR_5->pctl);
 }

 return 0;
}
