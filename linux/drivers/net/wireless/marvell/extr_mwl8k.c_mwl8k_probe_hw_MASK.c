
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mwl8k_priv {int sniffer_enabled; int wmm_enabled; int fw_rev; TYPE_2__* pdev; scalar_t__ regs; scalar_t__ ap_fw; int hw_rev; TYPE_1__* device_info; int ampdu; int hw_restart_in_progress; scalar_t__ num_ampdu_queues; int watchdog_event_pending; scalar_t__ pending_tx_pkts; int * rxd_ops; } ;
struct ieee80211_hw {TYPE_3__* wiphy; struct mwl8k_priv* priv; } ;
struct TYPE_8__ {int perm_addr; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_6__ {int part_name; int * ap_rxd_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct ieee80211_hw*) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int *,char*) ;
 int FUNC_10 (struct mwl8k_priv*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int VAR_15 ;
 int FUNC_12 (struct ieee80211_hw*,int ) ;
 int FUNC_13 (struct ieee80211_hw*,int ) ;
 int FUNC_14 (struct mwl8k_priv*) ;
 int FUNC_15 (struct ieee80211_hw*,int) ;
 int FUNC_16 (int ,int ,int ,int ,struct ieee80211_hw*) ;
 int VAR_16 ;
 int FUNC_17 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 int FUNC_19 (TYPE_3__*,char*,int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_20 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_21(struct ieee80211_hw *VAR_17)
{
 struct mwl8k_priv *VAR_18 = VAR_17->priv;
 int VAR_19 = 0;
 int VAR_20;

 if (VAR_18->ap_fw) {
  VAR_18->rxd_ops = VAR_18->device_info->ap_rxd_ops;
  if (VAR_18->rxd_ops == ((void*)0)) {
   FUNC_18(VAR_17->wiphy,
      "Driver does not have AP firmware image support for this hardware\n");
   VAR_19 = -VAR_0;
   goto err_stop_firmware;
  }
 } else {
  VAR_18->rxd_ops = &VAR_16;
 }

 VAR_18->sniffer_enabled = 0;
 VAR_18->wmm_enabled = 0;
 VAR_18->pending_tx_pkts = 0;
 FUNC_0(&VAR_18->watchdog_event_pending, 0);

 VAR_19 = FUNC_13(VAR_17, 0);
 if (VAR_19)
  goto err_stop_firmware;
 FUNC_17(VAR_17, 0, VAR_1);







 VAR_18->num_ampdu_queues = 0;
 if (!VAR_18->ap_fw) {
  VAR_19 = FUNC_11(VAR_17);
  if (VAR_19)
   goto err_free_queues;
 }

 FUNC_2(0, VAR_18->regs + VAR_10);
 FUNC_2(0, VAR_18->regs + VAR_9);
 FUNC_2(VAR_7|VAR_6|
    VAR_4,
    VAR_18->regs + VAR_8);
 FUNC_2(VAR_5,
    VAR_18->regs + VAR_11);

 VAR_19 = FUNC_16(VAR_18->pdev->irq, VAR_15,
    VAR_2, VAR_12, VAR_17);
 if (VAR_19) {
  FUNC_18(VAR_17->wiphy, "failed to register IRQ handler\n");
  goto err_free_queues;
 }







 if (!VAR_18->hw_restart_in_progress)
  FUNC_3(VAR_18->ampdu, 0, sizeof(VAR_18->ampdu));






 FUNC_2(VAR_3, VAR_18->regs + VAR_9);


 if (VAR_18->ap_fw) {
  VAR_19 = FUNC_4(VAR_17);
  if (!VAR_19)
   VAR_19 = FUNC_11(VAR_17);
  if (!VAR_19)
   VAR_19 = FUNC_8(VAR_17);
 } else {
  VAR_19 = FUNC_5(VAR_17);
 }
 if (VAR_19) {
  FUNC_18(VAR_17->wiphy, "Cannot initialise firmware\n");
  goto err_free_irq;
 }


 VAR_19 = FUNC_6(VAR_17);
 if (VAR_19) {
  FUNC_18(VAR_17->wiphy, "Cannot disable\n");
  goto err_free_irq;
 }


 VAR_19 = FUNC_9(VAR_17, ((void*)0), "\x00\x00\x00\x00\x00\x00");
 if (VAR_19) {
  FUNC_18(VAR_17->wiphy, "Cannot clear MAC address\n");
  goto err_free_irq;
 }


 VAR_19 = FUNC_7(VAR_17, VAR_13, 0x3);
 if (VAR_19)
  FUNC_20(VAR_17->wiphy, "failed to set # of RX antennas");
 VAR_19 = FUNC_7(VAR_17, VAR_14, 0x7);
 if (VAR_19)
  FUNC_20(VAR_17->wiphy, "failed to set # of TX antennas");



 FUNC_2(0, VAR_18->regs + VAR_9);
 FUNC_1(VAR_18->pdev->irq, VAR_17);

 FUNC_19(VAR_17->wiphy, "%s v%d, %pm, %s firmware %u.%u.%u.%u\n",
     VAR_18->device_info->part_name,
     VAR_18->hw_rev, VAR_17->wiphy->perm_addr,
     VAR_18->ap_fw ? "AP" : "STA",
     (VAR_18->fw_rev >> 24) & 0xff, (VAR_18->fw_rev >> 16) & 0xff,
     (VAR_18->fw_rev >> 8) & 0xff, VAR_18->fw_rev & 0xff);

 return 0;

err_free_irq:
 FUNC_2(0, VAR_18->regs + VAR_9);
 FUNC_1(VAR_18->pdev->irq, VAR_17);

err_free_queues:
 for (VAR_20 = 0; VAR_20 < FUNC_14(VAR_18); VAR_20++)
  FUNC_15(VAR_17, VAR_20);
 FUNC_12(VAR_17, 0);

err_stop_firmware:
 FUNC_10(VAR_18);

 return VAR_19;
}
