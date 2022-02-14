
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_rport {int rport_lock; TYPE_1__* qedf; int free_sqes; } ;
struct qedf_ioreq {int xid; int refcount; int * sc_cmd; struct qedf_rport* fcport; } ;
struct TYPE_2__ {int dbg_ctx; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 struct qedf_ioreq* FUNC_4 (struct qedf_rport*,int ) ;
 int FUNC_5 (struct qedf_ioreq*,int) ;
 scalar_t__ FUNC_6 (struct qedf_rport*,struct qedf_ioreq*) ;
 int VAR_2 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_9(struct qedf_ioreq *VAR_3)
{
 struct qedf_rport *VAR_4;
 struct qedf_ioreq *VAR_5;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 VAR_4 = VAR_3->fcport;
 if (!VAR_4) {
  FUNC_0(((void*)0), "fcport is NULL.\n");
  goto out;
 }

 if (!VAR_3->sc_cmd) {
  FUNC_0(&(VAR_4->qedf->dbg_ctx), "sc_cmd is NULL for "
      "xid=0x%x.\n", VAR_3->xid);
  goto out;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_1);
 if (!VAR_5) {
  FUNC_0(&(VAR_4->qedf->dbg_ctx), "Could not allocate new "
      "io_req.\n");
  goto out;
 }

 VAR_5->sc_cmd = VAR_3->sc_cmd;







 VAR_3->sc_cmd = ((void*)0);
 FUNC_3(&VAR_3->refcount, VAR_2);

 FUNC_7(&VAR_4->rport_lock, VAR_6);


 if (FUNC_6(VAR_4, VAR_5)) {
  FUNC_0(&(VAR_4->qedf->dbg_ctx), "Unable to post io_req\n");

  FUNC_2(&VAR_4->free_sqes);
 } else {
  FUNC_1(&(VAR_4->qedf->dbg_ctx), VAR_0,
      "Reissued SCSI command from  orig_xid=0x%x on "
      "new_xid=0x%x.\n", VAR_3->xid, VAR_5->xid);




  FUNC_8(&VAR_4->rport_lock, VAR_6);
  FUNC_5(VAR_3, 0);
  goto out;
 }

 FUNC_8(&VAR_4->rport_lock, VAR_6);
out:
 return VAR_7;
}
