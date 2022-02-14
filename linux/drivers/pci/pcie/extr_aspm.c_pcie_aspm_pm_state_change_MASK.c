
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int root; } ;
struct pci_dev {struct pcie_link_state* link_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct pcie_link_state*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct pci_dev *VAR_3)
{
 struct pcie_link_state *VAR_4 = VAR_3->link_state;

 if (VAR_0 || !VAR_4)
  return;




 FUNC_0(&VAR_2);
 FUNC_1(&VAR_1);
 FUNC_4(VAR_4->root);
 FUNC_3(VAR_4);
 FUNC_2(&VAR_1);
 FUNC_5(&VAR_2);
}
