
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct cxl {TYPE_1__* native; } ;
struct TYPE_2__ {int * sl_ops; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct cxl *VAR_2, struct pci_dev *VAR_3)
{
 if (FUNC_0()) {
  FUNC_1(&VAR_3->dev, "Device uses a PSL8\n");
  VAR_2->native->sl_ops = &VAR_0;
 } else {
  FUNC_1(&VAR_3->dev, "Device uses a PSL9\n");
  VAR_2->native->sl_ops = &VAR_1;
 }
}
