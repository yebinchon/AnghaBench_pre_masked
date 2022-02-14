
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct vfpf_read_coal_req_tlv {size_t qid; scalar_t__ is_rx; } ;
struct qed_vf_queue {TYPE_2__* cids; } ;
struct qed_iov_vf_mbx {int * offset; TYPE_1__* req_virt; scalar_t__ reply_virt; } ;
struct qed_vf_info {struct qed_vf_queue* vf_queues; int abs_vf_id; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_read_coal_resp_tlv {size_t coal; } ;
struct channel_list_end_tlv {int dummy; } ;
struct TYPE_4__ {struct qed_queue_cid* p_cid; int b_is_tx; } ;
struct TYPE_3__ {struct vfpf_read_coal_req_tlv read_coal_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pfvf_read_coal_resp_tlv* FUNC_1 (struct qed_hwfn*,int **,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_queue_cid*,size_t*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_queue_cid*,size_t*) ;
 struct qed_queue_cid* FUNC_4 (struct qed_vf_queue*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;

__attribute__((used)) static void FUNC_8(struct qed_hwfn *VAR_7,
           struct qed_ptt *VAR_8,
           struct qed_vf_info *VAR_9)
{
 struct qed_iov_vf_mbx *VAR_10 = &VAR_9->vf_mbx;
 struct pfvf_read_coal_resp_tlv *VAR_11;
 struct vfpf_read_coal_req_tlv *VAR_12;
 u8 VAR_13 = VAR_3;
 struct qed_vf_queue *VAR_14;
 struct qed_queue_cid *VAR_15;
 u16 VAR_16 = 0, VAR_17, VAR_18;
 bool VAR_19;
 int VAR_20 = 0;

 VAR_10->offset = (u8 *)VAR_10->reply_virt;
 VAR_12 = &VAR_10->req_virt->read_coal_req;

 VAR_17 = VAR_12->qid;
 VAR_19 = VAR_12->is_rx ? 1 : 0;

 if (VAR_19) {
  if (!FUNC_6(VAR_7, VAR_9, VAR_17,
       VAR_5)) {
   FUNC_0(VAR_7, VAR_6,
       "VF[%d]: Invalid Rx queue_id = %d\n",
       VAR_9->abs_vf_id, VAR_17);
   goto send_resp;
  }

  VAR_15 = FUNC_4(&VAR_9->vf_queues[VAR_17]);
  VAR_20 = FUNC_2(VAR_7, VAR_8, VAR_15, &VAR_16);
  if (VAR_20)
   goto send_resp;
 } else {
  if (!FUNC_7(VAR_7, VAR_9, VAR_17,
       VAR_5)) {
   FUNC_0(VAR_7, VAR_6,
       "VF[%d]: Invalid Tx queue_id = %d\n",
       VAR_9->abs_vf_id, VAR_17);
   goto send_resp;
  }
  for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
   VAR_14 = &VAR_9->vf_queues[VAR_17];
   if ((!VAR_14->cids[VAR_18].p_cid) ||
       (!VAR_14->cids[VAR_18].b_is_tx))
    continue;

   VAR_15 = VAR_14->cids[VAR_18].p_cid;

   VAR_20 = FUNC_3(VAR_7, VAR_8, VAR_15, &VAR_16);
   if (VAR_20)
    goto send_resp;
   break;
  }
 }

 VAR_13 = VAR_4;

send_resp:
 VAR_11 = FUNC_1(VAR_7, &VAR_10->offset, VAR_0,
        sizeof(*VAR_11));
 VAR_11->coal = VAR_16;

 FUNC_1(VAR_7, &VAR_10->offset, VAR_1,
      sizeof(struct channel_list_end_tlv));

 FUNC_5(VAR_7, VAR_8, VAR_9, sizeof(*VAR_11), VAR_13);
}
