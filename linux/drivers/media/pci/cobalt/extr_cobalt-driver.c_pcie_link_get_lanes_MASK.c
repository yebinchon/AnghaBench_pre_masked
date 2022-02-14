
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct cobalt {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static unsigned FUNC_2(struct cobalt *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pci_dev;
 u16 VAR_4;

 if (!FUNC_0(VAR_3))
  return 0;
 FUNC_1(VAR_3, VAR_0, &VAR_4);
 return (VAR_4 & VAR_1) >> 4;
}
