
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int release; int notify; } ;
struct TYPE_7__ {scalar_t__ ring; } ;
struct TYPE_6__ {scalar_t__ ring; } ;
struct iavf_q_vector {int v_idx; TYPE_5__ affinity_notify; int name; TYPE_2__ tx; TYPE_1__ rx; } ;
struct iavf_adapter {unsigned int num_msix_vectors; struct iavf_q_vector* q_vectors; TYPE_4__* msix_entries; TYPE_3__* pdev; } ;
struct TYPE_9__ {int vector; } ;
struct TYPE_8__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int,struct iavf_q_vector*) ;
 int * FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct iavf_adapter*) ;
 int VAR_3 ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,TYPE_5__*) ;
 int FUNC_7 (int,int ,int ,int ,struct iavf_q_vector*) ;
 int FUNC_8 (int ,int,char*,char*,int ) ;

__attribute__((used)) static int
FUNC_9(struct iavf_adapter *VAR_4, char *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8 = 0, VAR_9 = 0;
 int VAR_10, VAR_11;
 int VAR_12;

 FUNC_4(VAR_4);

 VAR_7 = VAR_4->num_msix_vectors - VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct iavf_q_vector *VAR_13 = &VAR_4->q_vectors[VAR_6];

  VAR_10 = VAR_4->msix_entries[VAR_6 + VAR_0].vector;

  if (VAR_13->tx.ring && VAR_13->rx.ring) {
   FUNC_8(VAR_13->name, sizeof(VAR_13->name),
     "iavf-%s-TxRx-%d", VAR_5, VAR_8++);
   VAR_9++;
  } else if (VAR_13->rx.ring) {
   FUNC_8(VAR_13->name, sizeof(VAR_13->name),
     "iavf-%s-rx-%d", VAR_5, VAR_8++);
  } else if (VAR_13->tx.ring) {
   FUNC_8(VAR_13->name, sizeof(VAR_13->name),
     "iavf-%s-tx-%d", VAR_5, VAR_9++);
  } else {

   continue;
  }
  VAR_11 = FUNC_7(VAR_10,
      VAR_3,
      0,
      VAR_13->name,
      VAR_13);
  if (VAR_11) {
   FUNC_1(&VAR_4->pdev->dev,
     "Request_irq failed, error: %d\n", VAR_11);
   goto free_queue_irqs;
  }

  VAR_13->affinity_notify.notify = VAR_1;
  VAR_13->affinity_notify.release =
         VAR_2;
  FUNC_6(VAR_10, &VAR_13->affinity_notify);




  VAR_12 = FUNC_0(VAR_13->v_idx, -1);
  FUNC_5(VAR_10, FUNC_3(VAR_12));
 }

 return 0;

free_queue_irqs:
 while (VAR_6) {
  VAR_6--;
  VAR_10 = VAR_4->msix_entries[VAR_6 + VAR_0].vector;
  FUNC_6(VAR_10, ((void*)0));
  FUNC_5(VAR_10, ((void*)0));
  FUNC_2(VAR_10, &VAR_4->q_vectors[VAR_6]);
 }
 return VAR_11;
}
