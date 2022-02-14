
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int aer_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

int FUNC_5(struct pci_dev *VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_6))
  return -VAR_1;

 VAR_7 = VAR_6->aer_cap;
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_4(VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 == VAR_5) {
  FUNC_2(VAR_6, VAR_7 + VAR_3, &VAR_8);
  FUNC_3(VAR_6, VAR_7 + VAR_3, VAR_8);
 }

 FUNC_2(VAR_6, VAR_7 + VAR_2, &VAR_8);
 FUNC_3(VAR_6, VAR_7 + VAR_2, VAR_8);

 FUNC_2(VAR_6, VAR_7 + VAR_4, &VAR_8);
 FUNC_3(VAR_6, VAR_7 + VAR_4, VAR_8);

 return 0;
}
