
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int phylink; } ;
struct net_device {int dummy; } ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct stmmac_priv *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->phylink);
}
