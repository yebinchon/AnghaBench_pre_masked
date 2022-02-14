
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wcn36xx {int first_boot; int dxe_base; int ccu_base; struct ieee80211_hw* hw; int smd_channel; int scan_work; TYPE_1__* dev; int scan_lock; int hal_mutex; int conf_mutex; } ;
struct TYPE_2__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*,int const*) ;
 int VAR_3 ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 struct ieee80211_hw* FUNC_7 (int,int *) ;
 int FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,char*,int*) ;
 int FUNC_13 (struct platform_device*,struct ieee80211_hw*) ;
 int FUNC_14 (void*,char*,int ,struct ieee80211_hw*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (char*,...) ;
 int VAR_4 ;
 int FUNC_17 (char*,int const*) ;
 int FUNC_18 (struct wcn36xx*) ;
 int VAR_5 ;
 int FUNC_19 (struct wcn36xx*,struct platform_device*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_7)
{
 struct ieee80211_hw *VAR_8;
 struct wcn36xx *VAR_9;
 void *VAR_10;
 int VAR_11;
 const u8 *VAR_12;

 FUNC_15(VAR_3, "platform probe\n");

 VAR_10 = FUNC_5(VAR_7->dev.parent);

 VAR_8 = FUNC_7(sizeof(struct wcn36xx), &VAR_5);
 if (!VAR_8) {
  FUNC_16("failed to alloc hw\n");
  VAR_11 = -VAR_1;
  goto out_err;
 }
 FUNC_13(VAR_7, VAR_8);
 VAR_9 = VAR_8->priv;
 VAR_9->hw = VAR_8;
 VAR_9->dev = &VAR_7->dev;
 VAR_9->first_boot = 1;
 FUNC_11(&VAR_9->conf_mutex);
 FUNC_11(&VAR_9->hal_mutex);
 FUNC_11(&VAR_9->scan_lock);

 VAR_11 = FUNC_6(VAR_9->dev, FUNC_0(32));
 if (VAR_11 < 0) {
  FUNC_16("failed to set DMA mask: %d\n", VAR_11);
  goto out_wq;
 }

 FUNC_1(&VAR_9->scan_work, VAR_4);

 VAR_9->smd_channel = FUNC_14(VAR_10, "WLAN_CTRL", VAR_6, VAR_8);
 if (FUNC_2(VAR_9->smd_channel)) {
  FUNC_16("failed to open WLAN_CTRL channel\n");
  VAR_11 = FUNC_3(VAR_9->smd_channel);
  goto out_wq;
 }

 VAR_12 = FUNC_12(VAR_7->dev.of_node, "local-mac-address", &VAR_11);
 if (VAR_12 && VAR_11 != VAR_2) {
  FUNC_16("invalid local-mac-address\n");
  VAR_11 = -VAR_0;
  goto out_wq;
 } else if (VAR_12) {
  FUNC_17("mac address: %pM\n", VAR_12);
  FUNC_4(VAR_9->hw, VAR_12);
 }

 VAR_11 = FUNC_19(VAR_9, VAR_7);
 if (VAR_11)
  goto out_wq;

 FUNC_18(VAR_9);
 VAR_11 = FUNC_9(VAR_9->hw);
 if (VAR_11)
  goto out_unmap;

 return 0;

out_unmap:
 FUNC_10(VAR_9->ccu_base);
 FUNC_10(VAR_9->dxe_base);
out_wq:
 FUNC_8(VAR_8);
out_err:
 return VAR_11;
}
