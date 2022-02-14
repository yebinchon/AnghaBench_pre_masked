
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_p2pdma {int map_types; int pool; } ;
struct TYPE_2__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; struct pci_p2pdma* p2pdma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1;
 struct pci_p2pdma *VAR_3 = VAR_2->p2pdma;

 if (!VAR_3)
  return;


 VAR_2->p2pdma = ((void*)0);
 FUNC_1();

 FUNC_0(VAR_3->pool);
 FUNC_2(&VAR_2->dev.kobj, &VAR_0);
 FUNC_3(&VAR_3->map_types);
}
