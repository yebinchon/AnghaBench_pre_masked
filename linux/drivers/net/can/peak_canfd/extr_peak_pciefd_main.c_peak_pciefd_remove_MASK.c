
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pciefd_board {int reg_base; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pciefd_board* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pciefd_board*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct pciefd_board *VAR_1 = FUNC_1(VAR_0);


 FUNC_4(VAR_1);

 FUNC_2(VAR_0, VAR_1->reg_base);

 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
}
