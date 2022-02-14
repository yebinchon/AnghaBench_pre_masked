
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int lock; int wolopts; int device; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stmmac_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct stmmac_priv *VAR_4 = FUNC_3(VAR_2);

 FUNC_1(&VAR_4->lock);
 if (FUNC_0(VAR_4->device)) {
  VAR_3->supported = VAR_0 | VAR_1;
  VAR_3->wolopts = VAR_4->wolopts;
 }
 FUNC_2(&VAR_4->lock);
}
