
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int ptm_enabled; int ptm_granularity; int ptm_root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 struct pci_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int) ;

void FUNC_7(struct pci_dev *VAR_9)
{
 int VAR_10;
 u32 VAR_11, VAR_12;
 u8 VAR_13;
 struct pci_dev *VAR_14;

 if (!FUNC_1(VAR_9))
  return;

 VAR_10 = FUNC_0(VAR_9, VAR_2);
 if (!VAR_10)
  return;






 if ((FUNC_2(VAR_9) == VAR_0 ||
      FUNC_2(VAR_9) == VAR_1))
  return;

 FUNC_4(VAR_9, VAR_10 + VAR_3, &VAR_11);
 VAR_13 = (VAR_11 & VAR_8) >> 8;







 VAR_14 = FUNC_5(VAR_9);
 if (VAR_14 && VAR_14->ptm_enabled) {
  VAR_12 = VAR_6;
  if (VAR_14->ptm_granularity == 0)
   VAR_9->ptm_granularity = 0;
  else if (VAR_14->ptm_granularity > VAR_13)
   VAR_9->ptm_granularity = VAR_14->ptm_granularity;
 } else {
  if (VAR_11 & VAR_4) {
   VAR_12 = VAR_6 | VAR_7;
   VAR_9->ptm_root = 1;
   VAR_9->ptm_granularity = VAR_13;
  } else
   return;
 }

 VAR_12 |= VAR_9->ptm_granularity << 8;
 FUNC_6(VAR_9, VAR_10 + VAR_5, VAR_12);
 VAR_9->ptm_enabled = 1;

 FUNC_3(VAR_9);
}
