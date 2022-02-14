
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tsoen; } ;
struct stmmac_priv {int tso; TYPE_1__ dma_cap; TYPE_2__* plat; } ;
struct net_device {scalar_t__ mtu; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {scalar_t__ rx_coe; scalar_t__ tso_en; scalar_t__ bugged_jumbo; int tx_coe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_5,
          netdev_features_t VAR_6)
{
 struct stmmac_priv *VAR_7 = FUNC_0(VAR_5);

 if (VAR_7->plat->rx_coe == VAR_4)
  VAR_6 &= ~VAR_2;

 if (!VAR_7->plat->tx_coe)
  VAR_6 &= ~VAR_1;






 if (VAR_7->plat->bugged_jumbo && (VAR_5->mtu > VAR_0))
  VAR_6 &= ~VAR_1;


 if ((VAR_7->plat->tso_en) && (VAR_7->dma_cap.tsoen)) {
  if (VAR_6 & VAR_3)
   VAR_7->tso = 1;
  else
   VAR_7->tso = 0;
 }

 return VAR_6;
}
