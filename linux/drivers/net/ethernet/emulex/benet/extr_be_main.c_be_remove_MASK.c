
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct be_adapter {int netdev; int pdev; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*,int) ;
 int FUNC_6 (struct be_adapter*) ;
 int FUNC_7 (struct be_adapter*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct be_adapter* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_0)
{
 struct be_adapter *VAR_1 = FUNC_11(VAR_0);

 if (!VAR_1)
  return;

 FUNC_6(VAR_1);
 FUNC_5(VAR_1, 0);

 FUNC_0(VAR_1);

 FUNC_14(VAR_1->netdev);

 FUNC_1(VAR_1);

 if (!FUNC_13(VAR_1->pdev))
  FUNC_3(VAR_1);


 FUNC_2(VAR_1);

 FUNC_7(VAR_1);
 FUNC_4(VAR_1);

 FUNC_10(VAR_0);

 FUNC_12(VAR_0);
 FUNC_9(VAR_0);

 FUNC_8(VAR_1->netdev);
}
