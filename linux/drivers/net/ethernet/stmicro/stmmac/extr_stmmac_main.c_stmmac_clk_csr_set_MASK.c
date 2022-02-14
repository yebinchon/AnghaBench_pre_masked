
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {int clk_csr; TYPE_1__* plat; } ;
struct TYPE_2__ {scalar_t__ has_xgmac; scalar_t__ has_sun8i; int stmmac_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_0(VAR_13->plat->stmmac_clk);
 if (!(VAR_13->clk_csr & VAR_6)) {
  if (VAR_14 < VAR_4)
   VAR_13->clk_csr = VAR_9;
  else if ((VAR_14 >= VAR_4) && (VAR_14 < VAR_5))
   VAR_13->clk_csr = VAR_11;
  else if ((VAR_14 >= VAR_5) && (VAR_14 < VAR_0))
   VAR_13->clk_csr = VAR_12;
  else if ((VAR_14 >= VAR_0) && (VAR_14 < VAR_1))
   VAR_13->clk_csr = VAR_7;
  else if ((VAR_14 >= VAR_1) && (VAR_14 < VAR_2))
   VAR_13->clk_csr = VAR_8;
  else if ((VAR_14 >= VAR_2) && (VAR_14 < VAR_3))
   VAR_13->clk_csr = VAR_10;
 }

 if (VAR_13->plat->has_sun8i) {
  if (VAR_14 > 160000000)
   VAR_13->clk_csr = 0x03;
  else if (VAR_14 > 80000000)
   VAR_13->clk_csr = 0x02;
  else if (VAR_14 > 40000000)
   VAR_13->clk_csr = 0x01;
  else
   VAR_13->clk_csr = 0;
 }

 if (VAR_13->plat->has_xgmac) {
  if (VAR_14 > 400000000)
   VAR_13->clk_csr = 0x5;
  else if (VAR_14 > 350000000)
   VAR_13->clk_csr = 0x4;
  else if (VAR_14 > 300000000)
   VAR_13->clk_csr = 0x3;
  else if (VAR_14 > 250000000)
   VAR_13->clk_csr = 0x2;
  else if (VAR_14 > 150000000)
   VAR_13->clk_csr = 0x1;
  else
   VAR_13->clk_csr = 0x0;
 }
}
