
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct be_adapter {int netdev; int work; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct be_adapter* FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct be_adapter *VAR_1 = FUNC_6(VAR_0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1);
 FUNC_3(&VAR_1->work);
 FUNC_0(VAR_1);

 FUNC_4(VAR_1->netdev);

 FUNC_1(VAR_1);

 FUNC_5(VAR_0);
}
