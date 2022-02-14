
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct pci_host_bridge {struct mt7621_pcie* sysdata; int swizzle_irq; int map_irq; int * ops; TYPE_2__ dev; int busnr; int windows; } ;
struct TYPE_3__ {int start; } ;
struct mt7621_pcie {int dev; TYPE_1__ busn; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mt7621_pcie* FUNC_1 (struct pci_host_bridge*) ;
 int FUNC_2 (struct pci_host_bridge*) ;

__attribute__((used)) static int FUNC_3(struct pci_host_bridge *VAR_3,
         struct list_head *VAR_4)
{
 struct mt7621_pcie *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_4, &VAR_3->windows);
 VAR_3->busnr = VAR_5->busn.start;
 VAR_3->dev.parent = VAR_5->dev;
 VAR_3->ops = &VAR_0;
 VAR_3->map_irq = VAR_1;
 VAR_3->swizzle_irq = VAR_2;
 VAR_3->sysdata = VAR_5;

 return FUNC_2(VAR_3);
}
