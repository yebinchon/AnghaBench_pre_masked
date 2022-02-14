
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring {int reg_idx; int netdev; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_rx_queues; struct ixgbe_ring** rx_ring; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;






 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;
 int VAR_6, VAR_7;

 switch (VAR_4->mac.type) {
 case 133:
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  VAR_5 |= VAR_2;
  FUNC_2(VAR_4, VAR_1, VAR_5);
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  for (VAR_6 = 0; VAR_6 < VAR_3->num_rx_queues; VAR_6++) {
   struct ixgbe_ring *VAR_8 = VAR_3->rx_ring[VAR_6];

   if (!FUNC_3(VAR_8->netdev))
    continue;

   VAR_7 = VAR_8->reg_idx;
   VAR_5 = FUNC_0(VAR_4, FUNC_1(VAR_7));
   VAR_5 |= VAR_0;
   FUNC_2(VAR_4, FUNC_1(VAR_7), VAR_5);
  }
  break;
 default:
  break;
 }
}
