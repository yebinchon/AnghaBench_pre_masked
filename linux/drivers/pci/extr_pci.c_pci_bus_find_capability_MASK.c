
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_bus*,unsigned int,int) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int) ;
 int FUNC_2 (struct pci_bus*,unsigned int,int ,int*) ;

int FUNC_3(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 FUNC_2(VAR_1, VAR_2, VAR_0, &VAR_5);

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5 & 0x7f);
 if (VAR_4)
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3);

 return VAR_4;
}
