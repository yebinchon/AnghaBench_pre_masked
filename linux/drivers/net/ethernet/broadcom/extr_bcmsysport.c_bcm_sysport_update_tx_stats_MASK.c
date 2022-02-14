
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct bcm_sysport_tx_ring {scalar_t__ packets; scalar_t__ bytes; } ;
struct bcm_sysport_priv {int syncp; struct bcm_sysport_tx_ring* tx_rings; TYPE_1__* netdev; } ;
struct TYPE_2__ {unsigned int num_tx_queues; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct bcm_sysport_priv *VAR_0,
     u64 *VAR_1, u64 *VAR_2)
{
 struct bcm_sysport_tx_ring *VAR_3;
 u64 VAR_4 = 0, VAR_5 = 0;
 unsigned int VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->netdev->num_tx_queues; VAR_7++) {
  VAR_3 = &VAR_0->tx_rings[VAR_7];
  do {
   VAR_6 = FUNC_0(&VAR_0->syncp);
   VAR_4 = VAR_3->bytes;
   VAR_5 = VAR_3->packets;
  } while (FUNC_1(&VAR_0->syncp, VAR_6));

  *VAR_1 += VAR_4;
  *VAR_2 += VAR_5;
 }
}
