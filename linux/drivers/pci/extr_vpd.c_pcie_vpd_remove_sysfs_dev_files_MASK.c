
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct pci_dev {TYPE_2__* vpd; TYPE_1__ dev; } ;
struct TYPE_4__ {scalar_t__ attr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(struct pci_dev *VAR_0)
{
 if (VAR_0->vpd && VAR_0->vpd->attr) {
  FUNC_1(&VAR_0->dev.kobj, VAR_0->vpd->attr);
  FUNC_0(VAR_0->vpd->attr);
 }
}
