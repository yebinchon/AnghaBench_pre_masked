
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct pci_epc*) ;

void FUNC_2(struct device *VAR_2, struct pci_epc *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_0,
      VAR_3);
 FUNC_0(VAR_2, VAR_4, "couldn't find PCI EPC resource\n");
}
