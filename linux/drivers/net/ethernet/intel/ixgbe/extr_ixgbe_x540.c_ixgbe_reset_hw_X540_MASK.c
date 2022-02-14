
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* get_wwn_prefix ) (struct ixgbe_hw*,int *,int *) ;int (* clear_vmdq ) (struct ixgbe_hw*,scalar_t__,int ) ;int (* set_rar ) (struct ixgbe_hw*,scalar_t__,int ,int ,int ) ;int (* get_san_mac_addr ) (struct ixgbe_hw*,int ) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int flags; int wwpn_prefix; int wwnn_prefix; TYPE_2__ ops; scalar_t__ num_rar_entries; scalar_t__ san_mac_rar_index; int san_addr; int perm_addr; } ;
struct TYPE_4__ {int phy_semaphore_mask; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct ixgbe_hw*,char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int) ;
 int FUNC_10 (struct ixgbe_hw*,int) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;
 int FUNC_12 (struct ixgbe_hw*) ;
 int FUNC_13 (struct ixgbe_hw*,int ) ;
 int FUNC_14 (struct ixgbe_hw*,scalar_t__,int ,int ,int ) ;
 int FUNC_15 (struct ixgbe_hw*,scalar_t__,int ) ;
 int FUNC_16 (struct ixgbe_hw*,int *,int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int) ;

s32 FUNC_19(struct ixgbe_hw *VAR_10)
{
 s32 VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14 = VAR_10->phy.phy_semaphore_mask;


 VAR_11 = VAR_10->mac.ops.stop_adapter(VAR_10);
 if (VAR_11)
  return VAR_11;


 FUNC_6(VAR_10);

mac_reset_top:
 VAR_11 = VAR_10->mac.ops.acquire_swfw_sync(VAR_10, VAR_14);
 if (VAR_11) {
  FUNC_4(VAR_10, "semaphore failed with %d", VAR_11);
  return VAR_5;
 }

 VAR_12 = VAR_2;
 VAR_12 |= FUNC_0(VAR_10, VAR_1);
 FUNC_3(VAR_10, VAR_1, VAR_12);
 FUNC_2(VAR_10);
 VAR_10->mac.ops.release_swfw_sync(VAR_10, VAR_14);
 FUNC_18(1000, 1200);


 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  VAR_12 = FUNC_0(VAR_10, VAR_1);
  if (!(VAR_12 & VAR_3))
   break;
  FUNC_17(1);
 }

 if (VAR_12 & VAR_3) {
  VAR_11 = VAR_4;
  FUNC_4(VAR_10, "Reset polling failed to complete.\n");
 }
 FUNC_7(100);






 if (VAR_10->mac.flags & VAR_6) {
  VAR_10->mac.flags &= ~VAR_6;
  goto mac_reset_top;
 }


 FUNC_3(VAR_10, FUNC_1(0), 384 << VAR_8);


 VAR_10->mac.ops.get_mac_addr(VAR_10, VAR_10->mac.perm_addr);






 VAR_10->mac.num_rar_entries = VAR_9;
 VAR_10->mac.ops.init_rx_addrs(VAR_10);


 VAR_10->mac.ops.get_san_mac_addr(VAR_10, VAR_10->mac.san_addr);


 if (FUNC_5(VAR_10->mac.san_addr)) {

  VAR_10->mac.san_mac_rar_index = VAR_10->mac.num_rar_entries - 1;

  VAR_10->mac.ops.set_rar(VAR_10, VAR_10->mac.san_mac_rar_index,
        VAR_10->mac.san_addr, 0, VAR_7);


  VAR_10->mac.ops.clear_vmdq(VAR_10, VAR_10->mac.san_mac_rar_index,
           VAR_0);


  VAR_10->mac.num_rar_entries--;
 }


 VAR_10->mac.ops.get_wwn_prefix(VAR_10, &VAR_10->mac.wwnn_prefix,
       &VAR_10->mac.wwpn_prefix);

 return VAR_11;
}
