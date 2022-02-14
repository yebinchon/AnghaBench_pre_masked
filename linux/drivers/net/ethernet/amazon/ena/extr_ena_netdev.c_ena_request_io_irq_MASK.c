
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bits; } ;
struct ena_irq {int data; int vector; TYPE_1__ affinity_hint_mask; int name; int handler; } ;
struct ena_adapter {int msix_vecs; struct ena_irq* irq_tbl; int netdev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct ena_adapter*,int ,int ,char*,int,int ,int ) ;
 int FUNC_3 (struct ena_adapter*,int ,int ,char*,...) ;
 int FUNC_4 (int ,int ,unsigned long,int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ena_adapter *VAR_4)
{
 unsigned long VAR_5 = 0;
 struct ena_irq *VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;

 if (!FUNC_5(VAR_1, &VAR_4->flags)) {
  FUNC_3(VAR_4, VAR_3, VAR_4->netdev,
     "Failed to request I/O IRQ: MSI-X is not enabled\n");
  return -VAR_0;
 }

 for (VAR_8 = VAR_2; VAR_8 < VAR_4->msix_vecs; VAR_8++) {
  VAR_6 = &VAR_4->irq_tbl[VAR_8];
  VAR_7 = FUNC_4(VAR_6->vector, VAR_6->handler, VAR_5, VAR_6->name,
     VAR_6->data);
  if (VAR_7) {
   FUNC_3(VAR_4, VAR_3, VAR_4->netdev,
      "Failed to request I/O IRQ. index %d rc %d\n",
       VAR_8, VAR_7);
   goto err;
  }

  FUNC_2(VAR_4, VAR_3, VAR_4->netdev,
     "set affinity hint of irq. index %d to 0x%lx (irq vector: %d)\n",
     VAR_8, VAR_6->affinity_hint_mask.bits[0], VAR_6->vector);

  FUNC_1(VAR_6->vector, &VAR_6->affinity_hint_mask);
 }

 return VAR_7;

err:
 for (VAR_9 = VAR_2; VAR_9 < VAR_8; VAR_9++) {
  VAR_6 = &VAR_4->irq_tbl[VAR_9];
  FUNC_0(VAR_6->vector, VAR_6->data);
 }

 return VAR_7;
}
