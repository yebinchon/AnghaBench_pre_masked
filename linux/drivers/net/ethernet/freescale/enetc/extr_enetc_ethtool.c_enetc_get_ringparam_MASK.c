
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct enetc_ndev_priv {scalar_t__ rx_bd_count; scalar_t__ tx_bd_count; TYPE_1__* si; } ;
struct enetc_hw {int dummy; } ;
struct TYPE_2__ {struct enetc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct enetc_hw*,int ,int ) ;
 scalar_t__ FUNC_1 (struct enetc_hw*,int ,int ) ;
 struct enetc_ndev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct enetc_ndev_priv*,struct enetc_hw*,struct net_device*,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
    struct ethtool_ringparam *VAR_3)
{
 struct enetc_ndev_priv *VAR_4 = FUNC_2(VAR_2);

 VAR_3->rx_pending = VAR_4->rx_bd_count;
 VAR_3->tx_pending = VAR_4->tx_bd_count;


 if (FUNC_4(VAR_2)) {
  struct enetc_hw *VAR_5 = &VAR_4->si->hw;
  u32 VAR_6 = FUNC_0(VAR_5, 0, VAR_0);

  if (VAR_6 != VAR_4->rx_bd_count)
   FUNC_3(VAR_4, VAR_5, VAR_2, "RxBDR[RBLENR] = %d!\n", VAR_6);

  VAR_6 = FUNC_1(VAR_5, 0, VAR_1);

  if (VAR_6 != VAR_4->tx_bd_count)
   FUNC_3(VAR_4, VAR_5, VAR_2, "TxBDR[TBLENR] = %d!\n", VAR_6);
 }
}
