
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int,scalar_t__,char*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 FUNC_1(VAR_1);

 FUNC_0(VAR_1, 0x70, 128, VAR_0+1,
     "vt82c686 HW-mon");

 FUNC_0(VAR_1, 0x90, 16, VAR_0+2, "vt82c686 SMB");
}
