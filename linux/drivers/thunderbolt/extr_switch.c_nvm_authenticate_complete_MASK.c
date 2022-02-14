
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_switch {TYPE_2__* tb; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {TYPE_1__* nhi; } ;
struct TYPE_3__ {int pdev; } ;


 struct pci_dev* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tb_switch *VAR_0)
{
 struct pci_dev *VAR_1;

 VAR_1 = FUNC_0(VAR_0->tb->nhi->pdev);
 if (VAR_1)
  FUNC_1(&VAR_1->dev);
}
