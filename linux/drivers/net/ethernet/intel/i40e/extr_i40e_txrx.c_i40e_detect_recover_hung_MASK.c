
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct i40e_vsi {unsigned int num_queue_pairs; struct i40e_ring** tx_rings; struct net_device* netdev; int state; } ;
struct TYPE_4__ {int prev_pkt_ctr; } ;
struct TYPE_3__ {int packets; } ;
struct i40e_ring {TYPE_2__ tx_stats; int q_vector; TYPE_1__ stats; scalar_t__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_vsi*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_ring*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(struct i40e_vsi *VAR_2)
{
 struct i40e_ring *VAR_3 = ((void*)0);
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

 for (VAR_5 = 0; VAR_5 < VAR_2->num_queue_pairs; VAR_5++) {
  VAR_3 = VAR_2->tx_rings[VAR_5];
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
