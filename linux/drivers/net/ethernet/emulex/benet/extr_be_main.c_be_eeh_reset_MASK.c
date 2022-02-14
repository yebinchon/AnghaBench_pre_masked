
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
typedef int pci_ers_result_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct be_adapter* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_3)
{
 struct be_adapter *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 FUNC_2(&VAR_4->pdev->dev, "EEH reset\n");

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  return VAR_1;

 FUNC_6(VAR_3);
 FUNC_5(VAR_3);


 FUNC_2(&VAR_4->pdev->dev,
   "Waiting for FW to be ready after EEH reset\n");
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_1;

 FUNC_0(VAR_4, VAR_0);
 return VAR_2;
}
