
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {int fg_check_hw_failure_work; int fg_wq; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct ab8500_fg *VAR_3 = VAR_2;

 FUNC_0(VAR_3->dev, "Battery OVV\n");


 FUNC_1(VAR_3->fg_wq, &VAR_3->fg_check_hw_failure_work, 0);

 return VAR_0;
}
