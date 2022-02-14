
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cedrus_dev {int dev; int ahb_clk; int mod_clk; int ram_clk; int rstc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct cedrus_dev *VAR_0)
{
 FUNC_2(VAR_0->rstc);

 FUNC_0(VAR_0->ram_clk);
 FUNC_0(VAR_0->mod_clk);
 FUNC_0(VAR_0->ahb_clk);

 FUNC_3(VAR_0->dev);

 FUNC_1(VAR_0->dev);
}
