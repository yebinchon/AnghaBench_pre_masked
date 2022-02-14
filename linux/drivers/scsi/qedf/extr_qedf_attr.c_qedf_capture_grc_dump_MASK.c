
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedf_ctx {TYPE_1__* lport; int flags; int dbg_ctx; int grcdump_size; int grcdump; int cdev; } ;
struct TYPE_4__ {int common; } ;
struct TYPE_3__ {int host; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct qedf_ctx* FUNC_2 (struct qedf_ctx*) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_4 (struct qedf_ctx*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct qedf_ctx *VAR_4)
{
 struct qedf_ctx *VAR_5;


 if (FUNC_4(VAR_4))
  VAR_5 = FUNC_2(VAR_4);
 else
  VAR_5 = VAR_4;

 if (FUNC_7(VAR_0, &VAR_5->flags)) {
  FUNC_1(&(VAR_5->dbg_ctx), VAR_1,
      "GRC Dump already captured.\n");
  return;
 }


 FUNC_3(VAR_5->cdev, VAR_3->common,
     &VAR_5->grcdump, &VAR_5->grcdump_size);
 FUNC_0(&(VAR_5->dbg_ctx), "GRC Dump captured.\n");
 FUNC_6(VAR_0, &VAR_5->flags);
 FUNC_5(VAR_5->lport->host, VAR_2,
     ((void*)0));
}
