
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_vpd {scalar_t__ valid; scalar_t__ busy; scalar_t__ cap; int lock; int * ops; int len; } ;
struct pci_dev {int dev_flags; struct pci_vpd* vpd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pci_vpd* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3(struct pci_dev *VAR_8)
{
 struct pci_vpd *VAR_9;
 u8 VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_3);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->len = VAR_5;
 if (VAR_8->dev_flags & VAR_4)
  VAR_9->ops = &VAR_6;
 else
  VAR_9->ops = &VAR_7;
 FUNC_1(&VAR_9->lock);
 VAR_9->cap = VAR_10;
 VAR_9->busy = 0;
 VAR_9->valid = 0;
 VAR_8->vpd = VAR_9;
 return 0;
}
