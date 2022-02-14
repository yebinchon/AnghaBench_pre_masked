
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct sym_chip {int features; } ;
struct sym_device {struct pci_dev* pdev; struct sym_chip chip; } ;
struct pci_dev {scalar_t__ device; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sym_device *VAR_7)
{
 struct sym_chip *VAR_8 = &VAR_7->chip;
 struct pci_dev *VAR_9 = VAR_7->pdev;
 u_short VAR_10;






 if (VAR_9->device == VAR_4 && VAR_9->revision < 0x4) {
  VAR_8->features |= (VAR_3 | VAR_2);
 }


 if (VAR_8->features & VAR_3) {
  if (FUNC_1(VAR_9))
   return -VAR_0;
 }
 FUNC_0(VAR_9, VAR_5, &VAR_10);
 if (VAR_8->features & VAR_1) {
  if (!(VAR_10 & VAR_6))
   VAR_8->features &= ~VAR_1;
 } else {
  if (VAR_10 & VAR_6) {
   VAR_10 = VAR_6;
   FUNC_2(VAR_9, VAR_5, VAR_10);
   FUNC_0(VAR_9, VAR_5, &VAR_10);
  }
 }

 return 0;
}
