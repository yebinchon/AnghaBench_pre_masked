
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dphy {int mod_clk; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct sun6i_dphy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct sun6i_dphy *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->reset);
 FUNC_0(VAR_1->mod_clk);
 FUNC_1(VAR_1->mod_clk, 150000000);

 return 0;
}
