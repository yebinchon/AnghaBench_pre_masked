
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {TYPE_1__* plat; } ;
struct TYPE_2__ {scalar_t__ clk_ptp_ref; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct stmmac_priv*) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0)
{
 if (VAR_0->plat->clk_ptp_ref)
  FUNC_0(VAR_0->plat->clk_ptp_ref);
 FUNC_1(VAR_0);
}
