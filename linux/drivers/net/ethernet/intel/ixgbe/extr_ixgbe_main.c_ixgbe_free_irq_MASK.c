
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msix_entry {int vector; } ;
struct TYPE_6__ {int ring; } ;
struct TYPE_5__ {int ring; } ;
struct ixgbe_q_vector {int flags; int num_q_vectors; struct msix_entry* msix_entries; TYPE_3__ tx; TYPE_2__ rx; struct ixgbe_q_vector** q_vector; TYPE_1__* pdev; } ;
struct ixgbe_adapter {int flags; int num_q_vectors; struct msix_entry* msix_entries; TYPE_3__ tx; TYPE_2__ rx; struct ixgbe_adapter** q_vector; TYPE_1__* pdev; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ixgbe_q_vector*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_1)
{
 int VAR_2;

 if (!(VAR_1->flags & VAR_0)) {
  FUNC_0(VAR_1->pdev->irq, VAR_1);
  return;
 }

 if (!VAR_1->msix_entries)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_q_vectors; VAR_2++) {
  struct ixgbe_q_vector *VAR_3 = VAR_1->q_vector[VAR_2];
  struct msix_entry *VAR_4 = &VAR_1->msix_entries[VAR_2];


  if (!VAR_3->rx.ring && !VAR_3->tx.ring)
   continue;


  FUNC_1(VAR_4->vector, ((void*)0));

  FUNC_0(VAR_4->vector, VAR_3);
 }

 FUNC_0(VAR_1->msix_entries[VAR_2].vector, VAR_1);
}
