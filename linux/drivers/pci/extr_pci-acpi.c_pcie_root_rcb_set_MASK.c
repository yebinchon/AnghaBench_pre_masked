
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 struct pci_dev* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2);
 u16 VAR_4;

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (VAR_4 & VAR_1)
  return 1;

 return 0;
}
