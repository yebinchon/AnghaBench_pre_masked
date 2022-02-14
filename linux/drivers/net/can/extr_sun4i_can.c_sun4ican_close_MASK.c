
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4ican_priv {int clk; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct sun4ican_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct sun4ican_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 FUNC_1(VAR_2->clk);

 FUNC_3(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1, VAR_0);

 return 0;
}
