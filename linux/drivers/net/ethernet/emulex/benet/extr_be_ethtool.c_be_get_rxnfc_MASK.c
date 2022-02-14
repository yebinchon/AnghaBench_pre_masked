
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int flow_type; } ;
struct be_adapter {int num_rx_qs; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,char*) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
   u32 *VAR_3)
{
 struct be_adapter *VAR_4 = FUNC_3(VAR_1);

 if (!FUNC_1(VAR_4)) {
  FUNC_2(&VAR_4->pdev->dev,
    "ethtool::get_rxnfc: RX flow hashing is disabled\n");
  return -VAR_0;
 }

 switch (VAR_2->cmd) {
 case 129:
  VAR_2->data = FUNC_0(VAR_4, VAR_2->flow_type);
  break;
 case 128:
  VAR_2->data = VAR_4->num_rx_qs;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
