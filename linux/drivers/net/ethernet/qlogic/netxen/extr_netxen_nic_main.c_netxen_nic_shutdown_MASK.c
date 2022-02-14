
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct netxen_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netxen_adapter*) ;
 scalar_t__ FUNC_1 (struct netxen_adapter*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 struct netxen_adapter* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_2)
{
 struct netxen_adapter *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(VAR_3);

 if (FUNC_5(VAR_2))
  return;

 if (FUNC_1(VAR_3)) {
  FUNC_3(VAR_2, VAR_0, 1);
  FUNC_3(VAR_2, VAR_1, 1);
 }

 FUNC_2(VAR_2);
}
