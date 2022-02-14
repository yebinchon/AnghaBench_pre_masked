
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qede_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;





 int VAR_1 ;
 int FUNC_1 (struct qede_dev*) ;
 struct qede_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qede_dev*) ;
 int FUNC_4 (struct qede_dev*,struct ethtool_rxnfc*,int *) ;
 int FUNC_5 (struct qede_dev*,struct ethtool_rxnfc*) ;
 int FUNC_6 (struct qede_dev*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3,
     u32 *VAR_4)
{
 struct qede_dev *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = 0;

 switch (VAR_3->cmd) {
 case 128:
  VAR_3->data = FUNC_1(VAR_5);
  break;
 case 129:
  VAR_6 = FUNC_6(VAR_5, VAR_3);
  break;
 case 131:
  VAR_3->rule_cnt = FUNC_3(VAR_5);
  VAR_3->data = VAR_1;
  break;
 case 130:
  VAR_6 = FUNC_5(VAR_5, VAR_3);
  break;
 case 132:
  VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_4);
  break;
 default:
  FUNC_0(VAR_5, "Command parameters not supported\n");
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
