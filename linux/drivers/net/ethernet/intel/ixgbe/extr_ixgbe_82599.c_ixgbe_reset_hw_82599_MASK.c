
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,int) ;int (* get_wwn_prefix ) (struct ixgbe_hw*,int *,int *) ;int (* clear_vmdq ) (struct ixgbe_hw*,scalar_t__,int ) ;int (* set_rar ) (struct ixgbe_hw*,scalar_t__,int ,int ,int ) ;int (* get_san_mac_addr ) (struct ixgbe_hw*,int ) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_8__ {int flags; int orig_link_settings_stored; int orig_autoc; int orig_autoc2; int wwpn_prefix; int wwnn_prefix; TYPE_3__ ops; scalar_t__ num_rar_entries; scalar_t__ san_mac_rar_index; int san_addr; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;int (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int sfp_setup_needed; int reset_disable; scalar_t__ multispeed_fiber; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; scalar_t__ wol_enabled; TYPE_2__ phy; int force_full_reset; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*,scalar_t__,int ,int ,int ) ;
 int FUNC_10 (struct ixgbe_hw*,scalar_t__,int ) ;
 int FUNC_11 (struct ixgbe_hw*,int *,int *) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*) ;
 int FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ FUNC_16 (struct ixgbe_hw*,int,int) ;
 int FUNC_17 (struct ixgbe_hw*,int ) ;
 int FUNC_18 (struct ixgbe_hw*) ;
 int FUNC_19 (struct ixgbe_hw*,int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int,int) ;

__attribute__((used)) static s32 FUNC_22(struct ixgbe_hw *VAR_15)
{
 ixgbe_link_speed VAR_16;
 s32 VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22;
 bool VAR_23 = 0;


 VAR_17 = VAR_15->mac.ops.stop_adapter(VAR_15);
 if (VAR_17)
  return VAR_17;


 FUNC_5(VAR_15);




 VAR_17 = VAR_15->phy.ops.init(VAR_15);

 if (VAR_17 == VAR_12)
  return VAR_17;


 if (VAR_15->phy.sfp_setup_needed) {
  VAR_17 = VAR_15->mac.ops.setup_sfp(VAR_15);
  VAR_15->phy.sfp_setup_needed = 0;
 }

 if (VAR_17 == VAR_12)
  return VAR_17;


 if (VAR_15->phy.reset_disable == 0 && VAR_15->phy.ops.reset != ((void*)0))
  VAR_15->phy.ops.reset(VAR_15);


 VAR_22 = FUNC_0(VAR_15, VAR_1) & VAR_5;

mac_reset_top:






 VAR_18 = VAR_8;
 if (!VAR_15->force_full_reset) {
  VAR_15->mac.ops.check_link(VAR_15, &VAR_16, &VAR_23, 0);
  if (VAR_23)
   VAR_18 = VAR_9;
 }

 VAR_18 |= FUNC_0(VAR_15, VAR_7);
 FUNC_2(VAR_15, VAR_7, VAR_18);
 FUNC_1(VAR_15);
 FUNC_21(1000, 1200);


 for (VAR_19 = 0; VAR_19 < 10; VAR_19++) {
  VAR_18 = FUNC_0(VAR_15, VAR_7);
  if (!(VAR_18 & VAR_10))
   break;
  FUNC_20(1);
 }

 if (VAR_18 & VAR_10) {
  VAR_17 = VAR_11;
  FUNC_3(VAR_15, "Reset polling failed to complete.\n");
 }

 FUNC_7(50);






 if (VAR_15->mac.flags & VAR_13) {
  VAR_15->mac.flags &= ~VAR_13;
  goto mac_reset_top;
 }






 VAR_20 = FUNC_0(VAR_15, VAR_1);
 VAR_21 = FUNC_0(VAR_15, VAR_2);


 if (VAR_21 & VAR_3) {
  VAR_21 &= ~VAR_3;
  FUNC_2(VAR_15, VAR_2, VAR_21);
  FUNC_1(VAR_15);
 }

 if (VAR_15->mac.orig_link_settings_stored == 0) {
  VAR_15->mac.orig_autoc = VAR_20;
  VAR_15->mac.orig_autoc2 = VAR_21;
  VAR_15->mac.orig_link_settings_stored = 1;
 } else {







  if ((VAR_15->phy.multispeed_fiber && FUNC_6(VAR_15)) ||
      VAR_15->wol_enabled)
   VAR_15->mac.orig_autoc =
    (VAR_15->mac.orig_autoc & ~VAR_5) |
    VAR_22;

  if (VAR_20 != VAR_15->mac.orig_autoc) {
   VAR_17 = VAR_15->mac.ops.prot_autoc_write(VAR_15,
       VAR_15->mac.orig_autoc,
       0);
   if (VAR_17)
    return VAR_17;
  }

  if ((VAR_21 & VAR_4) !=
      (VAR_15->mac.orig_autoc2 & VAR_4)) {
   VAR_21 &= ~VAR_4;
   VAR_21 |= (VAR_15->mac.orig_autoc2 &
       VAR_4);
   FUNC_2(VAR_15, VAR_2, VAR_21);
  }
 }


 VAR_15->mac.ops.get_mac_addr(VAR_15, VAR_15->mac.perm_addr);






 VAR_15->mac.num_rar_entries = VAR_0;
 VAR_15->mac.ops.init_rx_addrs(VAR_15);


 VAR_15->mac.ops.get_san_mac_addr(VAR_15, VAR_15->mac.san_addr);


 if (FUNC_4(VAR_15->mac.san_addr)) {

  VAR_15->mac.san_mac_rar_index = VAR_15->mac.num_rar_entries - 1;

  VAR_15->mac.ops.set_rar(VAR_15, VAR_15->mac.san_mac_rar_index,
        VAR_15->mac.san_addr, 0, VAR_14);


  VAR_15->mac.ops.clear_vmdq(VAR_15, VAR_15->mac.san_mac_rar_index,
           VAR_6);


  VAR_15->mac.num_rar_entries--;
 }


 VAR_15->mac.ops.get_wwn_prefix(VAR_15, &VAR_15->mac.wwnn_prefix,
           &VAR_15->mac.wwpn_prefix);

 return VAR_17;
}
