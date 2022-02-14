
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cec {int regmap; int clk_hdmi_cec; int clk_cec; int dev; } ;
struct cec_adapter {struct stm32_cec* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_2, bool VAR_3)
{
 struct stm32_cec *VAR_4 = VAR_2->priv;
 int VAR_5 = 0;

 if (VAR_3) {
  VAR_5 = FUNC_1(VAR_4->clk_cec);
  if (VAR_5)
   FUNC_2(VAR_4->dev, "fail to enable cec clock\n");

  FUNC_1(VAR_4->clk_hdmi_cec);
  FUNC_3(VAR_4->regmap, VAR_1, VAR_0, VAR_0);
 } else {
  FUNC_0(VAR_4->clk_cec);
  FUNC_0(VAR_4->clk_hdmi_cec);
  FUNC_3(VAR_4->regmap, VAR_1, VAR_0, 0);
 }

 return VAR_5;
}
