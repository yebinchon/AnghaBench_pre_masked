
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_3__ {int irq; } ;
struct TYPE_4__ {TYPE_1__ hw_res; } ;
struct fjes_adapter {int interrupt_watch_enable; int irq_registered; TYPE_2__ hw; int interrupt_watch_task; int control_wq; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ,struct fjes_adapter*) ;

__attribute__((used)) static int FUNC_3(struct fjes_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 int VAR_5 = -1;

 VAR_3->interrupt_watch_enable = 1;
 if (!FUNC_0(&VAR_3->interrupt_watch_task)) {
  FUNC_1(VAR_3->control_wq,
       &VAR_3->interrupt_watch_task,
       VAR_0);
 }

 if (!VAR_3->irq_registered) {
  VAR_5 = FUNC_2(VAR_3->hw.hw_res.irq, VAR_2,
         VAR_1, VAR_4->name, VAR_3);
  if (VAR_5)
   VAR_3->irq_registered = 0;
  else
   VAR_3->irq_registered = 1;
 }

 return VAR_5;
}
