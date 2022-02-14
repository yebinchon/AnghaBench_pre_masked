
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {char* name; } ;
struct ena_adapter {int num_queues; TYPE_1__* irq_tbl; int pdev; int * ena_napi; struct net_device* netdev; } ;
struct TYPE_2__ {int cpu; int affinity_hint_mask; int vector; int * data; int handler; int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct ena_adapter *VAR_2)
{
 struct net_device *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_2->netdev;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_queues; VAR_5++) {
  VAR_4 = FUNC_0(VAR_5);
  VAR_6 = VAR_5 % FUNC_2();

  FUNC_4(VAR_2->irq_tbl[VAR_4].name, VAR_0,
    "%s-Tx-Rx-%d", VAR_3->name, VAR_5);
  VAR_2->irq_tbl[VAR_4].handler = VAR_1;
  VAR_2->irq_tbl[VAR_4].data = &VAR_2->ena_napi[VAR_5];
  VAR_2->irq_tbl[VAR_4].vector =
   FUNC_3(VAR_2->pdev, VAR_4);
  VAR_2->irq_tbl[VAR_4].cpu = VAR_6;

  FUNC_1(VAR_6,
    &VAR_2->irq_tbl[VAR_4].affinity_hint_mask);
 }
}
