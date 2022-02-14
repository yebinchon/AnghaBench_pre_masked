
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct qcom_slim_ctrl {int slew_reg; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct resource* FUNC_1 (struct platform_device*,int ,char*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_1,
    struct qcom_slim_ctrl *VAR_2)
{
 struct resource *VAR_3;

 if (!VAR_2->slew_reg) {

  VAR_3 = FUNC_1(VAR_1, VAR_0,
    "slew");
  VAR_2->slew_reg = FUNC_0(&VAR_1->dev, VAR_3->start,
    FUNC_2(VAR_3));
  if (!VAR_2->slew_reg)
   return;
 }

 FUNC_4(1, VAR_2->slew_reg);

 FUNC_3();
}
