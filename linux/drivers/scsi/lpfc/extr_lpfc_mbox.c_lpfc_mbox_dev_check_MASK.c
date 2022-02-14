
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ link_state; int pcidev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(struct lpfc_hba *VAR_2)
{

 if (FUNC_1(FUNC_0(VAR_2->pcidev)))
  return -VAR_0;


 if (VAR_2->link_state == VAR_1)
  return -VAR_0;

 return 0;
}
