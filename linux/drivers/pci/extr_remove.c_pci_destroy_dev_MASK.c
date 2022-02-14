
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ kobj; } ;
struct pci_dev {TYPE_2__ dev; int bus_list; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 if (!VAR_1->dev.kobj.parent)
  return;

 FUNC_0(&VAR_1->dev);

 FUNC_1(&VAR_0);
 FUNC_2(&VAR_1->bus_list);
 FUNC_7(&VAR_0);

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_6(&VAR_1->dev);
}
