
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct lpfc_sli {int sli_flag; } ;
struct TYPE_4__ {scalar_t__ fcf_flag; } ;
struct lpfc_hba {int hba_flag; int pcidev; int hbalock; TYPE_2__ fcf; TYPE_1__* pport; scalar_t__ link_events; scalar_t__ fc_eventTag; struct lpfc_sli sli; } ;
struct TYPE_3__ {scalar_t__ fc_prevDID; scalar_t__ fc_myDID; int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct lpfc_hba *VAR_9)
{
 struct lpfc_sli *VAR_10 = &VAR_9->sli;
 uint16_t VAR_11;
 int VAR_12 = 0;


 FUNC_1(VAR_9, VAR_2, VAR_4,
   "0295 Reset HBA Data: x%x x%x x%x\n",
   VAR_9->pport->port_state, VAR_10->sli_flag,
   VAR_9->hba_flag);


 VAR_9->fc_eventTag = 0;
 VAR_9->link_events = 0;
 VAR_9->pport->fc_myDID = 0;
 VAR_9->pport->fc_prevDID = 0;

 FUNC_4(&VAR_9->hbalock);
 VAR_10->sli_flag &= ~(VAR_5);
 VAR_9->fcf.fcf_flag = 0;
 FUNC_5(&VAR_9->hbalock);


 if (VAR_9->hba_flag & VAR_1) {
  VAR_9->hba_flag &= ~VAR_1;
  return VAR_12;
 }


 FUNC_1(VAR_9, VAR_2, VAR_3,
   "0389 Performing PCI function reset!\n");


 if (FUNC_2(VAR_9->pcidev, VAR_6, &VAR_11)) {
  FUNC_1(VAR_9, VAR_2, VAR_3,
    "3205 PCI read Config failed\n");
  return -VAR_0;
 }

 FUNC_3(VAR_9->pcidev, VAR_6, (VAR_11 &
         ~(VAR_7 | VAR_8)));


 VAR_12 = FUNC_0(VAR_9);


 FUNC_3(VAR_9->pcidev, VAR_6, VAR_11);

 return VAR_12;
}
