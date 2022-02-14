
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef struct qedf_rport* u32 ;
struct qedf_rport {int flags; struct fc_rport_priv* rdata; TYPE_2__* qedf; int rport_lock; } ;
struct TYPE_4__ {struct qedf_rport* port_id; } ;
struct fc_rport_priv {scalar_t__ rp_state; int kref; TYPE_1__ ids; } ;
struct TYPE_6__ {int disc_mutex; } ;
struct fc_lport {TYPE_3__ disc; } ;
struct TYPE_5__ {int dbg_ctx; struct fc_lport* lport; } ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 struct fc_rport_priv* FUNC_2 (struct fc_lport*,struct qedf_rport*) ;
 int VAR_4 ;
 int FUNC_3 (struct fc_rport_priv*) ;
 int FUNC_4 (struct fc_rport_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ,int *) ;

void FUNC_13(struct qedf_rport *VAR_5)
{
 struct fc_lport *VAR_6;
 struct fc_rport_priv *VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;

 if (!VAR_5) {
  FUNC_0(((void*)0), "fcport is NULL.\n");
  return;
 }

 FUNC_10(&VAR_5->rport_lock, VAR_9);
 if (FUNC_12(VAR_0, &VAR_5->flags) ||
     !FUNC_12(VAR_1, &VAR_5->flags) ||
     FUNC_12(VAR_2, &VAR_5->flags)) {
  FUNC_0(&(VAR_5->qedf->dbg_ctx), "fcport %p already in reset or not offloaded.\n",
      VAR_5);
  FUNC_11(&VAR_5->rport_lock, VAR_9);
  return;
 }


 FUNC_9(VAR_0, &VAR_5->flags);
 FUNC_11(&VAR_5->rport_lock, VAR_9);

 VAR_7 = VAR_5->rdata;
 if (VAR_7 && !FUNC_5(&VAR_7->kref)) {
  VAR_5->rdata = ((void*)0);
  VAR_7 = ((void*)0);
 }

 if (VAR_7 && VAR_7->rp_state == VAR_3) {
  VAR_6 = VAR_5->qedf->lport;
  VAR_8 = VAR_7->ids.port_id;
  FUNC_0(&(VAR_5->qedf->dbg_ctx),
      "LOGO port_id=%x.\n", VAR_8);
  FUNC_4(VAR_7);
  FUNC_6(&VAR_7->kref, VAR_4);
  FUNC_7(&VAR_6->disc.disc_mutex);

  VAR_7 = FUNC_2(VAR_6, VAR_8);
  if (VAR_7) {
   FUNC_8(&VAR_6->disc.disc_mutex);
   FUNC_3(VAR_7);
   VAR_5->rdata = VAR_7;
  } else {
   FUNC_8(&VAR_6->disc.disc_mutex);
   VAR_5->rdata = ((void*)0);
  }
 }
 FUNC_1(VAR_0, &VAR_5->flags);
}
