
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {int clk_csr; scalar_t__ ioaddr; TYPE_2__* hw; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct TYPE_3__ {unsigned int addr; unsigned int data; int clk_csr_shift; int clk_csr_mask; } ;
struct TYPE_4__ {TYPE_1__ mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (struct stmmac_priv*,int,int,int*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_6, int VAR_7, int VAR_8)
{
 struct net_device *VAR_9 = VAR_6->priv;
 struct stmmac_priv *VAR_10 = FUNC_1(VAR_9);
 unsigned int VAR_11 = VAR_10->hw->mii.addr;
 unsigned int VAR_12 = VAR_10->hw->mii.data;
 u32 VAR_13, VAR_14, VAR_15 = VAR_3;
 int VAR_16;

 if (VAR_8 & VAR_2) {
  return -VAR_1;
 } else {
  VAR_16 = FUNC_4(VAR_10, VAR_7, VAR_8, &VAR_14);
  if (VAR_16)
   return VAR_16;
 }

 VAR_15 |= (VAR_10->clk_csr << VAR_10->hw->mii.clk_csr_shift)
  & VAR_10->hw->mii.clk_csr_mask;
 VAR_15 |= VAR_5 | VAR_4;


 if (FUNC_3(VAR_10->ioaddr + VAR_12, VAR_13,
          !(VAR_13 & VAR_3), 100, 10000))
  return -VAR_0;


 FUNC_5(VAR_14, VAR_10->ioaddr + VAR_11);
 FUNC_5(VAR_15, VAR_10->ioaddr + VAR_12);


 if (FUNC_3(VAR_10->ioaddr + VAR_12, VAR_13,
          !(VAR_13 & VAR_3), 100, 10000))
  return -VAR_0;


 return FUNC_2(VAR_10->ioaddr + VAR_12) & FUNC_0(15, 0);
}
