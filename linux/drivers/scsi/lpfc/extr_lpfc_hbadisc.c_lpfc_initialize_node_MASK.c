
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int cfg_tgt_queue_depth; int phba; } ;
struct TYPE_4__ {int evt_listp; } ;
struct TYPE_3__ {int evt_listp; } ;
struct lpfc_nodelist {int nlp_defer_did; int cmd_qdepth; int cmd_pending; int kref; int nlp_fc4_type; int nlp_sid; int phba; struct lpfc_vport* vport; int nlp_DID; int nlp_delayfunc; TYPE_2__ dev_loss_evt; TYPE_1__ els_retry_evt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static inline void
FUNC_5(struct lpfc_vport *VAR_4, struct lpfc_nodelist *VAR_5,
 uint32_t VAR_6)
{
 FUNC_0(&VAR_5->els_retry_evt.evt_listp);
 FUNC_0(&VAR_5->dev_loss_evt.evt_listp);
 FUNC_4(&VAR_5->nlp_delayfunc, VAR_3, 0);
 VAR_5->nlp_DID = VAR_6;
 VAR_5->vport = VAR_4;
 VAR_5->phba = VAR_4->phba;
 VAR_5->nlp_sid = VAR_2;
 VAR_5->nlp_fc4_type = VAR_1;
 FUNC_3(&VAR_5->kref);
 FUNC_1(VAR_5);
 FUNC_2(&VAR_5->cmd_pending, 0);
 VAR_5->cmd_qdepth = VAR_4->cfg_tgt_queue_depth;
 VAR_5->nlp_defer_did = VAR_0;
}
