
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_queue {int queue_id; } ;
struct TYPE_3__ {struct lpfc_queue* nvmels_wq; struct lpfc_queue* els_wq; struct lpfc_queue* mbx_wq; TYPE_2__* hdwq; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct TYPE_4__ {struct lpfc_queue* io_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_queue*) ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_hba *VAR_4, int VAR_5, int VAR_6)
{
 struct lpfc_queue *VAR_7;
 char *VAR_8;

 if (VAR_5 == VAR_1) {
  VAR_7 = VAR_4->sli4_hba.hdwq[VAR_6].io_wq;
  VAR_8 = "IO";
 } else if (VAR_5 == VAR_2) {
  VAR_7 = VAR_4->sli4_hba.mbx_wq;
  VAR_8 = "MBX";
 } else if (VAR_5 == VAR_0) {
  VAR_7 = VAR_4->sli4_hba.els_wq;
  VAR_8 = "ELS";
 } else if (VAR_5 == VAR_3) {
  VAR_7 = VAR_4->sli4_hba.nvmels_wq;
  VAR_8 = "NVMELS";
 } else
  return;

 if (VAR_5 == VAR_1)
  FUNC_1("%s WQ: WQ[Idx:%d|Qid:%d]\n",
   VAR_8, VAR_6, VAR_7->queue_id);
 else
  FUNC_1("%s WQ: WQ[Qid:%d]\n",
   VAR_8, VAR_7->queue_id);

 FUNC_0(VAR_7);
}
