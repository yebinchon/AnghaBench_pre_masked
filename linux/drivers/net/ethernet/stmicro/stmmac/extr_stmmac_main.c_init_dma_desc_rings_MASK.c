
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dummy; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct stmmac_priv*) ;
 int FUNC_4 (struct stmmac_priv*) ;
 int FUNC_5 (struct stmmac_priv*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, gfp_t VAR_1)
{
 struct stmmac_priv *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 FUNC_4(VAR_2);

 if (FUNC_3(VAR_2))
  FUNC_5(VAR_2);

 return VAR_3;
}
