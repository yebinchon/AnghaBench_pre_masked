
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ devfn; } ;
struct be_adapter {TYPE_1__* pdev; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*,int ) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct pci_dev*) ;
 struct be_adapter* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static pci_ers_result_t FUNC_9(struct pci_dev *VAR_4,
         pci_channel_state_t VAR_5)
{
 struct be_adapter *VAR_6 = FUNC_7(VAR_4);

 FUNC_5(&VAR_6->pdev->dev, "EEH error detected\n");

 FUNC_3(VAR_6);

 if (!FUNC_1(VAR_6, VAR_0)) {
  FUNC_4(VAR_6, VAR_0);

  FUNC_0(VAR_6);

  FUNC_2(VAR_6);
 }

 if (VAR_5 == VAR_3)
  return VAR_1;

 FUNC_6(VAR_4);







 if (VAR_4->devfn == 0)
  FUNC_8(30);

 return VAR_2;
}
