
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct fjes_hw {TYPE_1__ hw_res; } ;
struct fjes_adapter {int interrupt_watch_enable; int irq_registered; struct fjes_hw hw; int interrupt_watch_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fjes_hw*,int ,int) ;
 int FUNC_2 (int ,struct fjes_adapter*) ;

__attribute__((used)) static void FUNC_3(struct fjes_adapter *VAR_1)
{
 struct fjes_hw *VAR_2 = &VAR_1->hw;

 VAR_1->interrupt_watch_enable = 0;
 FUNC_0(&VAR_1->interrupt_watch_task);

 FUNC_1(VAR_2, VAR_0, 1);

 if (VAR_1->irq_registered) {
  FUNC_2(VAR_1->hw.hw_res.irq, VAR_1);
  VAR_1->irq_registered = 0;
 }
}
