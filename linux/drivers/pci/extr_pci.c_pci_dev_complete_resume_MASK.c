
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct device {TYPE_1__ power; } ;
struct pci_dev {scalar_t__ current_state; struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct pci_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;

 if (!FUNC_1(VAR_1))
  return;

 FUNC_3(&VAR_2->power.lock);

 if (FUNC_2(VAR_2) && VAR_1->current_state < VAR_0)
  FUNC_0(VAR_1, 1);

 FUNC_4(&VAR_2->power.lock);
}
