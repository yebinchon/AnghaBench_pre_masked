
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5300_priv {int link_irq; int link_gpio; int irq; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct w5300_priv* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct w5300_priv*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct w5300_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_6(VAR_2);
 FUNC_0(VAR_2->irq, VAR_1);
 if (FUNC_2(VAR_2->link_gpio))
  FUNC_0(VAR_2->link_irq, VAR_1);

 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 return 0;
}
