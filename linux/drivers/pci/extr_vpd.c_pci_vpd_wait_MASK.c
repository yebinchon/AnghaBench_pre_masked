
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_vpd {int flag; scalar_t__ busy; scalar_t__ cap; } ;
struct pci_dev {struct pci_vpd* vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_6)
{
 struct pci_vpd *VAR_7 = VAR_6->vpd;
 unsigned long VAR_8 = VAR_5 + FUNC_1(125);
 unsigned long VAR_9 = 16;
 u16 VAR_10;
 int VAR_11;

 if (!VAR_7->busy)
  return 0;

 do {
  VAR_11 = FUNC_2(VAR_6, VAR_7->cap + VAR_2,
      &VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  if ((VAR_10 & VAR_3) == VAR_7->flag) {
   VAR_7->busy = 0;
   return 0;
  }

  if (FUNC_0(VAR_4))
   return -VAR_0;

  if (FUNC_4(VAR_5, VAR_8))
   break;

  FUNC_5(10, VAR_9);
  if (VAR_9 < 1024)
   VAR_9 *= 2;
 } while (1);

 FUNC_3(VAR_6, "VPD access failed.  This is likely a firmware bug on this device.  Contact the card vendor for a firmware update\n");
 return -VAR_1;
}
