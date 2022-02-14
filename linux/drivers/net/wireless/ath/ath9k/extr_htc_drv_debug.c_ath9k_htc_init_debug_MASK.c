
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct TYPE_6__ {int debugfs_phy; int rx_stats; } ;
struct ath9k_htc_priv {int ah; TYPE_3__ debug; int spec_priv; TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int debugfsdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int,int ,struct ath9k_htc_priv*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_8(struct ath_hw *VAR_10)
{
 struct ath_common *VAR_11 = FUNC_5(VAR_10);
 struct ath9k_htc_priv *VAR_12 = (struct ath9k_htc_priv *) VAR_11->priv;

 VAR_12->debug.debugfs_phy = FUNC_6(VAR_1,
          VAR_12->hw->wiphy->debugfsdir);
 if (!VAR_12->debug.debugfs_phy)
  return -VAR_0;

 FUNC_4(&VAR_12->spec_priv, VAR_12->debug.debugfs_phy);

 FUNC_7("tgt_int_stats", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_6);
 FUNC_7("tgt_tx_stats", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_8);
 FUNC_7("tgt_rx_stats", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_7);
 FUNC_7("xmit", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_9);
 FUNC_7("skb_rx", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_4);

 FUNC_3(VAR_12->debug.debugfs_phy, &VAR_12->debug.rx_stats);
 FUNC_2(VAR_12->debug.debugfs_phy, &VAR_12->debug.rx_stats);

 FUNC_7("slot", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_5);
 FUNC_7("queue", 0400, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_3);
 FUNC_7("debug", 0600, VAR_12->debug.debugfs_phy,
       VAR_12, &VAR_2);

 FUNC_0(VAR_12->debug.debugfs_phy, VAR_12->ah);
 FUNC_1(VAR_12->debug.debugfs_phy, VAR_12->ah);

 return 0;
}
