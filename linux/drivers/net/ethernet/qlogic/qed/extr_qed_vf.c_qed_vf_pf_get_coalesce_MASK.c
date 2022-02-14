
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct vfpf_read_coal_req_tlv {int is_rx; int qid; } ;
struct qed_vf_iov {TYPE_2__* pf2vf_reply; int offset; } ;
struct TYPE_4__ {int queue_id; } ;
struct qed_queue_cid {scalar_t__ b_is_rx; TYPE_1__ rel; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct pfvf_read_coal_resp_tlv {int coal; TYPE_3__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_5__ {struct pfvf_read_coal_resp_tlv read_coal_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,scalar_t__*,int) ;
 struct vfpf_read_coal_req_tlv* FUNC_2 (struct qed_hwfn*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int) ;

int FUNC_4(struct qed_hwfn *VAR_3,
      u16 *VAR_4, struct qed_queue_cid *VAR_5)
{
 struct qed_vf_iov *VAR_6 = VAR_3->vf_iov_info;
 struct pfvf_read_coal_resp_tlv *VAR_7;
 struct vfpf_read_coal_req_tlv *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_2(VAR_3, VAR_0, sizeof(*VAR_8));
 VAR_8->qid = VAR_5->rel.queue_id;
 VAR_8->is_rx = VAR_5->b_is_rx ? 1 : 0;

 FUNC_0(VAR_3, &VAR_6->offset, VAR_1,
      sizeof(struct channel_list_end_tlv));
 VAR_7 = &VAR_6->pf2vf_reply->read_coal_resp;

 VAR_9 = FUNC_1(VAR_3, &VAR_7->hdr.status, sizeof(*VAR_7));
 if (VAR_9)
  goto exit;

 if (VAR_7->hdr.status != VAR_2)
  goto exit;

 *VAR_4 = VAR_7->coal;
exit:
 FUNC_3(VAR_3, VAR_9);

 return VAR_9;
}
