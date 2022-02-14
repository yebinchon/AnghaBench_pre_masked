
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int idc_aen_work; struct net_device* netdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 struct qlcnic_adapter* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_8 (struct qlcnic_adapter*,int ) ;
 int FUNC_9 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = FUNC_3(VAR_1);
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4;

 FUNC_1(VAR_3);
 FUNC_6(VAR_2);

 if (FUNC_2(VAR_3))
  FUNC_7(VAR_2, VAR_3);

 FUNC_9(VAR_2, VAR_0);
 FUNC_8(VAR_2, 0);
 FUNC_5(VAR_2);
 FUNC_0(&VAR_2->idc_aen_work);

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  return VAR_4;

 return 0;
}
