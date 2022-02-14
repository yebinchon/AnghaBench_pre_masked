
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv643xx_eth_private {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, netdev_features_t VAR_3)
{
 struct mv643xx_eth_private *VAR_4 = FUNC_0(VAR_2);
 bool VAR_5 = VAR_3 & VAR_0;

 FUNC_1(VAR_4, VAR_1, VAR_5 ? 0x02000000 : 0x00000000);

 return 0;
}
