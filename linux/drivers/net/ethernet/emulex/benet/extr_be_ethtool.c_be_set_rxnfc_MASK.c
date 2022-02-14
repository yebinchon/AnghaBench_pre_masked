
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;

 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,struct ethtool_rxnfc*) ;
 int FUNC_2 (int *,char*) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 if (!FUNC_0(VAR_3)) {
  FUNC_2(&VAR_3->pdev->dev,
   "ethtool::set_rxnfc: RX flow hashing is disabled\n");
  return -VAR_0;
 }

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
