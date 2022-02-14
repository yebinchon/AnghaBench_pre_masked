
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,...) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 u8 VAR_3;
 int VAR_4 = 0;

 if (FUNC_0(VAR_2->subsystem_vendor == VAR_1)) {
  if (VAR_2->device == VAR_0)
   VAR_4 = 1;
 }

 if (!VAR_4)
  return;

 FUNC_2(VAR_2, 0x50, &VAR_3);
 if (VAR_3 & 0xc0) {
  FUNC_3(VAR_2, 0x50, VAR_3 & (~0xc0));
  FUNC_2(VAR_2, 0x50, &VAR_3);
  if (VAR_3 & 0xc0)
   FUNC_1(VAR_2, "Onboard AC97/MC97 devices continue to play 'hide and seek'! 0x%x\n",
     VAR_3);
  else
   FUNC_1(VAR_2, "Enabled onboard AC97/MC97 devices\n");
 }
}
