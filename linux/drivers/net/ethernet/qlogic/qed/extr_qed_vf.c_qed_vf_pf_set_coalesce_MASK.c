
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u16 ;
struct vfpf_update_coalesce {int qid; void* tx_coal; void* rx_coal; } ;
struct qed_vf_iov {TYPE_2__* pf2vf_reply; int offset; } ;
struct TYPE_5__ {int queue_id; } ;
struct qed_queue_cid {TYPE_1__ rel; } ;
struct qed_hwfn {TYPE_4__* cdev; struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_3__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_8__ {void* tx_coalesce_usecs; void* rx_coalesce_usecs; } ;
struct TYPE_6__ {struct pfvf_def_resp_tlv default_resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,void*,void*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_hwfn*,int *,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,scalar_t__*,int) ;
 struct vfpf_update_coalesce* FUNC_3 (struct qed_hwfn*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,int) ;

int
FUNC_5(struct qed_hwfn *VAR_4,
         u16 VAR_5, u16 VAR_6, struct qed_queue_cid *VAR_7)
{
 struct qed_vf_iov *VAR_8 = VAR_4->vf_iov_info;
 struct vfpf_update_coalesce *VAR_9;
 struct pfvf_def_resp_tlv *VAR_10;
 int VAR_11;


 VAR_9 = FUNC_3(VAR_4, VAR_0, sizeof(*VAR_9));

 VAR_9->rx_coal = VAR_5;
 VAR_9->tx_coal = VAR_6;
 VAR_9->qid = VAR_7->rel.queue_id;

 FUNC_0(VAR_4,
     VAR_3,
     "Setting coalesce rx_coal = %d, tx_coal = %d at queue = %d\n",
     VAR_5, VAR_6, VAR_9->qid);


 FUNC_1(VAR_4, &VAR_8->offset, VAR_1,
      sizeof(struct channel_list_end_tlv));

 VAR_10 = &VAR_8->pf2vf_reply->default_resp;
 VAR_11 = FUNC_2(VAR_4, &VAR_10->hdr.status, sizeof(*VAR_10));
 if (VAR_11)
  goto exit;

 if (VAR_10->hdr.status != VAR_2)
  goto exit;

 if (VAR_5)
  VAR_4->cdev->rx_coalesce_usecs = VAR_5;

 if (VAR_6)
  VAR_4->cdev->tx_coalesce_usecs = VAR_6;

exit:
 FUNC_4(VAR_4, VAR_11);
 return VAR_11;
}
