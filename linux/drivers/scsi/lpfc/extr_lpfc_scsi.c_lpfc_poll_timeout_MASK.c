
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int * sli3_ring; } ;
struct lpfc_hba {int cfg_poll; TYPE_1__ sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct lpfc_hba* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,int *,int ) ;
 struct lpfc_hba* VAR_5 ;

void FUNC_3(struct timer_list *VAR_6)
{
 struct lpfc_hba *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_4);

 if (VAR_7->cfg_poll & VAR_1) {
  FUNC_2(VAR_7,
   &VAR_7->sli.sli3_ring[VAR_3], VAR_2);

  if (VAR_7->cfg_poll & VAR_0)
   FUNC_1(VAR_7);
 }
}
