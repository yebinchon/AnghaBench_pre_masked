
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct g12a_mdio_mux {int pclk; int pll; scalar_t__ pll_is_enabled; int mux_handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct g12a_mdio_mux* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct g12a_mdio_mux *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->mux_handle);

 if (VAR_1->pll_is_enabled)
  FUNC_0(VAR_1->pll);

 FUNC_0(VAR_1->pclk);

 return 0;
}
