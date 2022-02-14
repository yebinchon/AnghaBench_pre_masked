
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ ats_cap; scalar_t__ is_virtfn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;

int FUNC_2(struct pci_dev *VAR_3)
{
 u16 VAR_4;

 if (!VAR_3->ats_cap)
  return -VAR_0;

 if (VAR_3->is_virtfn)
  return 0;

 FUNC_1(VAR_3, VAR_3->ats_cap + VAR_1, &VAR_4);
 return FUNC_0(VAR_4) ? FUNC_0(VAR_4) : VAR_2;
}
