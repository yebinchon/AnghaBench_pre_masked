
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 u32 VAR_1;

 FUNC_0(VAR_0, 0xf4, &VAR_1);


 if (VAR_1 == 0x05719000) {
  int VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 > 2048)
   FUNC_2(VAR_0, 2048);
 }
}
