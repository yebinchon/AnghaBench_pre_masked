
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {char* name; } ;
struct TYPE_9__ {TYPE_3__* ring; } ;
struct TYPE_7__ {TYPE_1__* ring; } ;
struct igc_q_vector {int num_q_vectors; char* name; struct igc_q_vector** q_vector; TYPE_5__* msix_entries; TYPE_4__ rx; TYPE_2__ tx; scalar_t__ io_addr; scalar_t__ itr_register; struct net_device* netdev; } ;
struct igc_adapter {int num_q_vectors; char* name; struct igc_adapter** q_vector; TYPE_5__* msix_entries; TYPE_4__ rx; TYPE_2__ tx; scalar_t__ io_addr; scalar_t__ itr_register; struct net_device* netdev; } ;
struct TYPE_10__ {int vector; } ;
struct TYPE_8__ {int queue_index; } ;
struct TYPE_6__ {int queue_index; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct igc_q_vector*) ;
 int FUNC_2 (struct igc_q_vector*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (int ,int *,int ,char*,struct igc_q_vector*) ;
 int FUNC_4 (char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct igc_adapter *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 struct net_device *VAR_7 = VAR_2->netdev;

 VAR_4 = FUNC_3(VAR_2->msix_entries[VAR_5].vector,
     &VAR_0, 0, VAR_7->name, VAR_2);
 if (VAR_4)
  goto err_out;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_q_vectors; VAR_3++) {
  struct igc_q_vector *VAR_8 = VAR_2->q_vector[VAR_3];

  VAR_5++;

  VAR_8->itr_register = VAR_2->io_addr + FUNC_0(VAR_5);

  if (VAR_8->rx.ring && VAR_8->tx.ring)
   FUNC_4(VAR_8->name, "%s-TxRx-%u", VAR_7->name,
    VAR_8->rx.ring->queue_index);
  else if (VAR_8->tx.ring)
   FUNC_4(VAR_8->name, "%s-tx-%u", VAR_7->name,
    VAR_8->tx.ring->queue_index);
  else if (VAR_8->rx.ring)
   FUNC_4(VAR_8->name, "%s-rx-%u", VAR_7->name,
    VAR_8->rx.ring->queue_index);
  else
   FUNC_4(VAR_8->name, "%s-unused", VAR_7->name);

  VAR_4 = FUNC_3(VAR_2->msix_entries[VAR_5].vector,
      VAR_1, 0, VAR_8->name,
      VAR_8);
  if (VAR_4)
   goto err_free;
 }

 FUNC_2(VAR_2);
 return 0;

err_free:

 FUNC_1(VAR_2->msix_entries[VAR_6++].vector, VAR_2);

 VAR_5--;
 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  FUNC_1(VAR_2->msix_entries[VAR_6++].vector,
    VAR_2->q_vector[VAR_3]);
 }
err_out:
 return VAR_4;
}
