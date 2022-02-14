
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vfpf_vport_update_vlan_strip_tlv {int remove_vlan; } ;
struct TYPE_2__ {int inner_vlan_removal; } ;
struct qed_vf_info {int configured_features; TYPE_1__ shadow_config; } ;
struct qed_sp_vport_update_params {int update_inner_vlan_removal_flg; int inner_vlan_removal_flg; } ;
struct qed_iov_vf_mbx {int req_virt; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_3,
        struct qed_sp_vport_update_params *VAR_4,
        struct qed_vf_info *VAR_5,
        struct qed_iov_vf_mbx *VAR_6, u16 *VAR_7)
{
 struct vfpf_vport_update_vlan_strip_tlv *VAR_8;
 u16 VAR_9 = VAR_0;

 VAR_8 = (struct vfpf_vport_update_vlan_strip_tlv *)
       FUNC_1(VAR_3, VAR_6->req_virt, VAR_9);
 if (!VAR_8)
  return;

 VAR_5->shadow_config.inner_vlan_removal = VAR_8->remove_vlan;


 if (!(VAR_5->configured_features & FUNC_0(VAR_2))) {
  VAR_4->update_inner_vlan_removal_flg = 1;
  VAR_4->inner_vlan_removal_flg = VAR_8->remove_vlan;
 }

 *VAR_7 |= 1 << VAR_1;
}
