
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* disable_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; int hw_addr; } ;
struct ixgbe_adapter {int flags; int num_vfs; int state; TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
struct ethtool_test {int flags; } ;
struct TYPE_4__ {scalar_t__ clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 struct ixgbe_hw* VAR_5 ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_adapter*,int*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ixgbe_adapter*) ;
 int FUNC_12 (int) ;
 struct ixgbe_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,char*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_18(struct net_device *VAR_6,
       struct ethtool_test *VAR_7, u64 *VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_13(VAR_6);
 bool VAR_10 = FUNC_15(VAR_6);

 if (FUNC_10(VAR_9->hw.hw_addr)) {
  FUNC_1(VAR_5, "Adapter removed - test blocked\n");
  VAR_8[0] = 1;
  VAR_8[1] = 1;
  VAR_8[2] = 1;
  VAR_8[3] = 1;
  VAR_8[4] = 1;
  VAR_7->flags |= VAR_0;
  return;
 }
 FUNC_16(VAR_4, &VAR_9->state);
 if (VAR_7->flags == VAR_1) {
  struct ixgbe_hw *VAR_11 = &VAR_9->hw;

  if (VAR_9->flags & VAR_2) {
   int VAR_12;
   for (VAR_12 = 0; VAR_12 < VAR_9->num_vfs; VAR_12++) {
    if (VAR_9->vfinfo[VAR_12].clear_to_send) {
     FUNC_14(VAR_6, "offline diagnostic is not supported when VFs are present\n");
     VAR_8[0] = 1;
     VAR_8[1] = 1;
     VAR_8[2] = 1;
     VAR_8[3] = 1;
     VAR_8[4] = 1;
     VAR_7->flags |= VAR_0;
     FUNC_0(VAR_4,
        &VAR_9->state);
     goto skip_ol_tests;
    }
   }
  }


  FUNC_2(VAR_11, "offline testing starting\n");




  if (FUNC_6(VAR_9, &VAR_8[4]))
   VAR_7->flags |= VAR_0;

  if (VAR_10)

   FUNC_3(VAR_6);
  else
   FUNC_11(VAR_9);

  FUNC_2(VAR_11, "register testing starting\n");
  if (FUNC_9(VAR_9, &VAR_8[0]))
   VAR_7->flags |= VAR_0;

  FUNC_11(VAR_9);
  FUNC_2(VAR_11, "eeprom testing starting\n");
  if (FUNC_4(VAR_9, &VAR_8[1]))
   VAR_7->flags |= VAR_0;

  FUNC_11(VAR_9);
  FUNC_2(VAR_11, "interrupt testing starting\n");
  if (FUNC_5(VAR_9, &VAR_8[2]))
   VAR_7->flags |= VAR_0;



  if (VAR_9->flags & (VAR_2 |
          VAR_3)) {
   FUNC_2(VAR_11, "Skip MAC loopback diagnostic in VT mode\n");
   VAR_8[3] = 0;
   goto skip_loopback;
  }

  FUNC_11(VAR_9);
  FUNC_2(VAR_11, "loopback testing starting\n");
  if (FUNC_7(VAR_9, &VAR_8[3]))
   VAR_7->flags |= VAR_0;

skip_loopback:
  FUNC_11(VAR_9);


  FUNC_0(VAR_4, &VAR_9->state);
  if (VAR_10)
   FUNC_8(VAR_6);
  else if (VAR_11->mac.ops.disable_tx_laser)
   VAR_11->mac.ops.disable_tx_laser(VAR_11);
 } else {
  FUNC_2(VAR_5, "online testing starting\n");


  if (FUNC_6(VAR_9, &VAR_8[4]))
   VAR_7->flags |= VAR_0;


  VAR_8[0] = 0;
  VAR_8[1] = 0;
  VAR_8[2] = 0;
  VAR_8[3] = 0;

  FUNC_0(VAR_4, &VAR_9->state);
 }

skip_ol_tests:
 FUNC_12(4 * 1000);
}
