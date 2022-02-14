
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* enable_rx_buff ) (struct ixgbe_hw*) ;int (* disable_rx_buff ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int fdir_pballoc; struct ixgbe_hw hw; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_adapter*) ;


 int FUNC_11 (struct ixgbe_adapter*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ixgbe_adapter*) ;
 int FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_16(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;

 FUNC_3(VAR_3);







 FUNC_6(VAR_3);

 FUNC_12(VAR_3->netdev);
 FUNC_11(VAR_3);
 FUNC_10(VAR_3);

 switch (VAR_4->mac.type) {
 case 129:
 case 128:
  VAR_4->mac.ops.disable_rx_buff(VAR_4);
  break;
 default:
  break;
 }

 if (VAR_3->flags & VAR_1) {
  FUNC_9(&VAR_3->hw,
      VAR_3->fdir_pballoc);
 } else if (VAR_3->flags & VAR_2) {
  FUNC_8(&VAR_3->hw,
           VAR_3->fdir_pballoc);
  FUNC_7(VAR_3);
 }

 switch (VAR_4->mac.type) {
 case 129:
 case 128:
  VAR_4->mac.ops.enable_rx_buff(VAR_4);
  break;
 default:
  break;
 }
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3);
}
