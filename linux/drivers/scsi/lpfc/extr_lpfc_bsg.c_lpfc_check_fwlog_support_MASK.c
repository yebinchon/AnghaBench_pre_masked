
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_ras_fwlog {int ras_hwsupport; int ras_enabled; } ;
struct lpfc_hba {struct lpfc_ras_fwlog ras_fwlog; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct lpfc_hba *VAR_2)
{
 struct lpfc_ras_fwlog *VAR_3 = ((void*)0);

 VAR_3 = &VAR_2->ras_fwlog;

 if (VAR_3->ras_hwsupport == 0)
  return -VAR_0;
 else if (VAR_3->ras_enabled == 0)
  return -VAR_1;
 else
  return 0;
}
