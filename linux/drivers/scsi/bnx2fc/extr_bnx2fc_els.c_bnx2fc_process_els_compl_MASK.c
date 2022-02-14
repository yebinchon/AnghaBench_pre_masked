
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {int mp_payload_len; int fc_hdr; } ;
struct TYPE_6__ {TYPE_1__ mp_rsp; } ;
struct TYPE_7__ {TYPE_2__ comp_info; } ;
struct TYPE_8__ {TYPE_3__ union_ctx; } ;
struct fcoe_task_ctx_entry {TYPE_4__ rxwr_only; } ;
struct fc_frame_header {int dummy; } ;
struct bnx2fc_mp_req {int resp_len; struct fc_frame_header resp_fc_hdr; } ;
struct bnx2fc_cmd {int refcount; int * cb_arg; int (* cb_func ) (int *) ;struct bnx2fc_mp_req mp_req; scalar_t__ on_active_queue; int link; int timeout_work; int xid; int req_flags; int cmd_type; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct bnx2fc_cmd *VAR_2,
         struct fcoe_task_ctx_entry *VAR_3, u8 VAR_4)
{
 struct bnx2fc_mp_req *VAR_5;
 struct fc_frame_header *VAR_6;
 u64 *VAR_7;
 u64 *VAR_8;

 FUNC_0("Entered process_els_compl xid = 0x%x"
   "cmd_type = %d\n", VAR_2->xid, VAR_2->cmd_type);

 if (FUNC_6(VAR_0,
        &VAR_2->req_flags)) {
  FUNC_0("Timer context finished processing this "
      "els - 0x%x\n", VAR_2->xid);

  FUNC_3(&VAR_2->refcount, VAR_1);
  return;
 }


 if (FUNC_1(&VAR_2->timeout_work))
  FUNC_3(&VAR_2->refcount,
    VAR_1);

 if (VAR_2->on_active_queue) {
  FUNC_4(&VAR_2->link);
  VAR_2->on_active_queue = 0;
 }

 VAR_5 = &(VAR_2->mp_req);
 VAR_6 = &(VAR_5->resp_fc_hdr);

 VAR_7 = (u64 *)VAR_6;
 VAR_8 = (u64 *)
  &VAR_3->rxwr_only.union_ctx.comp_info.mp_rsp.fc_hdr;
 VAR_7[0] = FUNC_2(VAR_8[0]);
 VAR_7[1] = FUNC_2(VAR_8[1]);
 VAR_7[2] = FUNC_2(VAR_8[2]);

 VAR_5->resp_len =
  VAR_3->rxwr_only.union_ctx.comp_info.mp_rsp.mp_payload_len;


 if ((VAR_2->cb_func) && (VAR_2->cb_arg)) {
  VAR_2->cb_func(VAR_2->cb_arg);
  VAR_2->cb_arg = ((void*)0);
 }

 FUNC_3(&VAR_2->refcount, VAR_1);
}
