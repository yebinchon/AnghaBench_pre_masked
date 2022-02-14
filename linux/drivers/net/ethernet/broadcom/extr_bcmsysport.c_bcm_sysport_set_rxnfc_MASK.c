
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;
struct bcm_sysport_priv {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct bcm_sysport_priv*,int ) ;
 int FUNC_1 (struct bcm_sysport_priv*,struct ethtool_rxnfc*) ;
 struct bcm_sysport_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
     struct ethtool_rxnfc *VAR_2)
{
 struct bcm_sysport_priv *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_3, VAR_2->fs.location);
  break;
 default:
  break;
 }

 return VAR_4;
}
