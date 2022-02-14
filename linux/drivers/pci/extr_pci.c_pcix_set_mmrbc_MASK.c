
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int bus_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,scalar_t__,int) ;

int FUNC_6(struct pci_dev *VAR_9, int VAR_10)
{
 int VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 u16 VAR_15;

 if (VAR_10 < 512 || VAR_10 > 4096 || !FUNC_1(VAR_10))
  return -VAR_1;

 VAR_13 = FUNC_0(VAR_10) - 10;

 VAR_11 = FUNC_2(VAR_9, VAR_4);
 if (!VAR_11)
  return -VAR_1;

 if (FUNC_3(VAR_9, VAR_11 + VAR_7, &VAR_12))
  return -VAR_1;

 if (VAR_13 > (VAR_12 & VAR_8) >> 21)
  return -VAR_0;

 if (FUNC_4(VAR_9, VAR_11 + VAR_5, &VAR_15))
  return -VAR_1;

 VAR_14 = (VAR_15 & VAR_6) >> 2;
 if (VAR_14 != VAR_13) {
  if (VAR_13 > VAR_14 && (VAR_9->bus->bus_flags & VAR_3))
   return -VAR_2;

  VAR_15 &= ~VAR_6;
  VAR_15 |= VAR_13 << 2;
  if (FUNC_5(VAR_9, VAR_11 + VAR_5, VAR_15))
   return -VAR_2;
 }
 return 0;
}
