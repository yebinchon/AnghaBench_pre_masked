
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;


 int VAR_0 ;



 struct niu* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct niu*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct niu*,int ) ;
 int FUNC_3 (struct niu*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct niu *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  break;
 case 130:
  VAR_4 = FUNC_2(VAR_3, VAR_2->fs.location);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
