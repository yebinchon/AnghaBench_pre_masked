
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_rport {int * qedf; struct fc_rport_priv* rdata; int flags; } ;
struct qedf_ctx {int dbg_ctx; } ;
struct TYPE_2__ {int port_id; } ;
struct fc_rport_priv {int kref; TYPE_1__ ids; } ;


 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct qedf_rport*,int) ;
 int FUNC_3 (struct qedf_ctx*,struct qedf_rport*) ;
 int FUNC_4 (struct qedf_ctx*,struct qedf_rport*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct qedf_ctx *VAR_3,
 struct qedf_rport *VAR_4)
{
 struct fc_rport_priv *VAR_5 = VAR_4->rdata;

 FUNC_0(&(VAR_3->dbg_ctx), VAR_0, "Cleaning up portid=%06x.\n",
     VAR_4->rdata->ids.port_id);


 FUNC_2(VAR_4, -1);

 if (FUNC_5(VAR_1, &VAR_4->flags))
  FUNC_4(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_4);
 VAR_4->rdata = ((void*)0);
 VAR_4->qedf = ((void*)0);
 FUNC_1(&VAR_5->kref, VAR_2);
}
