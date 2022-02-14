
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qede_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;



 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qede_dev*,struct ethtool_rxnfc*) ;
 int FUNC_3 (struct qede_dev*,int ) ;
 int FUNC_4 (struct qede_dev*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_4(VAR_3, VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_3, VAR_2);
  break;
 case 130:
  VAR_4 = FUNC_3(VAR_3, VAR_2->fs.location);
  break;
 default:
  FUNC_0(VAR_3, "Command parameters not supported\n");
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
