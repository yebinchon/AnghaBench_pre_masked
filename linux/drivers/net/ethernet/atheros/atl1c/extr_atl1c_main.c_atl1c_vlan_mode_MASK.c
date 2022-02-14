
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct atl1c_adapter {int hw; struct pci_dev* pdev; } ;
typedef int netdev_features_t ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct atl1c_adapter*) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (int *,char*) ;
 struct atl1c_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct atl1c_adapter*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1,
 netdev_features_t VAR_2)
{
 struct atl1c_adapter *VAR_3 = FUNC_6(VAR_1);
 struct pci_dev *VAR_4 = VAR_3->pdev;
 u32 VAR_5 = 0;

 if (FUNC_7(VAR_3))
  FUNC_5(&VAR_4->dev, "atl1c_vlan_mode\n");

 FUNC_3(VAR_3);
 FUNC_0(&VAR_3->hw, VAR_0, &VAR_5);
 FUNC_2(VAR_2, &VAR_5);
 FUNC_1(&VAR_3->hw, VAR_0, VAR_5);
 FUNC_4(VAR_3);
}
