
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {int irq_wake; int speed; int lock; TYPE_1__* plat; int device; int ioaddr; int phylink; int wolopts; int hw; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ stmmac_clk; scalar_t__ pclk; scalar_t__ clk_ptp_ref; } ;


 int VAR_0 ;
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
 int FUNC_14 (struct stmmac_priv*,int ,int) ;
 int FUNC_15 (struct stmmac_priv*,int ,int ) ;
 int FUNC_16 (struct stmmac_priv*) ;
 int FUNC_17 (struct stmmac_priv*) ;

int FUNC_18(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_1(VAR_1);
 struct stmmac_priv *VAR_3 = FUNC_5(VAR_2);

 if (!VAR_2 || !FUNC_7(VAR_2))
  return 0;

 FUNC_8(VAR_3->phylink, 0);

 FUNC_3(&VAR_3->lock);

 FUNC_6(VAR_2);
 FUNC_17(VAR_3);

 FUNC_13(VAR_3);


 FUNC_16(VAR_3);


 if (FUNC_2(VAR_3->device)) {
  FUNC_15(VAR_3, VAR_3->hw, VAR_3->wolopts);
  VAR_3->irq_wake = 1;
 } else {
  FUNC_4(&VAR_3->lock);
  FUNC_11();
  FUNC_9(VAR_3->phylink);
  FUNC_12();
  FUNC_3(&VAR_3->lock);

  FUNC_14(VAR_3, VAR_3->ioaddr, 0);
  FUNC_10(VAR_3->device);

  if (VAR_3->plat->clk_ptp_ref)
   FUNC_0(VAR_3->plat->clk_ptp_ref);
  FUNC_0(VAR_3->plat->pclk);
  FUNC_0(VAR_3->plat->stmmac_clk);
 }
 FUNC_4(&VAR_3->lock);

 VAR_3->speed = VAR_0;
 return 0;
}
