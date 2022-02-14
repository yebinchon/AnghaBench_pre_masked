
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev_flags; int current_state; scalar_t__ pm_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char*,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_9, int VAR_10)
{
 u16 VAR_11;

 if (!VAR_9->pm_cap || VAR_9->dev_flags & VAR_5)
  return -VAR_1;

 FUNC_2(VAR_9, VAR_9->pm_cap + VAR_6, &VAR_11);
 if (VAR_11 & VAR_7)
  return -VAR_1;

 if (VAR_10)
  return 0;

 if (VAR_9->current_state != VAR_3)
  return -VAR_0;

 VAR_11 &= ~VAR_8;
 VAR_11 |= VAR_4;
 FUNC_3(VAR_9, VAR_9->pm_cap + VAR_6, VAR_11);
 FUNC_0(VAR_9);

 VAR_11 &= ~VAR_8;
 VAR_11 |= VAR_3;
 FUNC_3(VAR_9, VAR_9->pm_cap + VAR_6, VAR_11);
 FUNC_0(VAR_9);

 return FUNC_1(VAR_9, "PM D3->D0", VAR_2);
}
