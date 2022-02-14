
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hba {int hbalock; } ;
struct completion {int dummy; } ;
struct TYPE_3__ {scalar_t__ context3; int mbox_flag; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void
FUNC_3(struct lpfc_hba *VAR_1, LPFC_MBOXQ_t *VAR_2)
{
 unsigned long VAR_3;
 struct completion *VAR_4;





 VAR_2->mbox_flag |= VAR_0;
 FUNC_1(&VAR_1->hbalock, VAR_3);
 VAR_4 = (struct completion *)VAR_2->context3;
 if (VAR_4)
  FUNC_0(VAR_4);
 FUNC_2(&VAR_1->hbalock, VAR_3);
 return;
}
