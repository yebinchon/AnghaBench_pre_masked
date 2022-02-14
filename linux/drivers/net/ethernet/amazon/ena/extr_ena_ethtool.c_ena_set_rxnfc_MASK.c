
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;
struct ena_adapter {int ena_dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,struct ethtool_rxnfc*) ;
 struct ena_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ena_adapter*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3)
{
 struct ena_adapter *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 switch (VAR_3->cmd) {
 case 128:
  VAR_5 = FUNC_0(VAR_4->ena_dev, VAR_3);
  break;
 case 130:
 case 129:
 default:
  FUNC_2(VAR_4, VAR_1, VAR_2,
     "Command parameter %d is not supported\n", VAR_3->cmd);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
