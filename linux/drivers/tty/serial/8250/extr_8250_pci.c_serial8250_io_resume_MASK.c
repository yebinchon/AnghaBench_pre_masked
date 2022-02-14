
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_private {int board; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct serial_private*) ;
 int FUNC_1 (struct serial_private*) ;
 struct serial_private* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct serial_private*) ;
 struct serial_private* FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct serial_private *VAR_1 = FUNC_2(VAR_0);
 struct serial_private *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_4(VAR_0, VAR_1->board);
 if (!FUNC_0(VAR_2)) {
  FUNC_3(VAR_0, VAR_2);
  FUNC_1(VAR_1);
 }
}
