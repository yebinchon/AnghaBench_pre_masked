
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov772x_priv {scalar_t__ pwdn_gpio; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ov772x_priv *VAR_0)
{
 FUNC_0(VAR_0->clk);

 if (VAR_0->pwdn_gpio) {
  FUNC_1(VAR_0->pwdn_gpio, 0);
  FUNC_2(500, 1000);
 }

 return 0;
}
