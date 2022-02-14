
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_sli {int num_rings; } ;
struct lpfc_hba {int mbox_mem_pool; int link_state; struct lpfc_sli sli; } ;
struct TYPE_8__ {int mbxStatus; int mbxCommand; } ;
struct TYPE_7__ {TYPE_2__ mb; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int,TYPE_3__*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,int ,int ,int) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_hba *VAR_9)
{
 struct lpfc_sli *VAR_10 = &VAR_9->sli;
 LPFC_MBOXQ_t *VAR_11;
 MAILBOX_t *VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 VAR_11 = (LPFC_MBOXQ_t *) FUNC_3(VAR_9->mbox_mem_pool, VAR_2);
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = &VAR_11->u.mb;
 VAR_9->link_state = VAR_6;
 for (VAR_13 = 0; VAR_13 < VAR_10->num_rings; VAR_13++) {
  FUNC_0(VAR_9, VAR_13, VAR_11);
  VAR_14 = FUNC_2(VAR_9, VAR_11, VAR_7);
  if (VAR_14 != VAR_8) {
   FUNC_1(VAR_9, VAR_3, VAR_4,
     "0446 Adapter failed to init (%d), "
     "mbxCmd x%x CFG_RING, mbxStatus x%x, "
     "ring %d\n",
     VAR_14, VAR_12->mbxCommand,
     VAR_12->mbxStatus, VAR_13);
   VAR_9->link_state = VAR_5;
   VAR_15 = -VAR_1;
   break;
  }
 }
 FUNC_4(VAR_11, VAR_9->mbox_mem_pool);
 return VAR_15;
}
