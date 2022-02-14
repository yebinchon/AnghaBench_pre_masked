
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct lpfc_hba {int sli_rev; scalar_t__ pci_dev_grp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_2 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_3 (struct lpfc_hba*,scalar_t__) ;

int
FUNC_4(struct lpfc_hba *VAR_3, uint8_t VAR_4)
{
 int VAR_5;


 VAR_3->pci_dev_grp = VAR_4;


 if (VAR_4 == VAR_1)
  VAR_3->sli_rev = VAR_2;


 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return -VAR_0;

 return 0;
}
