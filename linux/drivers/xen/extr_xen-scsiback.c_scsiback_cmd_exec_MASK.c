
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_cmd {int tag; } ;
struct vscsibk_pend {int n_sg; int sgl; int sc_data_direction; int data_len; TYPE_3__* v2p; int sense_buffer; int cmnd; int rqid; int info; struct se_cmd se_cmd; } ;
struct se_session {int dummy; } ;
struct TYPE_6__ {int lun; TYPE_2__* tpg; } ;
struct TYPE_5__ {TYPE_1__* tpg_nexus; } ;
struct TYPE_4__ {struct se_session* tvn_se_sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct se_cmd*,struct se_session*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 (struct se_cmd*,int ) ;
 int FUNC_3 (struct se_cmd*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vscsibk_pend *VAR_2)
{
 struct se_cmd *VAR_3 = &VAR_2->se_cmd;
 struct se_session *VAR_4 = VAR_2->v2p->tpg->tpg_nexus->tvn_se_sess;
 int VAR_5;

 FUNC_0(VAR_2->info);
 VAR_3->tag = VAR_2->rqid;
 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2->cmnd,
   VAR_2->sense_buffer, VAR_2->v2p->lun,
   VAR_2->data_len, 0,
   VAR_2->sc_data_direction, VAR_0,
   VAR_2->sgl, VAR_2->n_sg,
   ((void*)0), 0, ((void*)0), 0);
 if (VAR_5 < 0) {
  FUNC_3(VAR_3,
    VAR_1, 0);
  FUNC_2(VAR_3, 0);
 }
}
