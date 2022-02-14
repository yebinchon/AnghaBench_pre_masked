
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct igb_adapter {int flags; int num_q_vectors; TYPE_1__* pdev; struct igb_adapter** q_vector; TYPE_2__* msix_entries; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct igb_adapter*) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  int VAR_2 = 0, VAR_3;

  FUNC_0(VAR_1->msix_entries[VAR_2++].vector, VAR_1);

  for (VAR_3 = 0; VAR_3 < VAR_1->num_q_vectors; VAR_3++)
   FUNC_0(VAR_1->msix_entries[VAR_2++].vector,
     VAR_1->q_vector[VAR_3]);
 } else {
  FUNC_0(VAR_1->pdev->irq, VAR_1);
 }
}
