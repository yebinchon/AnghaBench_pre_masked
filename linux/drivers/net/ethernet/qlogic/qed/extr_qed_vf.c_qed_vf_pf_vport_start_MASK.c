
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct vfpf_vport_start_tlv {int tpa_mode; int * sb_addr; void* only_untagged; void* max_buffers_per_cqe; void* inner_vlan_removal; void* vport_id; int mtu; } ;
struct TYPE_5__ {int num_sbs; } ;
struct TYPE_6__ {TYPE_1__ resc; } ;
struct qed_vf_iov {TYPE_3__* pf2vf_reply; int offset; struct qed_sb_info** sbs_info; TYPE_2__ acquire_resp; } ;
struct qed_sb_info {int sb_phys; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_4__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
typedef enum qed_tpa_mode { ____Placeholder_qed_tpa_mode } qed_tpa_mode ;
struct TYPE_7__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,scalar_t__*,int) ;
 struct vfpf_vport_start_tlv* FUNC_2 (struct qed_hwfn*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int) ;

int FUNC_4(struct qed_hwfn *VAR_4,
     u8 VAR_5,
     u16 VAR_6,
     u8 VAR_7,
     enum qed_tpa_mode VAR_8,
     u8 VAR_9, u8 VAR_10)
{
 struct qed_vf_iov *VAR_11 = VAR_4->vf_iov_info;
 struct vfpf_vport_start_tlv *VAR_12;
 struct pfvf_def_resp_tlv *VAR_13;
 int VAR_14, VAR_15;


 VAR_12 = FUNC_2(VAR_4, VAR_1, sizeof(*VAR_12));

 VAR_12->mtu = VAR_6;
 VAR_12->vport_id = VAR_5;
 VAR_12->inner_vlan_removal = VAR_7;
 VAR_12->tpa_mode = VAR_8;
 VAR_12->max_buffers_per_cqe = VAR_9;
 VAR_12->only_untagged = VAR_10;


 for (VAR_15 = 0; VAR_15 < VAR_4->vf_iov_info->acquire_resp.resc.num_sbs; VAR_15++) {
  struct qed_sb_info *VAR_16 = VAR_4->vf_iov_info->sbs_info[VAR_15];

  if (VAR_16)
   VAR_12->sb_addr[VAR_15] = VAR_16->sb_phys;
 }


 FUNC_0(VAR_4, &VAR_11->offset,
      VAR_0, sizeof(struct channel_list_end_tlv));

 VAR_13 = &VAR_11->pf2vf_reply->default_resp;
 VAR_14 = FUNC_1(VAR_4, &VAR_13->hdr.status, sizeof(*VAR_13));
 if (VAR_14)
  goto exit;

 if (VAR_13->hdr.status != VAR_3) {
  VAR_14 = -VAR_2;
  goto exit;
 }

exit:
 FUNC_3(VAR_4, VAR_14);

 return VAR_14;
}
