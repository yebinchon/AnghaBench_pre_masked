
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct bcmgenet_priv {int clk; scalar_t__ internal_phy; int irq1; int irq0; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct bcmgenet_priv*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct bcmgenet_priv*) ;
 int VAR_1 ;
 struct bcmgenet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct bcmgenet_priv*,int ,struct net_device*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct bcmgenet_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = 0;

 FUNC_5(VAR_3, VAR_1, VAR_2, "bcmgenet_close\n");

 FUNC_0(VAR_2);


 FUNC_6(VAR_2->phydev);

 FUNC_3(VAR_3->irq0, VAR_3);
 FUNC_3(VAR_3->irq1, VAR_3);

 if (VAR_3->internal_phy)
  VAR_4 = FUNC_1(VAR_3, VAR_0);

 FUNC_2(VAR_3->clk);

 return VAR_4;
}
