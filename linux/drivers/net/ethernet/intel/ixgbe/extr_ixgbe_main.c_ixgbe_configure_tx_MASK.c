
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {size_t num_tx_queues; size_t num_xdp_queues; int * xdp_ring; int * tx_ring; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,size_t) ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;
 u32 VAR_6;

 FUNC_3(VAR_3);

 if (VAR_4->mac.type != VAR_2) {

  VAR_5 = FUNC_0(VAR_4, VAR_0);
  VAR_5 |= VAR_1;
  FUNC_1(VAR_4, VAR_0, VAR_5);
 }


 for (VAR_6 = 0; VAR_6 < VAR_3->num_tx_queues; VAR_6++)
  FUNC_2(VAR_3, VAR_3->tx_ring[VAR_6]);
 for (VAR_6 = 0; VAR_6 < VAR_3->num_xdp_queues; VAR_6++)
  FUNC_2(VAR_3, VAR_3->xdp_ring[VAR_6]);
}
