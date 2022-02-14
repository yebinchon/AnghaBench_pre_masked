
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcie_link_state {int sibling; struct pcie_link_state* root; struct pcie_link_state* parent; int downstream; struct pci_dev* pdev; } ;
struct pci_dev {struct pcie_link_state* link_state; TYPE_3__* bus; int subordinate; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct TYPE_5__ {TYPE_1__* self; } ;
struct TYPE_4__ {struct pcie_link_state* link_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pcie_link_state*) ;
 struct pcie_link_state* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static struct pcie_link_state *FUNC_6(struct pci_dev *VAR_4)
{
 struct pcie_link_state *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->sibling);
 VAR_5->pdev = VAR_4;
 VAR_5->downstream = FUNC_4(VAR_4->subordinate);
 if (FUNC_5(VAR_4) == VAR_2 ||
     FUNC_5(VAR_4) == VAR_1 ||
     !VAR_4->bus->parent->self) {
  VAR_5->root = VAR_5;
 } else {
  struct pcie_link_state *VAR_6;

  VAR_6 = VAR_4->bus->parent->self->link_state;
  if (!VAR_6) {
   FUNC_1(VAR_5);
   return ((void*)0);
  }

  VAR_5->parent = VAR_6;
  VAR_5->root = VAR_5->parent->root;
 }

 FUNC_3(&VAR_5->sibling, &VAR_3);
 VAR_4->link_state = VAR_5;
 return VAR_5;
}
