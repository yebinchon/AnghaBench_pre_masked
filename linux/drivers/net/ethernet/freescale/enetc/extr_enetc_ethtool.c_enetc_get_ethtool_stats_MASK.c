
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct enetc_ndev_priv {int num_tx_rings; int num_rx_rings; TYPE_5__* si; TYPE_4__** rx_ring; TYPE_2__** tx_ring; } ;
struct enetc_hw {int dummy; } ;
struct TYPE_14__ {int reg; } ;
struct TYPE_13__ {struct enetc_hw hw; } ;
struct TYPE_11__ {int rx_alloc_errs; int packets; } ;
struct TYPE_12__ {TYPE_3__ stats; } ;
struct TYPE_9__ {int packets; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;


 int FUNC_0 (TYPE_6__*) ;
 TYPE_6__* VAR_0 ;
 int FUNC_1 (struct enetc_hw*,int ) ;
 int FUNC_2 (struct enetc_hw*,int ) ;
 TYPE_6__* VAR_1 ;
 int FUNC_3 (TYPE_5__*) ;
 struct enetc_ndev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
        struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct enetc_ndev_priv *VAR_5 = FUNC_4(VAR_2);
 struct enetc_hw *VAR_6 = &VAR_5->si->hw;
 int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  VAR_4[VAR_8++] = FUNC_2(VAR_6, VAR_1[VAR_7].reg);

 for (VAR_7 = 0; VAR_7 < VAR_5->num_tx_rings; VAR_7++)
  VAR_4[VAR_8++] = VAR_5->tx_ring[VAR_7]->stats.packets;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_rx_rings; VAR_7++) {
  VAR_4[VAR_8++] = VAR_5->rx_ring[VAR_7]->stats.packets;
  VAR_4[VAR_8++] = VAR_5->rx_ring[VAR_7]->stats.rx_alloc_errs;
 }

 if (!FUNC_3(VAR_5->si))
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++)
  VAR_4[VAR_8++] = FUNC_1(VAR_6, VAR_0[VAR_7].reg);
}
