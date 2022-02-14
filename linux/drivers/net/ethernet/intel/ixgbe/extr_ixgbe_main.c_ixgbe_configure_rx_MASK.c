
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* enable_rx_dma ) (struct ixgbe_hw*,int) ;int (* disable_rx ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags2; int num_rx_queues; int * rx_ring; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct ixgbe_hw*,int) ;

__attribute__((used)) static void FUNC_9(struct ixgbe_adapter *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 int VAR_11;
 u32 VAR_12, VAR_13;


 VAR_10->mac.ops.disable_rx(VAR_10);

 FUNC_5(VAR_9);
 FUNC_6(VAR_9);


 VAR_13 = FUNC_0(VAR_10, VAR_1);
 VAR_13 &= ~VAR_4;
 if (!(VAR_9->flags2 & VAR_0))
  VAR_13 |= VAR_4;


 VAR_13 |= (VAR_3 | VAR_2);
 FUNC_1(VAR_10, VAR_1, VAR_13);


 FUNC_4(VAR_9);


 FUNC_3(VAR_9);





 for (VAR_11 = 0; VAR_11 < VAR_9->num_rx_queues; VAR_11++)
  FUNC_2(VAR_9, VAR_9->rx_ring[VAR_11]);

 VAR_12 = FUNC_0(VAR_10, VAR_5);

 if (VAR_10->mac.type == VAR_8)
  VAR_12 |= VAR_6;


 VAR_12 |= VAR_7;
 VAR_10->mac.ops.enable_rx_dma(VAR_10, VAR_12);
}
