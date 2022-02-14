
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int idc_aen_work; struct net_device* netdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct qlcnic_adapter* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_0)
{
 struct qlcnic_adapter *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = VAR_1->netdev;
 int VAR_3;

 FUNC_1(VAR_2);
 FUNC_6(VAR_1);

 if (FUNC_2(VAR_2))
  FUNC_7(VAR_1, VAR_2);

 FUNC_5(VAR_1);
 FUNC_0(&VAR_1->idc_aen_work);

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3)
  return VAR_3;

 return 0;
}
