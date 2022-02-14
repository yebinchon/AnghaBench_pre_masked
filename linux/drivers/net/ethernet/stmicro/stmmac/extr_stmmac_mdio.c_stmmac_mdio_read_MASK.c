
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {int clk_csr; scalar_t__ ioaddr; TYPE_3__* hw; TYPE_1__* plat; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct TYPE_5__ {unsigned int addr; unsigned int data; int addr_shift; int addr_mask; int reg_shift; int reg_mask; int clk_csr_shift; int clk_csr_mask; } ;
struct TYPE_6__ {TYPE_2__ mii; } ;
struct TYPE_4__ {scalar_t__ has_gmac4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_9, int VAR_10, int VAR_11)
{
 struct net_device *VAR_12 = VAR_9->priv;
 struct stmmac_priv *VAR_13 = FUNC_0(VAR_12);
 unsigned int VAR_14 = VAR_13->hw->mii.addr;
 unsigned int VAR_15 = VAR_13->hw->mii.data;
 u32 VAR_16 = VAR_2;
 int VAR_17 = 0;
 u32 VAR_18;

 VAR_16 |= (VAR_10 << VAR_13->hw->mii.addr_shift)
  & VAR_13->hw->mii.addr_mask;
 VAR_16 |= (VAR_11 << VAR_13->hw->mii.reg_shift) & VAR_13->hw->mii.reg_mask;
 VAR_16 |= (VAR_13->clk_csr << VAR_13->hw->mii.clk_csr_shift)
  & VAR_13->hw->mii.clk_csr_mask;
 if (VAR_13->plat->has_gmac4) {
  VAR_16 |= VAR_6;
  if (VAR_11 & VAR_1) {
   VAR_16 |= VAR_5;
   VAR_16 &= ~VAR_13->hw->mii.reg_mask;
   VAR_16 |= ((VAR_11 >> VAR_4) <<
          VAR_13->hw->mii.reg_shift) &
          VAR_13->hw->mii.reg_mask;

   VAR_17 |= (VAR_11 & VAR_8) <<
    VAR_7;
  }
 }

 if (FUNC_2(VAR_13->ioaddr + VAR_14, VAR_18, !(VAR_18 & VAR_2),
          100, 10000))
  return -VAR_0;

 FUNC_3(VAR_17, VAR_13->ioaddr + VAR_15);
 FUNC_3(VAR_16, VAR_13->ioaddr + VAR_14);

 if (FUNC_2(VAR_13->ioaddr + VAR_14, VAR_18, !(VAR_18 & VAR_2),
          100, 10000))
  return -VAR_0;


 VAR_17 = (int)FUNC_1(VAR_13->ioaddr + VAR_15) & VAR_3;

 return VAR_17;
}
