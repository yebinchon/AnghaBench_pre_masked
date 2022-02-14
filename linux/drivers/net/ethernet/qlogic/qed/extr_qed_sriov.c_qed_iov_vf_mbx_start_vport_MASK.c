
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct vfpf_vport_start_tlv {int max_buffers_per_cqe; int inner_vlan_removal; int tpa_mode; int only_untagged; int mtu; int * sb_addr; } ;
struct TYPE_10__ {int is_trusted_configured; } ;
struct TYPE_9__ {TYPE_3__* p_virt; } ;
struct TYPE_7__ {int inner_vlan_removal; } ;
struct qed_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct qed_vf_info {int num_sbs; int req_spoofchk_val; int vport_instance; TYPE_5__ p_vf_info; int mtu; int vport_id; int opaque_fid; int concrete_fid; TYPE_4__ bulletin; TYPE_2__ shadow_config; int abs_vf_id; int * igu_sbs; scalar_t__ relative_vf_id; int state; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_sp_vport_start_params {int tx_switching; int drop_ttl0; int check_mac; int mtu; int max_buffers_per_cqe; int vport_id; int opaque_fid; int concrete_fid; int only_untagged; int remove_inner_vlan; int tpa_mode; int member_0; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_8__ {int valid_bitmap; int default_only_untagged; } ;
struct TYPE_6__ {struct vfpf_vport_start_tlv start_vport; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,char*,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (struct qed_hwfn*,int ,char*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_vf_info*,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int ,int) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 struct qed_vf_info* FUNC_8 (struct qed_hwfn*,int ,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_sp_vport_start_params*) ;

__attribute__((used)) static void FUNC_11(struct qed_hwfn *VAR_7,
           struct qed_ptt *VAR_8,
           struct qed_vf_info *VAR_9)
{
 struct qed_sp_vport_start_params VAR_10 = { 0 };
 struct qed_iov_vf_mbx *VAR_11 = &VAR_9->vf_mbx;
 struct vfpf_vport_start_tlv *VAR_12;
 u8 VAR_13 = VAR_2;
 struct qed_vf_info *VAR_14;
 u64 *VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_14 = FUNC_8(VAR_7, (u16) VAR_9->relative_vf_id, 1);
 if (!VAR_14) {
  FUNC_2(VAR_7->cdev,
     "Failed to get VF info, invalid vfid [%d]\n",
     VAR_9->relative_vf_id);
  return;
 }

 VAR_9->state = VAR_6;
 VAR_12 = &VAR_11->req_virt->start_vport;

 FUNC_7(VAR_7, VAR_8, VAR_9);


 for (VAR_16 = 0; VAR_16 < VAR_9->num_sbs; VAR_16++) {
  if (!VAR_12->sb_addr[VAR_16]) {
   FUNC_3(VAR_7, VAR_3,
       "VF[%d] did not fill the address of SB %d\n",
       VAR_9->relative_vf_id, VAR_16);
   break;
  }

  FUNC_5(VAR_7, VAR_8,
        VAR_12->sb_addr[VAR_16],
        VAR_9->igu_sbs[VAR_16], VAR_9->abs_vf_id, 1);
 }

 VAR_9->mtu = VAR_12->mtu;
 VAR_9->shadow_config.inner_vlan_removal = VAR_12->inner_vlan_removal;





 VAR_15 = &VAR_14->bulletin.p_virt->valid_bitmap;
 if (!(*VAR_15 & FUNC_0(VAR_5))) {
  u8 VAR_18 = VAR_12->only_untagged;

  VAR_14->bulletin.p_virt->default_only_untagged = VAR_18;
  *VAR_15 |= 1 << VAR_4;
 }

 VAR_10.tpa_mode = VAR_12->tpa_mode;
 VAR_10.remove_inner_vlan = VAR_12->inner_vlan_removal;
 VAR_10.tx_switching = 1;

 VAR_10.only_untagged = VAR_14->bulletin.p_virt->default_only_untagged;
 VAR_10.drop_ttl0 = 0;
 VAR_10.concrete_fid = VAR_9->concrete_fid;
 VAR_10.opaque_fid = VAR_9->opaque_fid;
 VAR_10.vport_id = VAR_9->vport_id;
 VAR_10.max_buffers_per_cqe = VAR_12->max_buffers_per_cqe;
 VAR_10.mtu = VAR_9->mtu;


 VAR_10.check_mac = !VAR_9->p_vf_info.is_trusted_configured;

 VAR_17 = FUNC_10(VAR_7, &VAR_10);
 if (VAR_17) {
  FUNC_1(VAR_7,
         "qed_iov_vf_mbx_start_vport returned error %d\n", VAR_17);
  VAR_13 = VAR_1;
 } else {
  VAR_9->vport_instance++;


  FUNC_6(VAR_7, VAR_9, *VAR_15);

  FUNC_4(VAR_7, VAR_9, VAR_9->req_spoofchk_val);
 }
 FUNC_9(VAR_7, VAR_8, VAR_9, VAR_0,
        sizeof(struct pfvf_def_resp_tlv), VAR_13);
}
