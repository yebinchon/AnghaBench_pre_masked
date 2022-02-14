
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; } ;
struct ena_adapter {int ena_dev; int num_queues; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (int ,struct ethtool_rxnfc*) ;
 struct ena_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ena_adapter*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3,
    u32 *VAR_4)
{
 struct ena_adapter *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = 0;

 switch (VAR_3->cmd) {
 case 128:
  VAR_3->data = VAR_5->num_queues;
  VAR_6 = 0;
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_5->ena_dev, VAR_3);
  break;
 case 131:
 case 130:
 case 132:
 default:
  FUNC_2(VAR_5, VAR_1, VAR_2,
     "Command parameter %d is not supported\n", VAR_3->cmd);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
