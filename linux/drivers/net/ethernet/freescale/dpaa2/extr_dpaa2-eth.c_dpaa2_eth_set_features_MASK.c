
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct dpaa2_eth_priv {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dpaa2_eth_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dpaa2_eth_priv*,int) ;
 int FUNC_2 (struct dpaa2_eth_priv*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
      netdev_features_t VAR_4)
{
 struct dpaa2_eth_priv *VAR_5 = FUNC_0(VAR_3);
 netdev_features_t VAR_6 = VAR_4 ^ VAR_3->features;
 bool VAR_7;
 int VAR_8;

 if (VAR_6 & VAR_2) {
  VAR_7 = !!(VAR_4 & VAR_2);
  VAR_8 = FUNC_1(VAR_5, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_6 & (VAR_1 | VAR_0)) {
  VAR_7 = !!(VAR_4 & (VAR_1 | VAR_0));
  VAR_8 = FUNC_2(VAR_5, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
