
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ ats_cap; scalar_t__ ats_stu; int is_virtfn; int ats_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int ) ;

void FUNC_2(struct pci_dev *VAR_3)
{
 u16 VAR_4;

 if (!VAR_3->ats_enabled)
  return;

 VAR_4 = VAR_1;
 if (!VAR_3->is_virtfn)
  VAR_4 |= FUNC_0(VAR_3->ats_stu - VAR_2);
 FUNC_1(VAR_3, VAR_3->ats_cap + VAR_0, VAR_4);
}
