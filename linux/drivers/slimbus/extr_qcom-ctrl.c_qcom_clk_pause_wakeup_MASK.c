
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_controller {int dev; } ;
struct qcom_slim_ctrl {scalar_t__ base; int irq; int rclk; int hclk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct qcom_slim_ctrl* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct slim_controller *VAR_1)
{
 struct qcom_slim_ctrl *VAR_2 = FUNC_1(VAR_1->dev);

 FUNC_0(VAR_2->hclk);
 FUNC_0(VAR_2->rclk);
 FUNC_2(VAR_2->irq);

 FUNC_5(1, VAR_2->base + VAR_0);

 FUNC_3();
 FUNC_4(1250, 2500);
 return 0;
}
