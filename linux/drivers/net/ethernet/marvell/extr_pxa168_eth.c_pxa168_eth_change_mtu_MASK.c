
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int dummy; } ;
struct net_device {int mtu; int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct pxa168_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pxa168_eth_private*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, int VAR_1)
{
 int VAR_2;
 struct pxa168_eth_private *VAR_3 = FUNC_1(VAR_0);

 VAR_0->mtu = VAR_1;
 VAR_2 = FUNC_5(VAR_3);

 if (!FUNC_2(VAR_0))
  return 0;







 FUNC_4(VAR_0);
 if (FUNC_3(VAR_0)) {
  FUNC_0(&VAR_0->dev,
   "fatal error on re-opening device after MTU change\n");
 }

 return 0;
}
