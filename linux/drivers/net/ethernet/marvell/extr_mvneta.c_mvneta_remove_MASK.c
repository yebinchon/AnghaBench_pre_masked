
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int irq; } ;
struct mvneta_port {int id; scalar_t__ bm_priv; int pool_short; int pool_long; int phylink; int stats; int ports; int clk; int clk_bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 struct mvneta_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_7(VAR_0);
 struct mvneta_port *VAR_2 = FUNC_5(VAR_1);

 FUNC_8(VAR_1);
 FUNC_0(VAR_2->clk_bus);
 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->ports);
 FUNC_1(VAR_2->stats);
 FUNC_2(VAR_1->irq);
 FUNC_6(VAR_2->phylink);

 if (VAR_2->bm_priv) {
  FUNC_3(VAR_2->bm_priv, VAR_2->pool_long, 1 << VAR_2->id);
  FUNC_3(VAR_2->bm_priv, VAR_2->pool_short,
           1 << VAR_2->id);
  FUNC_4(VAR_2->bm_priv);
 }

 return 0;
}
