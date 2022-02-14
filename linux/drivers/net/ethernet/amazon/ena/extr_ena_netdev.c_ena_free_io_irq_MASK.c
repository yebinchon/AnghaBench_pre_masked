
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_irq {int data; int vector; } ;
struct ena_adapter {int msix_vecs; struct ena_irq* irq_tbl; TYPE_1__* netdev; } ;
struct TYPE_2__ {int * rx_cpu_rmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ena_adapter *VAR_1)
{
 struct ena_irq *VAR_2;
 int VAR_3;
 for (VAR_3 = VAR_0; VAR_3 < VAR_1->msix_vecs; VAR_3++) {
  VAR_2 = &VAR_1->irq_tbl[VAR_3];
  FUNC_2(VAR_2->vector, ((void*)0));
  FUNC_0(VAR_2->vector, VAR_2->data);
 }
}
