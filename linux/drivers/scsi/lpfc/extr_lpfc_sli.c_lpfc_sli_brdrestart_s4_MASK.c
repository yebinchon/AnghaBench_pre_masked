
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli {int stats_start; int lnk_stat_offsets; int sli_flag; } ;
struct lpfc_hba {int hba_flag; int pcidev; int hbalock; int link_state; TYPE_1__* pport; struct lpfc_sli sli; } ;
struct TYPE_2__ {scalar_t__ stopped; int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_5)
{
 struct lpfc_sli *VAR_6 = &VAR_5->sli;
 uint32_t VAR_7;
 int VAR_8;


 FUNC_2(VAR_5, VAR_1, VAR_2,
   "0296 Restart HBA Data: x%x x%x\n",
   VAR_5->pport->port_state, VAR_6->sli_flag);


 VAR_7 = VAR_5->hba_flag & VAR_0;

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8) {
  VAR_5->link_state = VAR_3;
  goto hba_down_queue;
 }

 FUNC_7(&VAR_5->hbalock);
 VAR_5->pport->stopped = 0;
 VAR_5->link_state = VAR_4;
 VAR_5->hba_flag = 0;
 FUNC_8(&VAR_5->hbalock);

 FUNC_5(&VAR_6->lnk_stat_offsets, 0, sizeof(VAR_6->lnk_stat_offsets));
 VAR_6->stats_start = FUNC_0();


 if (VAR_7)
  FUNC_6(VAR_5->pcidev);

hba_down_queue:
 FUNC_1(VAR_5);
 FUNC_4(VAR_5);

 return VAR_8;
}
