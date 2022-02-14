
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {int flogi_compl; int flogi_failed; int dbg_ctx; } ;
struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {struct fc_lport* lp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_seq*,struct fc_frame*,struct fc_lport*) ;
 struct fc_exch* FUNC_6 (struct fc_seq*) ;
 struct qedf_ctx* FUNC_7 (struct fc_lport*) ;
 int FUNC_8 (struct qedf_ctx*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_9(struct fc_seq *VAR_3, struct fc_frame *VAR_4,
 void *VAR_5)
{
 struct fc_exch *VAR_6 = FUNC_6(VAR_3);
 struct fc_lport *VAR_7 = VAR_6->lp;
 struct qedf_ctx *VAR_8 = FUNC_7(VAR_7);

 if (!VAR_8) {
  FUNC_1(((void*)0), "qedf is NULL.\n");
  return;
 }





 if (FUNC_0(VAR_4)) {
  FUNC_2(&(VAR_8->dbg_ctx), VAR_2,
      "fp has IS_ERR() set.\n");
  goto skip_stat;
 }


 if (FUNC_4(VAR_4) == VAR_1)
  VAR_8->flogi_failed++;
 else if (FUNC_4(VAR_4) == VAR_0) {

  FUNC_8(VAR_8, VAR_4);
 }


 FUNC_3(&VAR_8->flogi_compl);

skip_stat:

 FUNC_5(VAR_3, VAR_4, VAR_7);
}
