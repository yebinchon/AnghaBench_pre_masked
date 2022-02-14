
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {scalar_t__ wolopts; scalar_t__ supported; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {TYPE_1__* slaves; } ;
struct TYPE_2__ {scalar_t__ phy; } ;


 int FUNC_0 (struct cpsw_common*,struct cpsw_priv*) ;
 struct cpsw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,struct ethtool_wolinfo*) ;

void FUNC_3(struct net_device *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 struct cpsw_priv *VAR_2 = FUNC_1(VAR_0);
 struct cpsw_common *VAR_3 = VAR_2->cpsw;
 int VAR_4 = FUNC_0(VAR_3, VAR_2);

 VAR_1->supported = 0;
 VAR_1->wolopts = 0;

 if (VAR_3->slaves[VAR_4].phy)
  FUNC_2(VAR_3->slaves[VAR_4].phy, VAR_1);
}
