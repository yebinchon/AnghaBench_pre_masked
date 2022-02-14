
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_0, &VAR_2->state))
  FUNC_1(VAR_2);
}
