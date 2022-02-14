
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_dev* FUNC_0 (struct controller*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;

bool FUNC_2(struct controller *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_0(VAR_2);
 u16 VAR_4;

 FUNC_1(VAR_3, VAR_0, &VAR_4);
 return VAR_4 & VAR_1;
}
