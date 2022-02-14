
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct mv643xx_eth_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mv643xx_eth_private*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct mv643xx_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct mv643xx_eth_private*,int,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0, int VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_4(VAR_0);

 VAR_0->mtu = VAR_1;
 FUNC_1(VAR_2);
 FUNC_6(VAR_2, 1000000000, 16777216);

 if (!FUNC_5(VAR_0))
  return 0;







 FUNC_2(VAR_0);
 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0,
      "fatal error on re-opening device after MTU change\n");
 }

 return 0;
}
