
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iavf_vsi {TYPE_1__* back; struct net_device* netdev; int state; } ;
struct TYPE_6__ {int prev_pkt_ctr; } ;
struct TYPE_5__ {int packets; } ;
struct iavf_ring {TYPE_3__ tx_stats; int q_vector; TYPE_2__ stats; scalar_t__ desc; } ;
struct TYPE_4__ {unsigned int num_active_queues; struct iavf_ring* tx_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iavf_vsi*,int ) ;
 scalar_t__ FUNC_1 (struct iavf_ring*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(struct iavf_vsi *VAR_2)
{
 struct iavf_ring *VAR_3 = ((void*)0);
 struct net_device *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (!VAR_2)
  return;

 if (FUNC_4(VAR_1, VAR_2->state))
  return;

 VAR_4 = VAR_2->netdev;
 if (!VAR_4)
  return;

 if (!FUNC_2(VAR_4))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2->back->num_active_queues; VAR_5++) {
  VAR_3 = &VAR_2->back->tx_rings[VAR_5];
  if (VAR_3 && VAR_3->desc) {







   VAR_6 = VAR_3->stats.packets & VAR_0;
   if (VAR_3->tx_stats.prev_pkt_ctr == VAR_6) {
    FUNC_0(VAR_2, VAR_3->q_vector);
    continue;
   }




   FUNC_3();
   VAR_3->tx_stats.prev_pkt_ctr =
     FUNC_1(VAR_3, 1) ? VAR_6 : -1;
  }
 }
}
