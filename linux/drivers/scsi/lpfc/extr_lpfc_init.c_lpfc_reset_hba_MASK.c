
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {TYPE_1__ sli; int link_state; int cfg_enable_hba_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;

void
FUNC_5(struct lpfc_hba *VAR_4)
{

 if (!VAR_4->cfg_enable_hba_reset) {
  VAR_4->link_state = VAR_0;
  return;
 }
 if (VAR_4->sli.sli_flag & VAR_3)
  FUNC_1(VAR_4, VAR_2);
 else
  FUNC_1(VAR_4, VAR_1);
 FUNC_0(VAR_4);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 FUNC_4(VAR_4);
}
