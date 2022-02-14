
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {int wolopts; int device; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct xgmac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
          struct ethtool_wolinfo *VAR_3)
{
 struct xgmac_priv *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_4->device)) {
  VAR_3->supported = VAR_0 | VAR_1;
  VAR_3->wolopts = VAR_4->wolopts;
 }
}
