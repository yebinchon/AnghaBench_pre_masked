
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct se_cmd {TYPE_2__* se_tmr_req; } ;
struct vscsibk_pend {struct se_cmd se_cmd; int tmr_done; int * sense_buffer; TYPE_1__* v2p; } ;
struct scsiback_tpg {struct scsiback_nexus* tpg_nexus; } ;
struct scsiback_nexus {int tvn_se_sess; } ;
typedef enum tcm_tmreq_table { ____Placeholder_tcm_tmreq_table } tcm_tmreq_table ;
struct TYPE_4__ {scalar_t__ response; } ;
struct TYPE_3__ {int lun; struct scsiback_tpg* tpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ,struct vscsibk_pend*) ;
 int FUNC_2 (struct se_cmd*,int ,int *,int ,int *,int,int ,int,int ) ;
 int FUNC_3 (struct se_cmd*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vscsibk_pend *VAR_5,
 enum tcm_tmreq_table VAR_6, int VAR_7)
{
 struct scsiback_tpg *VAR_8 = VAR_5->v2p->tpg;
 struct scsiback_nexus *VAR_9 = VAR_8->tpg_nexus;
 struct se_cmd *VAR_10 = &VAR_5->se_cmd;
 u64 VAR_11 = VAR_5->v2p->lun;
 int VAR_12, VAR_13 = VAR_0;

 FUNC_0(&VAR_5->tmr_done);

 VAR_12 = FUNC_2(&VAR_5->se_cmd, VAR_9->tvn_se_sess,
          &VAR_5->sense_buffer[0],
          VAR_11, ((void*)0), VAR_6, VAR_1,
          VAR_7, VAR_3);
 if (VAR_12)
  goto err;

 FUNC_4(&VAR_5->tmr_done);

 VAR_13 = (VAR_10->se_tmr_req->response == VAR_4) ?
  VAR_2 : VAR_0;

 FUNC_1(((void*)0), VAR_13, 0, VAR_5);
 FUNC_3(&VAR_5->se_cmd, 0);
 return;

err:
 FUNC_1(((void*)0), VAR_13, 0, VAR_5);
}
