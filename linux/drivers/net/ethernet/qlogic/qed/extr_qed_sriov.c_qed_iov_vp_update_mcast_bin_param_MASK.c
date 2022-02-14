
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vfpf_vport_update_mcast_bin_tlv {int bins; } ;
struct qed_sp_vport_update_params {int update_approx_mcast_flg; int bins; } ;
struct qed_iov_vf_mbx {int req_virt; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_3,
      struct qed_sp_vport_update_params *VAR_4,
      struct qed_iov_vf_mbx *VAR_5, u16 *VAR_6)
{
 struct vfpf_vport_update_mcast_bin_tlv *VAR_7;
 u16 VAR_8 = VAR_0;

 VAR_7 = (struct vfpf_vport_update_mcast_bin_tlv *)
     FUNC_1(VAR_3, VAR_5->req_virt, VAR_8);
 if (!VAR_7)
  return;

 VAR_4->update_approx_mcast_flg = 1;
 FUNC_0(VAR_4->bins, VAR_7->bins,
        sizeof(u32) * VAR_1);
 *VAR_6 |= 1 << VAR_2;
}
