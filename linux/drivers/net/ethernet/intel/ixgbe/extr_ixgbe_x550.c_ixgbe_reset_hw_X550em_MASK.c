
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_8__ {int flags; int num_rar_entries; TYPE_3__ ops; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;int (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int phy_semaphore_mask; scalar_t__ type; int sfp_setup_needed; TYPE_1__ ops; int reset_disable; } ;
struct ixgbe_hw {scalar_t__ device_id; TYPE_4__ mac; int force_full_reset; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*,...) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_hw*) ;
 int FUNC_13 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*,int) ;
 int FUNC_15 (struct ixgbe_hw*,int) ;
 int FUNC_16 (struct ixgbe_hw*,int ) ;
 int FUNC_17 (struct ixgbe_hw*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int) ;

__attribute__((used)) static s32 FUNC_20(struct ixgbe_hw *VAR_11)
{
 ixgbe_link_speed VAR_12;
 s32 VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15;
 bool VAR_16 = 0;
 u32 VAR_17 = VAR_11->phy.phy_semaphore_mask;


 VAR_13 = VAR_11->mac.ops.stop_adapter(VAR_11);
 if (VAR_13)
  return VAR_13;


 FUNC_4(VAR_11);


 VAR_13 = VAR_11->phy.ops.init(VAR_11);
 if (VAR_13 == VAR_7 ||
     VAR_13 == VAR_5)
  return VAR_13;


 if (VAR_11->phy.type == VAR_10) {
  VAR_13 = FUNC_5(VAR_11);
  if (VAR_13)
   return VAR_13;
 }


 if (VAR_11->phy.sfp_setup_needed) {
  VAR_13 = VAR_11->mac.ops.setup_sfp(VAR_11);
  VAR_11->phy.sfp_setup_needed = 0;
 }

 if (VAR_13 == VAR_7)
  return VAR_13;


 if (!VAR_11->phy.reset_disable && VAR_11->phy.ops.reset)
  VAR_11->phy.ops.reset(VAR_11);

mac_reset_top:





 VAR_14 = VAR_1;

 if (!VAR_11->force_full_reset) {
  VAR_11->mac.ops.check_link(VAR_11, &VAR_12, &VAR_16, 0);
  if (VAR_16)
   VAR_14 = VAR_2;
 }

 VAR_13 = VAR_11->mac.ops.acquire_swfw_sync(VAR_11, VAR_17);
 if (VAR_13) {
  FUNC_3(VAR_11, "semaphore failed with %d", VAR_13);
  return VAR_8;
 }

 VAR_14 |= FUNC_0(VAR_11, VAR_0);
 FUNC_2(VAR_11, VAR_0, VAR_14);
 FUNC_1(VAR_11);
 VAR_11->mac.ops.release_swfw_sync(VAR_11, VAR_17);
 FUNC_19(1000, 1200);


 for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
  VAR_14 = FUNC_0(VAR_11, VAR_0);
  if (!(VAR_14 & VAR_3))
   break;
  FUNC_18(1);
 }

 if (VAR_14 & VAR_3) {
  VAR_13 = VAR_6;
  FUNC_3(VAR_11, "Reset polling failed to complete.\n");
 }

 FUNC_8(50);





 if (VAR_11->mac.flags & VAR_9) {
  VAR_11->mac.flags &= ~VAR_9;
  goto mac_reset_top;
 }


 VAR_11->mac.ops.get_mac_addr(VAR_11, VAR_11->mac.perm_addr);





 VAR_11->mac.num_rar_entries = 128;
 VAR_11->mac.ops.init_rx_addrs(VAR_11);

 FUNC_6(VAR_11);

 if (VAR_11->device_id == VAR_4)
  FUNC_7(VAR_11);

 return VAR_13;
}
