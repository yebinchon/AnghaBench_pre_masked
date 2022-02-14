
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ ats_enabled; scalar_t__ ats_cap; int ats_ref_cnt; scalar_t__ is_virtfn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 struct pci_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int ) ;

void FUNC_6(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3;
 u16 VAR_4;

 if (FUNC_0(!VAR_2->ats_enabled))
  return;

 if (FUNC_2(&VAR_2->ats_ref_cnt))
  return;

 if (VAR_2->is_virtfn) {
  VAR_3 = FUNC_3(VAR_2);
  FUNC_1(&VAR_3->ats_ref_cnt);
 }

 FUNC_4(VAR_2, VAR_2->ats_cap + VAR_0, &VAR_4);
 VAR_4 &= ~VAR_1;
 FUNC_5(VAR_2, VAR_2->ats_cap + VAR_0, VAR_4);

 VAR_2->ats_enabled = 0;
}
