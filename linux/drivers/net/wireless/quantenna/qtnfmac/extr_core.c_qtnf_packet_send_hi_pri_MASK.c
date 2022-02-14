
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct qtnf_vif {int high_pri_tx_work; TYPE_2__* mac; int high_pri_tx_queue; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {int hprio_workqueue; } ;


 struct qtnf_vif* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;

void FUNC_3(struct sk_buff *VAR_0)
{
 struct qtnf_vif *VAR_1 = FUNC_0(VAR_0->dev);

 FUNC_2(&VAR_1->high_pri_tx_queue, VAR_0);
 FUNC_1(VAR_1->mac->bus->hprio_workqueue, &VAR_1->high_pri_tx_work);
}
