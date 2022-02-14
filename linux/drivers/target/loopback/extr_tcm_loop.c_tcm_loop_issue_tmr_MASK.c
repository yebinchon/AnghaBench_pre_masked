
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tcm_loop_tpg {struct tcm_loop_nexus* tl_nexus; } ;
struct tcm_loop_nexus {struct se_session* se_sess; } ;
struct se_cmd {TYPE_1__* se_tmr_req; } ;
struct tcm_loop_cmd {int tmr_done; int tl_sense_buf; struct se_cmd tl_se_cmd; } ;
struct se_session {int dummy; } ;
typedef enum tcm_tmreq_table { ____Placeholder_tcm_tmreq_table } tcm_tmreq_table ;
struct TYPE_2__ {int response; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct tcm_loop_cmd*) ;
 struct tcm_loop_cmd* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*,struct se_session*,int ,int ,int *,int,int ,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct tcm_loop_tpg *VAR_4,
         u64 VAR_5, int VAR_6, enum tcm_tmreq_table VAR_7)
{
 struct se_cmd *VAR_8;
 struct se_session *VAR_9;
 struct tcm_loop_nexus *VAR_10;
 struct tcm_loop_cmd *VAR_11;
 int VAR_12 = VAR_2, VAR_13;




 VAR_10 = VAR_4->tl_nexus;
 if (!VAR_10) {
  FUNC_3("Unable to perform device reset without active I_T Nexus\n");
  return VAR_12;
 }

 VAR_11 = FUNC_2(VAR_3, VAR_0);
 if (!VAR_11)
  return VAR_12;

 FUNC_0(&VAR_11->tmr_done);

 VAR_8 = &VAR_11->tl_se_cmd;
 VAR_9 = VAR_4->tl_nexus->se_sess;

 VAR_13 = FUNC_5(VAR_8, VAR_9, VAR_11->tl_sense_buf, VAR_5,
          ((void*)0), VAR_7, VAR_0, VAR_6,
          VAR_1);
 if (VAR_13 < 0)
  goto release;
 FUNC_6(&VAR_11->tmr_done);
 VAR_12 = VAR_8->se_tmr_req->response;
 FUNC_4(VAR_8);

out:
 return VAR_12;

release:
 FUNC_1(VAR_3, VAR_11);
 goto out;
}
