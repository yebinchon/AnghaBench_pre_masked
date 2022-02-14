
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sli4_wcqe_xri_aborted {int word3; int word2; int parameter; int word0; } ;
struct lpfc_queue {int subtype; int hdwq; } ;
struct TYPE_2__ {int sp_els_xri_aborted_work_queue; } ;
struct lpfc_hba {int cfg_enable_fc4_type; int hbalock; int hba_flag; TYPE_1__ sli4_hba; int nvmet_support; } ;
struct lpfc_cq_event {int list; int hdwq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 int FUNC_0 (int *,int *) ;
 struct lpfc_cq_event* FUNC_1 (struct lpfc_hba*,struct sli4_wcqe_xri_aborted*,int) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct sli4_wcqe_xri_aborted*,int ) ;
 int FUNC_4 (struct lpfc_hba*,struct sli4_wcqe_xri_aborted*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_7(struct lpfc_hba *VAR_4,
       struct lpfc_queue *VAR_5,
       struct sli4_wcqe_xri_aborted *VAR_6)
{
 bool VAR_7 = 0;
 struct lpfc_cq_event *VAR_8;
 unsigned long VAR_9;

 switch (VAR_5->subtype) {
 case 129:
  FUNC_3(VAR_4, VAR_6, VAR_5->hdwq);
  if (VAR_4->cfg_enable_fc4_type & VAR_3) {

   if (VAR_4->nvmet_support)
    FUNC_4(VAR_4, VAR_6);
  }
  VAR_7 = 0;
  break;
 case 128:
 case 130:
  VAR_8 = FUNC_1(
   VAR_4, VAR_6, sizeof(struct sli4_wcqe_xri_aborted));
  if (!VAR_8)
   return 0;
  VAR_8->hdwq = VAR_5->hdwq;
  FUNC_5(&VAR_4->hbalock, VAR_9);
  FUNC_0(&VAR_8->list,
         &VAR_4->sli4_hba.sp_els_xri_aborted_work_queue);

  VAR_4->hba_flag |= VAR_0;
  FUNC_6(&VAR_4->hbalock, VAR_9);
  VAR_7 = 1;
  break;
 default:
  FUNC_2(VAR_4, VAR_1, VAR_2,
    "0603 Invalid CQ subtype %d: "
    "%08x %08x %08x %08x\n",
    VAR_5->subtype, VAR_6->word0, VAR_6->parameter,
    VAR_6->word2, VAR_6->word3);
  VAR_7 = 0;
  break;
 }
 return VAR_7;
}
