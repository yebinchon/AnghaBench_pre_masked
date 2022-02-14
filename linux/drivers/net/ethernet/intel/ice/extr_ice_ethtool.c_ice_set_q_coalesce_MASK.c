
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ice_vsi {int num_rxq; int num_txq; TYPE_4__** tx_rings; TYPE_2__** rx_rings; } ;
struct ethtool_coalesce {int dummy; } ;
struct TYPE_8__ {TYPE_3__* q_vector; } ;
struct TYPE_7__ {int tx; } ;
struct TYPE_6__ {TYPE_1__* q_vector; } ;
struct TYPE_5__ {int rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct ethtool_coalesce*,int *,struct ice_vsi*) ;

__attribute__((used)) static int
FUNC_1(struct ice_vsi *VAR_3, struct ethtool_coalesce *VAR_4, int VAR_5)
{
 if (VAR_5 < VAR_3->num_rxq && VAR_5 < VAR_3->num_txq) {
  if (FUNC_0(VAR_1, VAR_4,
     &VAR_3->rx_rings[VAR_5]->q_vector->rx,
     VAR_3))
   return -VAR_0;

  if (FUNC_0(VAR_2, VAR_4,
     &VAR_3->tx_rings[VAR_5]->q_vector->tx,
     VAR_3))
   return -VAR_0;
 } else if (VAR_5 < VAR_3->num_rxq) {
  if (FUNC_0(VAR_1, VAR_4,
     &VAR_3->rx_rings[VAR_5]->q_vector->rx,
     VAR_3))
   return -VAR_0;
 } else if (VAR_5 < VAR_3->num_txq) {
  if (FUNC_0(VAR_2, VAR_4,
     &VAR_3->tx_rings[VAR_5]->q_vector->tx,
     VAR_3))
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 return 0;
}
