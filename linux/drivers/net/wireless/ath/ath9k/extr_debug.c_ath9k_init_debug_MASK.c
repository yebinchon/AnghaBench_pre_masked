
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int rxstats; } ;
struct TYPE_14__ {int debugfs_phy; TYPE_3__ stats; } ;
struct ath_softc {TYPE_6__ debug; TYPE_7__* sc_ah; int dev; int spec_priv; TYPE_2__* hw; } ;
struct TYPE_13__ {int cwm_ignore_extcca; } ;
struct ath_hw {TYPE_5__ config; int txchainmask; int rxchainmask; } ;
struct ath_common {scalar_t__ priv; } ;
struct TYPE_12__ {int enable_paprd; } ;
struct TYPE_15__ {int gpio_val; int gpio_mask; TYPE_4__ config; } ;
struct TYPE_10__ {TYPE_1__* wiphy; } ;
struct TYPE_9__ {int debugfsdir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_7__*) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ath_softc*) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (char*,int,int ,int *) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int,int ,struct ath_softc*,int *) ;
 int FUNC_12 (char*,int,int ,int *) ;
 int FUNC_13 (char*,int,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_14(struct ath_hw *VAR_20)
{
 struct ath_common *VAR_21 = FUNC_6(VAR_20);
 struct ath_softc *VAR_22 = (struct ath_softc *) VAR_21->priv;

 VAR_22->debug.debugfs_phy = FUNC_10("ath9k",
         VAR_22->hw->wiphy->debugfsdir);
 if (!VAR_22->debug.debugfs_phy)
  return -VAR_0;






 FUNC_5(VAR_22);
 FUNC_7(VAR_22);
 FUNC_4(&VAR_22->spec_priv, VAR_22->debug.debugfs_phy);

 FUNC_9(VAR_22->dev, "dma", VAR_22->debug.debugfs_phy,
        VAR_13);
 FUNC_9(VAR_22->dev, "interrupt", VAR_22->debug.debugfs_phy,
        VAR_15);
 FUNC_9(VAR_22->dev, "xmit", VAR_22->debug.debugfs_phy,
        VAR_19);
 FUNC_9(VAR_22->dev, "queues", VAR_22->debug.debugfs_phy,
        VAR_17);
 FUNC_9(VAR_22->dev, "misc", VAR_22->debug.debugfs_phy,
        VAR_16);
 FUNC_9(VAR_22->dev, "reset", VAR_22->debug.debugfs_phy,
        VAR_18);

 FUNC_3(VAR_22->debug.debugfs_phy, &VAR_22->debug.stats.rxstats);
 FUNC_2(VAR_22->debug.debugfs_phy, &VAR_22->debug.stats.rxstats);

 FUNC_13("rx_chainmask", 0400, VAR_22->debug.debugfs_phy,
     &VAR_20->rxchainmask);
 FUNC_13("tx_chainmask", 0400, VAR_22->debug.debugfs_phy,
     &VAR_20->txchainmask);
 FUNC_11("ani", 0600,
       VAR_22->debug.debugfs_phy, VAR_22, &VAR_2);
 FUNC_8("paprd", 0600, VAR_22->debug.debugfs_phy,
       &VAR_22->sc_ah->config.enable_paprd);
 FUNC_11("regidx", 0600, VAR_22->debug.debugfs_phy,
       VAR_22, &VAR_9);
 FUNC_11("regval", 0600, VAR_22->debug.debugfs_phy,
       VAR_22, &VAR_10);
 FUNC_8("ignore_extcca", 0600,
       VAR_22->debug.debugfs_phy,
       &VAR_20->config.cwm_ignore_extcca);
 FUNC_11("regdump", 0400, VAR_22->debug.debugfs_phy, VAR_22,
       &VAR_8);
 FUNC_9(VAR_22->dev, "dump_nfcal",
        VAR_22->debug.debugfs_phy,
        VAR_14);

 FUNC_0(VAR_22->debug.debugfs_phy, VAR_22->sc_ah);
 FUNC_1(VAR_22->debug.debugfs_phy, VAR_22->sc_ah);

 FUNC_12("gpio_mask", 0600,
      VAR_22->debug.debugfs_phy, &VAR_22->sc_ah->gpio_mask);
 FUNC_12("gpio_val", 0600,
      VAR_22->debug.debugfs_phy, &VAR_22->sc_ah->gpio_val);
 FUNC_11("antenna_diversity", 0400,
       VAR_22->debug.debugfs_phy, VAR_22, &VAR_3);
 FUNC_11("tpc", 0600, VAR_22->debug.debugfs_phy, VAR_22, &VAR_11);

 FUNC_11("nf_override", 0600,
       VAR_22->debug.debugfs_phy, VAR_22, &VAR_7);

 return 0;
}
