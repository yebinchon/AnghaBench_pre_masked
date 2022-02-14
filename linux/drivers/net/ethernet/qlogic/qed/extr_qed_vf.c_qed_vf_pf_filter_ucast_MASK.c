
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct vfpf_ucast_filter_tlv {int vlan; int mac; void* type; void* opcode; } ;
struct qed_vf_iov {TYPE_1__* pf2vf_reply; int offset; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;
struct qed_filter_ucast {int vlan; int mac; scalar_t__ type; scalar_t__ opcode; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_2__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_3__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,scalar_t__*,int) ;
 struct vfpf_ucast_filter_tlv* FUNC_3 (struct qed_hwfn*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,int) ;

int FUNC_5(struct qed_hwfn *VAR_5,
      struct qed_filter_ucast *VAR_6)
{
 struct qed_vf_iov *VAR_7 = VAR_5->vf_iov_info;
 struct vfpf_ucast_filter_tlv *VAR_8;
 struct pfvf_def_resp_tlv *VAR_9;
 int VAR_10;


 VAR_8 = FUNC_3(VAR_5, VAR_1, sizeof(*VAR_8));
 VAR_8->opcode = (u8) VAR_6->opcode;
 VAR_8->type = (u8) VAR_6->type;
 FUNC_0(VAR_8->mac, VAR_6->mac, VAR_3);
 VAR_8->vlan = VAR_6->vlan;


 FUNC_1(VAR_5, &VAR_7->offset,
      VAR_0, sizeof(struct channel_list_end_tlv));

 VAR_9 = &VAR_7->pf2vf_reply->default_resp;
 VAR_10 = FUNC_2(VAR_5, &VAR_9->hdr.status, sizeof(*VAR_9));
 if (VAR_10)
  goto exit;

 if (VAR_9->hdr.status != VAR_4) {
  VAR_10 = -VAR_2;
  goto exit;
 }

exit:
 FUNC_4(VAR_5, VAR_10);

 return VAR_10;
}
