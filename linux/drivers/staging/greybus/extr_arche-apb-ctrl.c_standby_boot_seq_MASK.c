
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct arche_apb_ctrl_drvdata {scalar_t__ state; scalar_t__ spi_en; scalar_t__ init_disabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,scalar_t__) ;
 struct arche_apb_ctrl_drvdata* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct arche_apb_ctrl_drvdata *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->init_disabled)
  return 0;





 if (VAR_5->state == VAR_2 ||
     VAR_5->state == VAR_1)
  return 0;

 if (VAR_5->state == VAR_0 && VAR_5->spi_en)
  FUNC_0(VAR_4, VAR_5->spi_en);
 VAR_5->state = VAR_2;
 return 0;
}
