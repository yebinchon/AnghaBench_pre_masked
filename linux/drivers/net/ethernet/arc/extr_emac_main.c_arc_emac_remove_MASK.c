
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct arc_emac_priv {int clk; int napi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct arc_emac_priv*) ;
 int FUNC_2 (int ) ;
 struct arc_emac_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_0)
{
 struct arc_emac_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(VAR_0->phydev);
 FUNC_1(VAR_1);
 FUNC_6(VAR_0);
 FUNC_4(&VAR_1->napi);

 if (!FUNC_0(VAR_1->clk))
  FUNC_2(VAR_1->clk);

 return 0;
}
