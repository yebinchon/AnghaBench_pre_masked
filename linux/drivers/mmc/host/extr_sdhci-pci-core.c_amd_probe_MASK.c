
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_chip {int quirks2; } ;
struct pci_dev {int revision; } ;
typedef enum amd_chipset_gen { ____Placeholder_amd_chipset_gen } amd_chipset_gen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pci_dev* FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct sdhci_pci_chip *VAR_8)
{
 struct pci_dev *VAR_9;
 enum amd_chipset_gen VAR_10;

 VAR_9 = FUNC_0(VAR_6,
   VAR_4, ((void*)0));
 if (VAR_9) {
  VAR_10 = VAR_0;
 } else {
  VAR_9 = FUNC_0(VAR_6,
    VAR_5, ((void*)0));
  if (VAR_9) {
   if (VAR_9->revision < 0x51)
    VAR_10 = VAR_1;
   else
    VAR_10 = VAR_2;
  } else {
   VAR_10 = VAR_3;
  }
 }

 if (VAR_10 == VAR_0 || VAR_10 == VAR_1)
  VAR_8->quirks2 |= VAR_7;

 return 0;
}
