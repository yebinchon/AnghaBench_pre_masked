
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_4__ {int irq_flags; TYPE_1__* ops; int dev_id; } ;
struct TYPE_3__ {int (* disable_irq ) () ;int (* check_irq ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_5, void *VAR_6)
{
 FUNC_0("entered cpci_hp_intr");


 if ((VAR_3->irq_flags & VAR_0) &&
     !VAR_3->ops->check_irq(VAR_3->dev_id)) {
  FUNC_0("exited cpci_hp_intr, not our interrupt");
  return VAR_2;
 }


 VAR_3->ops->disable_irq();


 FUNC_3(VAR_4);
 return VAR_1;
}
