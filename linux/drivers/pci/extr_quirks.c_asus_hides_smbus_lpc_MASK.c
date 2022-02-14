
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,...) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{
 u16 VAR_2;

 if (FUNC_0(!VAR_0))
  return;

 FUNC_2(VAR_1, 0xF2, &VAR_2);
 if (VAR_2 & 0x8) {
  FUNC_3(VAR_1, 0xF2, VAR_2 & (~0x8));
  FUNC_2(VAR_1, 0xF2, &VAR_2);
  if (VAR_2 & 0x8)
   FUNC_1(VAR_1, "i801 SMBus device continues to play 'hide and seek'! 0x%x\n",
     VAR_2);
  else
   FUNC_1(VAR_1, "Enabled i801 SMBus device\n");
 }
}
