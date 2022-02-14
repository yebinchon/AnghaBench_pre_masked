
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_msgq_cmd_entry {int qe; TYPE_1__* msg_hdr; } ;
struct TYPE_6__ {int pending_q; } ;
struct bfa_msgq {TYPE_2__ cmdq; } ;
struct TYPE_5__ {int num_entries; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,struct bfa_msgq_cmd_entry*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct bfa_msgq_cmd_entry*,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6(struct bfa_msgq *VAR_2, struct bfa_msgq_cmd_entry *VAR_3)
{
 if (FUNC_5(VAR_3->msg_hdr->num_entries) <=
  FUNC_0(&VAR_2->cmdq)) {
  FUNC_1(&VAR_2->cmdq, VAR_3);
  FUNC_3(VAR_3, VAR_0);
  FUNC_2(&VAR_2->cmdq, VAR_1);
 } else {
  FUNC_4(&VAR_3->qe, &VAR_2->cmdq.pending_q);
 }
}
