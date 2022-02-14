
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9t112_priv {scalar_t__ standby_gpio; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mt9t112_priv *VAR_0)
{
 FUNC_0(VAR_0->clk);
 if (VAR_0->standby_gpio) {
  FUNC_1(VAR_0->standby_gpio, 1);
  FUNC_2(100);
 }

 return 0;
}
