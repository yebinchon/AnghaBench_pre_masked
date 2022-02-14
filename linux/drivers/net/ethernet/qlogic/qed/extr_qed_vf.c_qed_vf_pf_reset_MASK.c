
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_first_tlv {int dummy; } ;
struct qed_vf_iov {TYPE_1__* pf2vf_reply; int offset; } ;
struct qed_hwfn {scalar_t__ b_int_enabled; struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_2__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_3__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,scalar_t__*,int) ;
 struct vfpf_first_tlv* FUNC_2 (struct qed_hwfn*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int) ;

int FUNC_4(struct qed_hwfn *VAR_4)
{
 struct qed_vf_iov *VAR_5 = VAR_4->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_6;
 struct vfpf_first_tlv *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_2(VAR_4, VAR_0, sizeof(*VAR_7));


 FUNC_0(VAR_4, &VAR_5->offset,
      VAR_1, sizeof(struct channel_list_end_tlv));

 VAR_6 = &VAR_5->pf2vf_reply->default_resp;
 VAR_8 = FUNC_1(VAR_4, &VAR_6->hdr.status, sizeof(*VAR_6));
 if (VAR_8)
  goto exit;

 if (VAR_6->hdr.status != VAR_3) {
  VAR_8 = -VAR_2;
  goto exit;
 }

 VAR_4->b_int_enabled = 0;

exit:
 FUNC_3(VAR_4, VAR_8);

 return VAR_8;
}
