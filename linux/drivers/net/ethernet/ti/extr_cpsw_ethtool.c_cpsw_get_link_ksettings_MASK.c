
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {TYPE_1__* slaves; } ;
struct TYPE_2__ {int phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_common*,struct cpsw_priv*) ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ethtool_link_ksettings*) ;

int FUNC_3(struct net_device *VAR_1,
       struct ethtool_link_ksettings *VAR_2)
{
 struct cpsw_priv *VAR_3 = FUNC_1(VAR_1);
 struct cpsw_common *VAR_4 = VAR_3->cpsw;
 int VAR_5 = FUNC_0(VAR_4, VAR_3);

 if (!VAR_4->slaves[VAR_5].phy)
  return -VAR_0;

 FUNC_2(VAR_4->slaves[VAR_5].phy, VAR_2);
 return 0;
}
