
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {scalar_t__ nvmet_support; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lpfc_hba*) ;

int
FUNC_1(struct lpfc_hba *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->nvmet_support)
  VAR_2 += VAR_0;
 return VAR_2;
}
