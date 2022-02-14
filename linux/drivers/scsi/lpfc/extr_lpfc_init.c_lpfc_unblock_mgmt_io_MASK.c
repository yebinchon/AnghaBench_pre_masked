
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {int hbalock; TYPE_1__ sli; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void
FUNC_2(struct lpfc_hba * VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->hbalock, VAR_2);
 VAR_1->sli.sli_flag &= ~VAR_0;
 FUNC_1(&VAR_1->hbalock, VAR_2);
}
