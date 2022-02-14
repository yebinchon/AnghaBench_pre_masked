
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int fc_eventTag; } ;
struct lpfc_acqe_dcbx {int event_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_2,
    struct lpfc_acqe_dcbx *VAR_3)
{
 VAR_2->fc_eventTag = VAR_3->event_tag;
 FUNC_0(VAR_2, VAR_0, VAR_1,
   "0290 The SLI4 DCBX asynchronous event is not "
   "handled yet\n");
}
