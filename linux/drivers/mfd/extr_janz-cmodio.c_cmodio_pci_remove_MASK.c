
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct cmodio_device {int ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct cmodio_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct cmodio_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_1->dev);
 FUNC_5(&VAR_1->dev.kobj, &VAR_0);
 FUNC_0(VAR_2->ctrl);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
}
