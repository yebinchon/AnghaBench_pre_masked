
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int length; } ;
struct TYPE_13__ {TYPE_4__ tl; } ;
struct vfpf_q_op_tlv {int vf_qid; TYPE_6__ first_tlv; } ;
struct TYPE_12__ {int status; } ;
struct pfvf_general_resp_tlv {TYPE_5__ hdr; } ;
struct channel_list_end_tlv {int dummy; } ;
struct bnx2x {int vf2pf_mbox_mapping; TYPE_3__* vf2pf_mbox; } ;
struct TYPE_9__ {struct pfvf_general_resp_tlv general_resp; } ;
struct TYPE_8__ {struct vfpf_q_op_tlv q_op; } ;
struct TYPE_10__ {TYPE_2__ resp; TYPE_1__ req; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct vfpf_q_op_tlv*,int ,int ,int) ;
 int FUNC_2 (struct bnx2x*,struct vfpf_q_op_tlv*) ;
 int FUNC_3 (struct bnx2x*,int*,int ) ;
 int FUNC_4 (struct bnx2x*,TYPE_6__*) ;
 int FUNC_5 (struct bnx2x*,TYPE_6__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct bnx2x *VAR_4, int VAR_5)
{
 struct vfpf_q_op_tlv *VAR_6 = &VAR_4->vf2pf_mbox->req.q_op;
 struct pfvf_general_resp_tlv *VAR_7 = &VAR_4->vf2pf_mbox->resp.general_resp;
 int VAR_8;


 FUNC_5(VAR_4, &VAR_6->first_tlv, VAR_1,
   sizeof(*VAR_6));

 VAR_6->vf_qid = VAR_5;


 FUNC_1(VAR_4, VAR_6, VAR_6->first_tlv.tl.length, VAR_0,
        sizeof(struct channel_list_end_tlv));


 FUNC_2(VAR_4, VAR_6);

 VAR_8 = FUNC_3(VAR_4, &VAR_7->hdr.status, VAR_4->vf2pf_mbox_mapping);

 if (VAR_8) {
  FUNC_0("Sending TEARDOWN for queue %d failed: %d\n", VAR_5,
     VAR_8);
  goto out;
 }


 if (VAR_7->hdr.status != VAR_3) {
  FUNC_0("TEARDOWN for queue %d failed: %d\n", VAR_5,
     VAR_7->hdr.status);
  VAR_8 = -VAR_2;
 }

out:
 FUNC_4(VAR_4, &VAR_6->first_tlv);

 return VAR_8;
}
