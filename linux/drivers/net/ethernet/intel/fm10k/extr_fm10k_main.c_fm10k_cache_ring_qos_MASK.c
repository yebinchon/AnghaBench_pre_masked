
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct fm10k_intfc {TYPE_3__** rx_ring; TYPE_2__** tx_ring; TYPE_1__* ring_feature; struct net_device* netdev; } ;
struct TYPE_6__ {int reg_idx; int qos_pc; } ;
struct TYPE_5__ {int reg_idx; int qos_pc; } ;
struct TYPE_4__ {int indices; scalar_t__ mask; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static bool FUNC_1(struct fm10k_intfc *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 u16 VAR_8 = VAR_2->ring_feature[VAR_0].mask + 1;
 u8 VAR_9 = FUNC_0(VAR_3);

 if (VAR_9 <= 1)
  return 0;

 VAR_6 = VAR_2->ring_feature[VAR_1].indices;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_9; VAR_4++, VAR_5 += VAR_6) {
  int VAR_10 = VAR_4;

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_2->tx_ring[VAR_5 + VAR_7]->reg_idx = VAR_10;
   VAR_2->tx_ring[VAR_5 + VAR_7]->qos_pc = VAR_4;
   VAR_2->rx_ring[VAR_5 + VAR_7]->reg_idx = VAR_10;
   VAR_2->rx_ring[VAR_5 + VAR_7]->qos_pc = VAR_4;
   VAR_10 += VAR_8;
  }
 }

 return 1;
}
