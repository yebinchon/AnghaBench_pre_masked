
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct arche_apb_ctrl_drvdata {scalar_t__ state; int resetn; scalar_t__ clk_en; int vio; int vcore; scalar_t__ spi_en; scalar_t__ init_disabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 struct arche_apb_ctrl_drvdata* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct arche_apb_ctrl_drvdata *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;

 if (VAR_4->init_disabled ||
     VAR_4->state == VAR_0)
  return 0;


 FUNC_2(VAR_4->resetn);

 if (VAR_4->state == VAR_1 && VAR_4->spi_en)
  FUNC_5(VAR_3, VAR_4->spi_en);


 if (!FUNC_0(VAR_4->vcore)) {
  VAR_5 = FUNC_8(VAR_4->vcore);
  if (VAR_5) {
   FUNC_4(VAR_3, "failed to enable core regulator\n");
   return VAR_5;
  }
 }

 if (!FUNC_0(VAR_4->vio)) {
  VAR_5 = FUNC_8(VAR_4->vio);
  if (VAR_5) {
   FUNC_4(VAR_3, "failed to enable IO regulator\n");
   return VAR_5;
  }
 }

 FUNC_1(VAR_3);


 if (VAR_4->clk_en)
  FUNC_6(VAR_4->clk_en, 1);

 FUNC_9(100, 200);


 FUNC_3(VAR_4->resetn);

 VAR_4->state = VAR_0;

 return 0;
}
