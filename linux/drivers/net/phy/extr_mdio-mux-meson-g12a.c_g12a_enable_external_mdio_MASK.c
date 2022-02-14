
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g12a_mdio_mux {int pll_is_enabled; int pll; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct g12a_mdio_mux *VAR_1)
{

 FUNC_1(0x0, VAR_1->regs + VAR_0);


 if (VAR_1->pll_is_enabled) {
  FUNC_0(VAR_1->pll);
  VAR_1->pll_is_enabled = 0;
 }

 return 0;
}
