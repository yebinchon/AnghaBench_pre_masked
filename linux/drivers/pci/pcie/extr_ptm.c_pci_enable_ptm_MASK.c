
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int ptm_enabled; int ptm_granularity; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 struct pci_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,scalar_t__,int) ;

int FUNC_7(struct pci_dev *VAR_8, u8 *VAR_9)
{
 int VAR_10;
 u32 VAR_11, VAR_12;
 struct pci_dev *VAR_13;

 if (!FUNC_1(VAR_8))
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_8, VAR_3);
 if (!VAR_10)
  return -VAR_0;

 FUNC_4(VAR_8, VAR_10 + VAR_4, &VAR_11);
 if (!(VAR_11 & VAR_5))
  return -VAR_0;
 if (FUNC_2(VAR_8) == VAR_1) {
  VAR_13 = FUNC_5(VAR_8);
  if (!VAR_13 || !VAR_13->ptm_enabled)
   return -VAR_0;

  VAR_8->ptm_granularity = VAR_13->ptm_granularity;
 } else if (FUNC_2(VAR_8) == VAR_2) {
  VAR_8->ptm_granularity = 0;
 } else
  return -VAR_0;

 VAR_12 = VAR_7;
 VAR_12 |= VAR_8->ptm_granularity << 8;
 FUNC_6(VAR_8, VAR_10 + VAR_6, VAR_12);
 VAR_8->ptm_enabled = 1;

 FUNC_3(VAR_8);

 if (VAR_9)
  *VAR_9 = VAR_8->ptm_granularity;
 return 0;
}
