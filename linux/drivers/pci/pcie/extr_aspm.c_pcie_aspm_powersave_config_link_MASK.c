
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_link_state {int dummy; } ;
struct pci_dev {struct pcie_link_state* link_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (struct pcie_link_state*) ;
 int FUNC_4 (struct pcie_link_state*,int ) ;
 int FUNC_5 (struct pcie_link_state*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct pci_dev *VAR_6)
{
 struct pcie_link_state *VAR_7 = VAR_6->link_state;

 if (VAR_2 || !VAR_7)
  return;

 if (VAR_4 != VAR_0 &&
     VAR_4 != VAR_1)
  return;

 FUNC_0(&VAR_5);
 FUNC_1(&VAR_3);
 FUNC_3(VAR_7);
 FUNC_4(VAR_7, FUNC_5(VAR_7));
 FUNC_2(&VAR_3);
 FUNC_6(&VAR_5);
}
