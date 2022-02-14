
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {struct net_device* netdev; int iftype; } ;
struct net_device {int watchdog_timeo; int flags; int name; int * ethtool_ops; int * netdev_ops; struct lbs_private* ml_priv; struct wireless_dev* ieee80211_ptr; } ;
struct lbs_private {int wol_gpio; int wol_gap; int ehs_remove_supported; int wol_criteria; int mcast_work; int work_thread; struct wireless_dev* main_thread; int waitq; void* card; struct net_device* dev; struct wireless_dev* wdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lbs_private* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct wireless_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct net_device*,struct device*) ;
 struct net_device* FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct device*,char*) ;
 int VAR_7 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 struct wireless_dev* FUNC_10 (int ,struct net_device*,char*) ;
 struct wireless_dev* FUNC_11 (struct device*) ;
 int FUNC_12 (struct lbs_private*) ;
 int FUNC_13 (char*) ;
 int VAR_8 ;
 int FUNC_14 (struct lbs_private*) ;
 int FUNC_15 (struct lbs_private*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*) ;
 struct lbs_private* FUNC_18 (struct wireless_dev*) ;

struct lbs_private *FUNC_19(void *VAR_12, struct device *VAR_13)
{
 struct net_device *VAR_14;
 struct wireless_dev *VAR_15;
 struct lbs_private *VAR_16 = ((void*)0);
 int VAR_17;


 VAR_15 = FUNC_11(VAR_13);
 if (FUNC_2(VAR_15)) {
  VAR_17 = FUNC_3(VAR_15);
  FUNC_16("cfg80211 init failed\n");
  goto err_cfg;
 }

 VAR_15->iftype = VAR_6;
 VAR_16 = FUNC_18(VAR_15);
 VAR_16->wdev = VAR_15;

 VAR_17 = FUNC_15(VAR_16);
 if (VAR_17) {
  FUNC_16("failed to initialize adapter structure\n");
  goto err_wdev;
 }

 VAR_14 = FUNC_5(0, "wlan%d", VAR_5, VAR_7);
 if (!VAR_14) {
  VAR_17 = -VAR_1;
  FUNC_7(VAR_13, "no memory for network device instance\n");
  goto err_adapter;
 }

 VAR_14->ieee80211_ptr = VAR_15;
 VAR_14->ml_priv = VAR_16;
 FUNC_4(VAR_14, VAR_13);
 VAR_15->netdev = VAR_14;
 VAR_16->dev = VAR_14;

  VAR_14->netdev_ops = &VAR_9;
 VAR_14->watchdog_timeo = 5 * VAR_2;
 VAR_14->ethtool_ops = &VAR_8;
 VAR_14->flags |= VAR_3 | VAR_4;

 VAR_16->card = VAR_12;

 FUNC_17(VAR_14->name, "wlan%d");

 FUNC_13("Starting main thread...\n");
 FUNC_9(&VAR_16->waitq);
 VAR_16->main_thread = FUNC_10(VAR_11, VAR_14, "lbs_main");
 if (FUNC_2(VAR_16->main_thread)) {
  VAR_17 = FUNC_3(VAR_16->main_thread);
  FUNC_13("Error creating main thread.\n");
  goto err_ndev;
 }

 VAR_16->work_thread = FUNC_6("lbs_worker");
 FUNC_1(&VAR_16->mcast_work, VAR_10);

 VAR_16->wol_criteria = VAR_0;
 VAR_16->wol_gpio = 0xff;
 VAR_16->wol_gap = 20;
 VAR_16->ehs_remove_supported = 1;

 return VAR_16;

 err_ndev:
 FUNC_8(VAR_14);

 err_adapter:
 FUNC_14(VAR_16);

 err_wdev:
 FUNC_12(VAR_16);

 err_cfg:
 return FUNC_0(VAR_17);
}
