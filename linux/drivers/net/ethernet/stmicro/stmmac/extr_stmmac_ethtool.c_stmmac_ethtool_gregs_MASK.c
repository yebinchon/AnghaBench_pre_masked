
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {TYPE_1__* plat; int ioaddr; int hw; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int dummy; } ;
struct TYPE_2__ {int has_xgmac; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct stmmac_priv*,int ,int *) ;
 int FUNC_3 (struct stmmac_priv*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
     struct ethtool_regs *VAR_4, void *VAR_5)
{
 struct stmmac_priv *VAR_6 = FUNC_1(VAR_3);
 u32 *VAR_7 = (u32 *) VAR_5;

 FUNC_3(VAR_6, VAR_6->hw, VAR_7);
 FUNC_2(VAR_6, VAR_6->ioaddr, VAR_7);

 if (!VAR_6->plat->has_xgmac) {

  FUNC_0(&VAR_7[VAR_1],
         &VAR_7[VAR_0 / 4],
         VAR_2 * 4);
 }
}
