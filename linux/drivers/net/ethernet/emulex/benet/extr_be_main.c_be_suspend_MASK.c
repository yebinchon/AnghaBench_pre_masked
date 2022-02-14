
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct be_adapter {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*,int) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 struct be_adapter* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct be_adapter *VAR_2 = FUNC_5(VAR_0);

 FUNC_2(VAR_2, 0);
 FUNC_0(VAR_2);

 FUNC_1(VAR_2);

 FUNC_6(VAR_0);
 FUNC_4(VAR_0);
 FUNC_7(VAR_0, FUNC_3(VAR_0, VAR_1));
 return 0;
}
