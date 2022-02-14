
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_ctx {int dbg_ctx; TYPE_1__* lport; } ;
struct fc_host_attrs {scalar_t__ npiv_vports_inuse; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct fc_host_attrs* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct qedf_ctx *VAR_1)
{
 struct fc_host_attrs *VAR_2 = FUNC_2(VAR_1->lport->host);

 FUNC_0(&(VAR_1->dbg_ctx), VAR_0,
     "Entered.\n");
 while (VAR_2->npiv_vports_inuse > 0) {
  FUNC_0(&(VAR_1->dbg_ctx), VAR_0,
      "Waiting for all vports to be reaped.\n");
  FUNC_1(1000);
 }
}
