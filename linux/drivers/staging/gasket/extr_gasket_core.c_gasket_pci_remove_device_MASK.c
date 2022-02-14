
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct gasket_internal_desc {TYPE_1__* driver_desc; int mutex; struct gasket_dev** devs; } ;
struct gasket_dev {int dev; struct pci_dev* pci_dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct gasket_internal_desc*,struct gasket_dev*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct gasket_dev*) ;
 struct gasket_internal_desc* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct pci_dev *VAR_2)
{
 int VAR_3;
 struct gasket_internal_desc *VAR_4;
 struct gasket_dev *VAR_5 = ((void*)0);

 FUNC_4(&VAR_1);
 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4) {
  FUNC_5(&VAR_1);
  return;
 }
 FUNC_5(&VAR_1);


 FUNC_4(&VAR_4->mutex);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_4->devs[VAR_3] &&
      VAR_4->devs[VAR_3]->pci_dev == VAR_2) {
   VAR_5 = VAR_4->devs[VAR_3];
   break;
  }
 }
 FUNC_5(&VAR_4->mutex);

 if (!VAR_5)
  return;

 FUNC_1(VAR_5->dev, "remove %s PCI gasket device\n",
  VAR_4->driver_desc->name);

 FUNC_2(VAR_5);
 FUNC_0(VAR_4, VAR_5);
}
