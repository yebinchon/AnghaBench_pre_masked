
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {int phylink; int lock; TYPE_2__* hw; int ioaddr; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct TYPE_4__ {int pcs; int ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ethtool_link_ksettings const*) ;
 int FUNC_4 (struct stmmac_priv*,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_12,
      const struct ethtool_link_ksettings *VAR_13)
{
 struct stmmac_priv *VAR_14 = FUNC_2(VAR_12);

 if (VAR_14->hw->pcs & VAR_10 ||
     VAR_14->hw->pcs & VAR_11) {
  u32 VAR_15 = VAR_6 | VAR_7;


  if (VAR_13->base.autoneg != VAR_8)
   return -VAR_9;

  VAR_15 &= (VAR_1 |
   VAR_0 |
   VAR_3 |
   VAR_2 |
   VAR_5 |
   VAR_4);

  FUNC_0(&VAR_14->lock);
  FUNC_4(VAR_14, VAR_14->ioaddr, 1, VAR_14->hw->ps, 0);
  FUNC_1(&VAR_14->lock);

  return 0;
 }

 return FUNC_3(VAR_14->phylink, VAR_13);
}
