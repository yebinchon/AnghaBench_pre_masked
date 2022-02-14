
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct arche_apb_ctrl_drvdata {scalar_t__ state; int resetn; int vio; int vcore; scalar_t__ clk_en; scalar_t__ spi_en; scalar_t__ init_disabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct arche_apb_ctrl_drvdata* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct arche_apb_ctrl_drvdata *VAR_4 = FUNC_4(VAR_2);

 if (VAR_4->init_disabled || VAR_4->state == VAR_1)
  return;

 if (VAR_4->state == VAR_0 && VAR_4->spi_en)
  FUNC_2(VAR_3, VAR_4->spi_en);


 if (VAR_4->clk_en)
  FUNC_3(VAR_4->clk_en, 0);

 if (!FUNC_0(VAR_4->vcore) && FUNC_6(VAR_4->vcore) > 0)
  FUNC_5(VAR_4->vcore);

 if (!FUNC_0(VAR_4->vio) && FUNC_6(VAR_4->vio) > 0)
  FUNC_5(VAR_4->vio);


 FUNC_1(VAR_4->resetn);
 VAR_4->state = VAR_1;


}
