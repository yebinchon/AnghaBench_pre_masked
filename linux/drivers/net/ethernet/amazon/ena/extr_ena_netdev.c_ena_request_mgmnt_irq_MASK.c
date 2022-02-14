
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bits; } ;
struct ena_irq {TYPE_1__ affinity_hint_mask; int vector; int data; int name; int handler; } ;
struct ena_adapter {int netdev; struct ena_irq* irq_tbl; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct ena_adapter*,int ,int ,char*,int ,int ) ;
 int FUNC_2 (struct ena_adapter*,int ,int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ena_adapter *VAR_2)
{
 unsigned long VAR_3 = 0;
 struct ena_irq *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_2->irq_tbl[VAR_0];
 VAR_5 = FUNC_3(VAR_4->vector, VAR_4->handler, VAR_3, VAR_4->name,
    VAR_4->data);
 if (VAR_5) {
  FUNC_2(VAR_2, VAR_1, VAR_2->netdev,
     "failed to request admin irq\n");
  return VAR_5;
 }

 FUNC_1(VAR_2, VAR_1, VAR_2->netdev,
    "set affinity hint of mgmnt irq.to 0x%lx (irq vector: %d)\n",
    VAR_4->affinity_hint_mask.bits[0], VAR_4->vector);

 FUNC_0(VAR_4->vector, &VAR_4->affinity_hint_mask);

 return VAR_5;
}
