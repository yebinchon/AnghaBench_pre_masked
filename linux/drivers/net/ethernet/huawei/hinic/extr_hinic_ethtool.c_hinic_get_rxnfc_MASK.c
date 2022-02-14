
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct hinic_dev {int num_qps; } ;
struct ethtool_rxnfc {int cmd; int data; } ;


 int VAR_0 ;


 int FUNC_0 (struct hinic_dev*,struct ethtool_rxnfc*) ;
 struct hinic_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      struct ethtool_rxnfc *VAR_2, u32 *VAR_3)
{
 struct hinic_dev *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->num_qps;
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
