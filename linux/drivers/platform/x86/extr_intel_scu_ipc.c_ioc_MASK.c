
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_scu_ipc_dev {int cmd_complete; scalar_t__ irq_mode; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct intel_scu_ipc_dev *VAR_3 = VAR_2;

 if (VAR_3->irq_mode)
  FUNC_0(&VAR_3->cmd_complete);

 return VAR_0;
}
