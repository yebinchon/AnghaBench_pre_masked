
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vfpf_bulletin_update_mac_tlv {int mac; } ;
struct qed_vf_iov {TYPE_1__* pf2vf_reply; int offset; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_4__ {int status; } ;
struct pfvf_def_resp_tlv {TYPE_2__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_3__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int *,int) ;
 struct vfpf_bulletin_update_mac_tlv* FUNC_4 (struct qed_hwfn*,int ,int) ;
 int FUNC_5 (struct qed_hwfn*,int) ;

int
FUNC_6(struct qed_hwfn *VAR_4,
         u8 *VAR_5)
{
 struct qed_vf_iov *VAR_6 = VAR_4->vf_iov_info;
 struct vfpf_bulletin_update_mac_tlv *VAR_7;
 struct pfvf_def_resp_tlv *VAR_8;
 int VAR_9;

 if (!VAR_5)
  return -VAR_2;


 VAR_7 = FUNC_4(VAR_4, VAR_0,
          sizeof(*VAR_7));
 FUNC_1(VAR_7->mac, VAR_5);
 FUNC_0(VAR_4, VAR_3,
     "Requesting bulletin update for MAC[%pM]\n", VAR_5);


 FUNC_2(VAR_4, &VAR_6->offset, VAR_1,
      sizeof(struct channel_list_end_tlv));

 VAR_8 = &VAR_6->pf2vf_reply->default_resp;
 VAR_9 = FUNC_3(VAR_4, &VAR_8->hdr.status, sizeof(*VAR_8));
 FUNC_5(VAR_4, VAR_9);
 return VAR_9;
}
