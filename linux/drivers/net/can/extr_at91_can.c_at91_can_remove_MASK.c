
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct at91_priv {int clk; int reg_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct at91_priv* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);
 struct at91_priv *VAR_3 = FUNC_3(VAR_2);
 struct resource *VAR_4;

 FUNC_8(VAR_2);

 FUNC_2(VAR_3->reg_base);

 VAR_4 = FUNC_5(VAR_1, VAR_0, 0);
 FUNC_6(VAR_4->start, FUNC_7(VAR_4));

 FUNC_0(VAR_3->clk);

 FUNC_1(VAR_2);

 return 0;
}
