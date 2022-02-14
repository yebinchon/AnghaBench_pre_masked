
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_els_cb_arg {struct bnx2fc_cmd* aborted_io_req; struct bnx2fc_cmd* io_req; } ;
struct bnx2fc_cmd {scalar_t__ on_active_queue; int link; int xid; int req_flags; int refcount; } ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2fc_cmd*) ;
 int FUNC_3 (struct bnx2fc_els_cb_arg*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct bnx2fc_els_cb_arg *VAR_2)
{
 struct bnx2fc_cmd *VAR_3;
 struct bnx2fc_cmd *VAR_4;
 int VAR_5 = 0;

 FUNC_1(!VAR_2);
 VAR_4 = VAR_2->io_req;
 VAR_3 = VAR_2->aborted_io_req;
 FUNC_1(!VAR_3);
 FUNC_0("rrq_compl: orig xid = 0x%x, rrq_xid = 0x%x\n",
     VAR_3->xid, VAR_4->xid);

 FUNC_4(&VAR_3->refcount, VAR_1);

 if (FUNC_6(VAR_0, &VAR_4->req_flags)) {




  FUNC_0("rrq xid - 0x%x timed out, clean it up\n",
      VAR_4->xid);

  if (VAR_4->on_active_queue) {
   FUNC_5(&VAR_4->link);
   VAR_4->on_active_queue = 0;
   VAR_5 = FUNC_2(VAR_4);
   FUNC_1(VAR_5);
  }
 }
 FUNC_3(VAR_2);
}
