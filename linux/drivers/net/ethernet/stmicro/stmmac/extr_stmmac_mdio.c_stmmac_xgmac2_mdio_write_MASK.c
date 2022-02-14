
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct stmmac_priv {int clk_csr; scalar_t__ ioaddr; TYPE_2__* hw; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct TYPE_3__ {unsigned int addr; unsigned int data; int clk_csr_shift; int clk_csr_mask; } ;
struct TYPE_4__ {TYPE_1__ mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (struct stmmac_priv*,int,int,int*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_6, int VAR_7,
        int VAR_8, u16 VAR_9)
{
 struct net_device *VAR_10 = VAR_6->priv;
 struct stmmac_priv *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12 = VAR_11->hw->mii.addr;
 unsigned int VAR_13 = VAR_11->hw->mii.data;
 u32 VAR_14, VAR_15, VAR_16 = VAR_3;
 int VAR_17;

 if (VAR_8 & VAR_2) {
  return -VAR_1;
 } else {
  VAR_17 = FUNC_2(VAR_11, VAR_7, VAR_8, &VAR_14);
  if (VAR_17)
   return VAR_17;
 }

 VAR_16 |= (VAR_11->clk_csr << VAR_11->hw->mii.clk_csr_shift)
  & VAR_11->hw->mii.clk_csr_mask;
 VAR_16 |= VAR_9 | VAR_4;
 VAR_16 |= VAR_5;


 if (FUNC_1(VAR_11->ioaddr + VAR_13, VAR_15,
          !(VAR_15 & VAR_3), 100, 10000))
  return -VAR_0;


 FUNC_3(VAR_14, VAR_11->ioaddr + VAR_12);
 FUNC_3(VAR_16, VAR_11->ioaddr + VAR_13);


 return FUNC_1(VAR_11->ioaddr + VAR_13, VAR_15,
      !(VAR_15 & VAR_3), 100, 10000);
}
