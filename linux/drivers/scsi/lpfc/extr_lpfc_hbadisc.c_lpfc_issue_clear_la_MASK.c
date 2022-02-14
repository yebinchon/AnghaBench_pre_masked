
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_type; } ;
struct lpfc_sli_ring {int flag; } ;
struct lpfc_sli {struct lpfc_sli_ring* sli3_ring; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ sli_rev; int mbox_mem_pool; struct lpfc_sli sli; } ;
struct TYPE_6__ {struct lpfc_vport* vport; int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_1__*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int VAR_10 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct lpfc_hba *VAR_11, struct lpfc_vport *VAR_12)
{
 LPFC_MBOXQ_t *VAR_13;
 struct lpfc_sli *VAR_14 = &VAR_11->sli;
 struct lpfc_sli_ring *VAR_15 = &VAR_14->sli3_ring[VAR_2];
 struct lpfc_sli_ring *VAR_16 = &VAR_14->sli3_ring[VAR_3];
 int VAR_17;





 if ((VAR_11->link_state >= VAR_1) ||
     (VAR_12->port_type != VAR_5) ||
  (VAR_11->sli_rev == VAR_6))
  return;


 if ((VAR_13 = FUNC_3(VAR_11->mbox_mem_pool, VAR_0)) != ((void*)0)) {
  VAR_11->link_state = VAR_1;
  FUNC_0(VAR_11, VAR_13);
  VAR_13->mbox_cmpl = VAR_10;
  VAR_13->vport = VAR_12;
  VAR_17 = FUNC_2(VAR_11, VAR_13, VAR_9);
  if (VAR_17 == VAR_8) {
   FUNC_4(VAR_13, VAR_11->mbox_mem_pool);
   FUNC_1(VAR_12);
   VAR_15->flag &= ~VAR_7;
   VAR_16->flag &= ~VAR_7;
   VAR_11->link_state = VAR_4;
  }
 }
}
