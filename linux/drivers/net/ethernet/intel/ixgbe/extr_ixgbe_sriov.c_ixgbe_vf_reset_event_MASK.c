
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct vf_data_storage {int vf_api; int vf_mac_addresses; scalar_t__ num_vf_mc_hashes; scalar_t__ spoofchk_enabled; int pf_vlan; scalar_t__ pf_qos; } ;
struct ixgbe_ring_feature {int mask; } ;
struct TYPE_3__ {int (* set_mac_anti_spoofing ) (struct ixgbe_hw*,int,size_t) ;int (* set_vlan_anti_spoofing ) (struct ixgbe_hw*,int,size_t) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct vf_data_storage* vfinfo; int netdev; scalar_t__ default_up; int hw_tcs; struct ixgbe_ring_feature* ring_feature; struct ixgbe_hw hw; } ;


 int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (struct ixgbe_hw*,int ) ;
 size_t VAR_0 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,size_t) ;
 size_t VAR_1 ;
 size_t FUNC_4 (int,int ) ;
 int FUNC_5 (struct ixgbe_adapter*,size_t) ;
 int FUNC_6 (struct ixgbe_adapter*,size_t) ;
 int FUNC_7 (struct ixgbe_adapter*,int ,size_t) ;
 int FUNC_8 (struct ixgbe_adapter*,size_t) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ixgbe_adapter*,size_t,int ,int *) ;
 int FUNC_11 (struct ixgbe_adapter*,int,int ,size_t) ;
 int FUNC_12 (struct ixgbe_hw*,size_t,int) ;
 int FUNC_13 (struct ixgbe_adapter*,int ,scalar_t__,size_t) ;
 int FUNC_14 (struct ixgbe_hw*,int,size_t) ;
 int FUNC_15 (struct ixgbe_hw*,int,size_t) ;

__attribute__((used)) static inline void FUNC_16(struct ixgbe_adapter *VAR_3, u32 VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_3->hw;
 struct ixgbe_ring_feature *VAR_6 = &VAR_3->ring_feature[VAR_1];
 struct vf_data_storage *VAR_7 = &VAR_3->vfinfo[VAR_4];
 u32 VAR_8 = FUNC_4(1, ~VAR_6->mask);
 u8 VAR_9 = VAR_3->hw_tcs;
 u32 VAR_10;
 u32 VAR_11;


 FUNC_5(VAR_3, VAR_4);


 FUNC_11(VAR_3, 1, VAR_7->pf_vlan, VAR_4);


 FUNC_12(VAR_5, VAR_4, !VAR_7->pf_vlan);


 if (!VAR_7->pf_vlan && !VAR_7->pf_qos && !VAR_9) {
  FUNC_6(VAR_3, VAR_4);
 } else {
  if (VAR_7->pf_qos || !VAR_9)
   FUNC_13(VAR_3, VAR_7->pf_vlan,
     VAR_7->pf_qos, VAR_4);
  else
   FUNC_13(VAR_3, VAR_7->pf_vlan,
     VAR_3->default_up, VAR_4);

  if (VAR_7->spoofchk_enabled) {
   VAR_5->mac.ops.set_vlan_anti_spoofing(VAR_5, 1, VAR_4);
   VAR_5->mac.ops.set_mac_anti_spoofing(VAR_5, 1, VAR_4);
  }
 }


 VAR_3->vfinfo[VAR_4].num_vf_mc_hashes = 0;


 FUNC_8(VAR_3, VAR_4);


 FUNC_9(VAR_3->netdev);

 FUNC_7(VAR_3, VAR_3->vfinfo[VAR_4].vf_mac_addresses, VAR_4);
 FUNC_10(VAR_3, VAR_4, 0, ((void*)0));


 VAR_3->vfinfo[VAR_4].vf_api = VAR_2;


 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  unsigned int VAR_12 = (VAR_4 * VAR_8) + VAR_11;

  VAR_10 = FUNC_1(VAR_5, FUNC_0(VAR_12));


  if (VAR_10) {
   VAR_10 |= VAR_0;
   FUNC_3(VAR_5, FUNC_0(VAR_12), VAR_10);
   VAR_10 &= ~VAR_0;
   FUNC_3(VAR_5, FUNC_0(VAR_12), VAR_10);
  }
 }

 FUNC_2(VAR_5);
}
