
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ,struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_1,
  VAR_0, ((void*)0));
 uint8_t VAR_4;





 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_3);
 if (!VAR_3)
  return;
 FUNC_0(VAR_3);

 if (FUNC_3(VAR_2, 0x76, &VAR_4) == 0) {
  if (VAR_4 & 0x40) {

   FUNC_4(VAR_2, 0x76, VAR_4 ^ 0x40);

   FUNC_2(VAR_2, "Disabling VIA CX700 PCI parking\n");
  }
 }

 if (FUNC_3(VAR_2, 0x72, &VAR_4) == 0) {
  if (VAR_4 != 0) {

   FUNC_4(VAR_2, 0x72, 0x0);


   FUNC_4(VAR_2, 0x75, 0x1);


   FUNC_4(VAR_2, 0x77, 0x0);

   FUNC_2(VAR_2, "Disabling VIA CX700 PCI caching\n");
  }
 }
}
