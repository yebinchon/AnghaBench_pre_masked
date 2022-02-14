
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw9910_priv {int pdn_gpio; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct tw9910_priv *VAR_0)
{
 FUNC_0(VAR_0->clk);
 FUNC_1(VAR_0->pdn_gpio, 1);

 return 0;
}
