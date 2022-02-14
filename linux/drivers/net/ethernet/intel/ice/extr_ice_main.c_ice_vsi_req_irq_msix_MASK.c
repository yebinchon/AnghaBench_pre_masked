
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ice_vsi {int num_q_vectors; int base_vector; int irqs_ready; struct ice_q_vector** q_vectors; int netdev; int irq_handler; struct ice_pf* back; } ;
struct TYPE_10__ {int release; int notify; } ;
struct TYPE_7__ {scalar_t__ ring; } ;
struct TYPE_6__ {scalar_t__ ring; } ;
struct ice_q_vector {int affinity_mask; TYPE_5__ affinity_notify; int name; TYPE_2__ tx; TYPE_1__ rx; } ;
struct ice_pf {TYPE_4__* pdev; TYPE_3__* msix_entries; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int vector; } ;


 int FUNC_0 (int *,int,struct ice_q_vector**) ;
 int FUNC_1 (int *,int,int ,int ,int ,struct ice_q_vector*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,TYPE_5__*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct ice_vsi *VAR_2, char *VAR_3)
{
 int VAR_4 = VAR_2->num_q_vectors;
 struct ice_pf *VAR_5 = VAR_2->back;
 int VAR_6 = VAR_2->base_vector;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 int VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct ice_q_vector *VAR_12 = VAR_2->q_vectors[VAR_9];

  VAR_11 = VAR_5->msix_entries[VAR_6 + VAR_9].vector;

  if (VAR_12->tx.ring && VAR_12->rx.ring) {
   FUNC_5(VAR_12->name, sizeof(VAR_12->name) - 1,
     "%s-%s-%d", VAR_3, "TxRx", VAR_7++);
   VAR_8++;
  } else if (VAR_12->rx.ring) {
   FUNC_5(VAR_12->name, sizeof(VAR_12->name) - 1,
     "%s-%s-%d", VAR_3, "rx", VAR_7++);
  } else if (VAR_12->tx.ring) {
   FUNC_5(VAR_12->name, sizeof(VAR_12->name) - 1,
     "%s-%s-%d", VAR_3, "tx", VAR_8++);
  } else {

   continue;
  }
  VAR_10 = FUNC_1(&VAR_5->pdev->dev, VAR_11,
           VAR_2->irq_handler, 0,
           VAR_12->name, VAR_12);
  if (VAR_10) {
   FUNC_4(VAR_2->netdev,
       "MSIX request_irq failed, error: %d\n", VAR_10);
   goto free_q_irqs;
  }


  VAR_12->affinity_notify.notify = VAR_0;
  VAR_12->affinity_notify.release = VAR_1;
  FUNC_3(VAR_11, &VAR_12->affinity_notify);


  FUNC_2(VAR_11, &VAR_12->affinity_mask);
 }

 VAR_2->irqs_ready = 1;
 return 0;

free_q_irqs:
 while (VAR_9) {
  VAR_9--;
  VAR_11 = VAR_5->msix_entries[VAR_6 + VAR_9].vector,
  FUNC_3(VAR_11, ((void*)0));
  FUNC_2(VAR_11, ((void*)0));
  FUNC_0(&VAR_5->pdev->dev, VAR_11, &VAR_2->q_vectors[VAR_9]);
 }
 return VAR_10;
}
