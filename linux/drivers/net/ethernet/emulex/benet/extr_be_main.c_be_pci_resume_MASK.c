
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 struct be_adapter* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 struct be_adapter *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_4(VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_2, VAR_0);

 return 0;
}
