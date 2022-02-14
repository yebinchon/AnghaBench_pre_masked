
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,char*) ;
 int FUNC_1 (int,int,char*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 FUNC_0(VAR_0, "ATI Northbridge, reserving I/O ports 0x3b0 to 0x3bb\n");

 FUNC_1(0x3b0, 0x0C, "RadeonIGP");
 FUNC_1(0x3d3, 0x01, "RadeonIGP");
}
