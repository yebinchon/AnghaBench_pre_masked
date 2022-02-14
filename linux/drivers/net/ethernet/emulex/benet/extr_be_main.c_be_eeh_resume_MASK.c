
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 struct be_adapter* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 int VAR_2 = 0;
 struct be_adapter *VAR_3 = FUNC_5(VAR_1);

 FUNC_4(&VAR_3->pdev->dev, "EEH resume\n");

 FUNC_6(VAR_1);

 VAR_2 = FUNC_0(VAR_3);
 if (VAR_2)
  goto err;

 FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_0);
 return;
err:
 FUNC_3(&VAR_3->pdev->dev, "EEH resume failed\n");
}
