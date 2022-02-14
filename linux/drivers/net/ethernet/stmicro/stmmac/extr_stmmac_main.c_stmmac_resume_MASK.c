
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {int phylink; int device; int lock; scalar_t__ mii; TYPE_1__* plat; scalar_t__ irq_wake; int hw; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ clk_ptp_ref; scalar_t__ pclk; scalar_t__ stmmac_clk; } ;


 int FUNC_0 (scalar_t__) ;
 struct net_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct stmmac_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct stmmac_priv*) ;
 int FUNC_14 (struct stmmac_priv*) ;
 int FUNC_15 (struct net_device*,int) ;
 int FUNC_16 (struct stmmac_priv*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct stmmac_priv*,int ,int ) ;
 int FUNC_19 (struct stmmac_priv*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct stmmac_priv*) ;

int FUNC_22(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);
 struct stmmac_priv *VAR_2 = FUNC_5(VAR_1);

 if (!FUNC_7(VAR_1))
  return 0;







 if (FUNC_2(VAR_2->device)) {
  FUNC_3(&VAR_2->lock);
  FUNC_18(VAR_2, VAR_2->hw, 0);
  FUNC_4(&VAR_2->lock);
  VAR_2->irq_wake = 0;
 } else {
  FUNC_10(VAR_2->device);

  FUNC_0(VAR_2->plat->stmmac_clk);
  FUNC_0(VAR_2->plat->pclk);
  if (VAR_2->plat->clk_ptp_ref)
   FUNC_0(VAR_2->plat->clk_ptp_ref);

  if (VAR_2->mii)
   FUNC_17(VAR_2->mii);
 }

 FUNC_6(VAR_1);

 FUNC_3(&VAR_2->lock);

 FUNC_19(VAR_2);

 FUNC_13(VAR_2);

 FUNC_15(VAR_1, 0);
 FUNC_16(VAR_2);
 FUNC_20(VAR_1);

 FUNC_14(VAR_2);

 FUNC_21(VAR_2);

 FUNC_4(&VAR_2->lock);

 if (!FUNC_2(VAR_2->device)) {
  FUNC_11();
  FUNC_9(VAR_2->phylink);
  FUNC_12();
 }

 FUNC_8(VAR_2->phylink, 1);

 return 0;
}
