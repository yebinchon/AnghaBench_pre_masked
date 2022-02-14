
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {TYPE_1__* plat; } ;
struct TYPE_2__ {unsigned long clk_ref_rate; int stmmac_clk; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_0, struct stmmac_priv *VAR_1)
{
 unsigned long VAR_2 = FUNC_0(VAR_1->plat->stmmac_clk);

 if (!VAR_2) {
  VAR_2 = VAR_1->plat->clk_ref_rate;
  if (!VAR_2)
   return 0;
 }

 return (VAR_0 * 256) / (VAR_2 / 1000000);
}
