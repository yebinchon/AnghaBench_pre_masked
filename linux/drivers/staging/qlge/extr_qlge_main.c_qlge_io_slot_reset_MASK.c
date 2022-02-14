
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int flags; int ndev; } ;
struct pci_dev {int error_state; } ;
struct net_device {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct ql_adapter*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static pci_ers_result_t FUNC_8(struct pci_dev *VAR_6)
{
 struct net_device *VAR_7 = FUNC_3(VAR_6);
 struct ql_adapter *VAR_8 = FUNC_0(VAR_7);

 VAR_6->error_state = VAR_5;

 FUNC_4(VAR_6);
 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_8, VAR_4, VAR_8->ndev,
     "Cannot re-enable PCI device after reset.\n");
  return VAR_0;
 }
 FUNC_5(VAR_6);

 if (FUNC_6(VAR_8)) {
  FUNC_1(VAR_8, VAR_3, VAR_8->ndev, "reset FAILED!\n");
  FUNC_7(VAR_2, &VAR_8->flags);
  return VAR_0;
 }

 return VAR_1;
}
