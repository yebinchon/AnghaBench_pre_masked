
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i40e_vsi {int num_q_vectors; int base_vector; int irqs_ready; struct i40e_q_vector** q_vectors; int irq_handler; struct i40e_pf* back; } ;
struct TYPE_10__ {int release; int notify; } ;
struct TYPE_7__ {scalar_t__ ring; } ;
struct TYPE_6__ {scalar_t__ ring; } ;
struct i40e_q_vector {int v_idx; TYPE_5__ affinity_notify; int name; TYPE_2__ tx; TYPE_1__ rx; } ;
struct i40e_pf {TYPE_4__* msix_entries; TYPE_3__* pdev; } ;
struct TYPE_9__ {int vector; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,struct i40e_q_vector**) ;
 int * FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,TYPE_5__*) ;
 int FUNC_6 (int,int ,int ,int ,struct i40e_q_vector*) ;
 int FUNC_7 (int ,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct i40e_vsi *VAR_2, char *VAR_3)
{
 int VAR_4 = VAR_2->num_q_vectors;
 struct i40e_pf *VAR_5 = VAR_2->back;
 int VAR_6 = VAR_2->base_vector;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct i40e_q_vector *VAR_13 = VAR_2->q_vectors[VAR_9];

  VAR_11 = VAR_5->msix_entries[VAR_6 + VAR_9].vector;

  if (VAR_13->tx.ring && VAR_13->rx.ring) {
   FUNC_7(VAR_13->name, sizeof(VAR_13->name) - 1,
     "%s-%s-%d", VAR_3, "TxRx", VAR_7++);
   VAR_8++;
  } else if (VAR_13->rx.ring) {
   FUNC_7(VAR_13->name, sizeof(VAR_13->name) - 1,
     "%s-%s-%d", VAR_3, "rx", VAR_7++);
  } else if (VAR_13->tx.ring) {
   FUNC_7(VAR_13->name, sizeof(VAR_13->name) - 1,
     "%s-%s-%d", VAR_3, "tx", VAR_8++);
  } else {

   continue;
  }
  VAR_10 = FUNC_6(VAR_11,
      VAR_2->irq_handler,
      0,
      VAR_13->name,
      VAR_13);
  if (VAR_10) {
   FUNC_1(&VAR_5->pdev->dev,
     "MSIX request_irq failed, error: %d\n", VAR_10);
   goto free_queue_irqs;
  }


  VAR_13->affinity_notify.notify = VAR_0;
  VAR_13->affinity_notify.release = VAR_1;
  FUNC_5(VAR_11, &VAR_13->affinity_notify);






  VAR_12 = FUNC_0(VAR_13->v_idx, -1);
  FUNC_4(VAR_11, FUNC_3(VAR_12));
 }

 VAR_2->irqs_ready = 1;
 return 0;

free_queue_irqs:
 while (VAR_9) {
  VAR_9--;
  VAR_11 = VAR_5->msix_entries[VAR_6 + VAR_9].vector;
  FUNC_5(VAR_11, ((void*)0));
  FUNC_4(VAR_11, ((void*)0));
  FUNC_2(VAR_11, &VAR_2->q_vectors[VAR_9]);
 }
 return VAR_10;
}
