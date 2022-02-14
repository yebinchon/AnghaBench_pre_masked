
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcie_link_state {int sibling; struct pcie_link_state* parent; struct pcie_link_state* root; } ;
struct pci_dev {struct pcie_link_state* link_state; TYPE_1__* subordinate; TYPE_2__* bus; } ;
struct TYPE_4__ {struct pci_dev* self; } ;
struct TYPE_3__ {int devices; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcie_link_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (struct pcie_link_state*,int ) ;
 int FUNC_7 (struct pcie_link_state*) ;
 int FUNC_8 (struct pcie_link_state*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->bus->self;
 struct pcie_link_state *VAR_4, *VAR_5, *VAR_6;

 if (!VAR_3 || !VAR_3->link_state)
  return;

 FUNC_0(&VAR_1);
 FUNC_4(&VAR_0);




 if (!FUNC_3(&VAR_3->subordinate->devices))
  goto out;

 VAR_4 = VAR_3->link_state;
 VAR_5 = VAR_4->root;
 VAR_6 = VAR_4->parent;


 FUNC_6(VAR_4, 0);
 FUNC_2(&VAR_4->sibling);

 FUNC_1(VAR_4);


 if (VAR_6) {
  FUNC_8(VAR_5);
  FUNC_7(VAR_6);
 }
out:
 FUNC_5(&VAR_0);
 FUNC_9(&VAR_1);
}
