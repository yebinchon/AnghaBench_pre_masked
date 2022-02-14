
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {int iftype; struct wiphy* wiphy; } ;
struct wiphy {TYPE_1__** bands; } ;
struct vif_params {int dummy; } ;
struct net_device {int flags; int name; int * ethtool_ops; int hard_header_len; int watchdog_timeo; struct wireless_dev* ieee80211_ptr; } ;
struct mwifiex_private {int bss_mode; struct wireless_dev wdev; struct net_device* netdev; int * dfs_cac_workqueue; int * dfs_chan_sw_workqueue; int async_mutex; int dfs_chan_sw_work; int dfs_cac_work; int bss_started; void* bss_role; void* bss_priority; void* frame_type; void* bss_type; } ;
struct TYPE_5__ {int p2p_intf; int uap_intf; int sta_intf; } ;
struct TYPE_6__ {int p2p_intf; int uap_intf; int sta_intf; } ;
struct mwifiex_adapter {int config_bands; TYPE_2__ curr_iface_comb; int dev; scalar_t__ is_hw_11ac_capable; int mfg_mode; TYPE_3__ iface_limit; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_4__ {int vht_cap; int ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wireless_dev* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;





 int FUNC_2 (struct net_device*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct net_device* FUNC_3 (int,char const*,unsigned char,int ,int ,int) ;
 void* FUNC_4 (char*,int,int,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,int ) ;
 int VAR_24 ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct wireless_dev*,int ,int) ;
 int FUNC_9 (int *) ;
 struct mwifiex_adapter* FUNC_10 (struct wiphy*) ;
 int FUNC_11 (struct mwifiex_private*) ;
 int FUNC_12 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_13 (struct mwifiex_private*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct mwifiex_private* FUNC_14 (struct mwifiex_adapter*,void*) ;
 int FUNC_15 (struct mwifiex_private*,struct net_device*) ;
 int FUNC_16 (struct mwifiex_private*,int ,int ,int ,int *,int) ;
 int FUNC_17 (struct mwifiex_private*,struct net_device*,int,int *) ;
 int FUNC_18 (int *,struct mwifiex_private*) ;
 int FUNC_19 (int *,struct mwifiex_private*) ;
 int FUNC_20 (struct mwifiex_private*,int,int) ;
 void* FUNC_21 (struct net_device*) ;
 scalar_t__ FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct wiphy*) ;
 int FUNC_24 (struct wiphy*) ;

struct wireless_dev *FUNC_25(struct wiphy *VAR_28,
           const char *VAR_29,
           unsigned char VAR_30,
           enum nl80211_iftype VAR_31,
           struct vif_params *VAR_32)
{
 struct mwifiex_adapter *VAR_33 = FUNC_10(VAR_28);
 struct mwifiex_private *VAR_34;
 struct net_device *VAR_35;
 void *VAR_36;
 int VAR_37;

 if (!VAR_33)
  return FUNC_0(-VAR_1);

 switch (VAR_31) {
 case 128:
 case 129:
 case 132:
  if (VAR_33->curr_iface_comb.sta_intf ==
      VAR_33->iface_limit.sta_intf) {
   FUNC_12(VAR_33, VAR_4,
        "cannot create multiple sta/adhoc ifaces\n");
   return FUNC_0(-VAR_2);
  }

  VAR_34 = FUNC_14(
      VAR_33, VAR_14);
  if (!VAR_34) {
   FUNC_12(VAR_33, VAR_4,
        "could not get free private struct\n");
   return FUNC_0(-VAR_1);
  }

  VAR_34->wdev.wiphy = VAR_28;
  VAR_34->wdev.iftype = 129;

  if (VAR_31 == 128)
   VAR_34->bss_mode = 129;
  else
   VAR_34->bss_mode = VAR_31;

  VAR_34->bss_type = VAR_14;
  VAR_34->frame_type = VAR_16;
  VAR_34->bss_priority = 0;
  VAR_34->bss_role = VAR_11;

  break;
 case 131:
  if (VAR_33->curr_iface_comb.uap_intf ==
      VAR_33->iface_limit.uap_intf) {
   FUNC_12(VAR_33, VAR_4,
        "cannot create multiple AP ifaces\n");
   return FUNC_0(-VAR_2);
  }

  VAR_34 = FUNC_14(
      VAR_33, VAR_15);
  if (!VAR_34) {
   FUNC_12(VAR_33, VAR_4,
        "could not get free private struct\n");
   return FUNC_0(-VAR_1);
  }

  VAR_34->wdev.wiphy = VAR_28;
  VAR_34->wdev.iftype = 131;

  VAR_34->bss_type = VAR_15;
  VAR_34->frame_type = VAR_16;
  VAR_34->bss_priority = 0;
  VAR_34->bss_role = VAR_12;
  VAR_34->bss_started = 0;
  VAR_34->bss_mode = VAR_31;

  break;
 case 130:
  if (VAR_33->curr_iface_comb.p2p_intf ==
      VAR_33->iface_limit.p2p_intf) {
   FUNC_12(VAR_33, VAR_4,
        "cannot create multiple P2P ifaces\n");
   return FUNC_0(-VAR_2);
  }

  VAR_34 = FUNC_14(
      VAR_33, VAR_13);
  if (!VAR_34) {
   FUNC_12(VAR_33, VAR_4,
        "could not get free private struct\n");
   return FUNC_0(-VAR_1);
  }

  VAR_34->wdev.wiphy = VAR_28;



  VAR_34->wdev.iftype = 130;
  VAR_34->bss_mode = 130;





  VAR_34->bss_type = VAR_13;

  VAR_34->frame_type = VAR_16;
  VAR_34->bss_priority = VAR_11;
  VAR_34->bss_role = VAR_11;
  VAR_34->bss_started = 0;

  if (FUNC_11(VAR_34)) {
   FUNC_8(&VAR_34->wdev, 0, sizeof(VAR_34->wdev));
   VAR_34->wdev.iftype = 128;
   return FUNC_0(-VAR_1);
  }

  break;
 default:
  FUNC_12(VAR_33, VAR_4, "type not supported\n");
  return FUNC_0(-VAR_2);
 }

 VAR_35 = FUNC_3(sizeof(struct mwifiex_private *), VAR_29,
          VAR_30, VAR_24,
          VAR_7, 1);
 if (!VAR_35) {
  FUNC_12(VAR_33, VAR_4,
       "no memory available for netdevice\n");
  VAR_37 = -VAR_3;
  goto err_alloc_netdev;
 }

 FUNC_15(VAR_34, VAR_35);

 VAR_34->netdev = VAR_35;

 if (!VAR_33->mfg_mode) {
  FUNC_17(VAR_34, VAR_35, 0, ((void*)0));

  VAR_37 = FUNC_16(VAR_34, VAR_6,
           VAR_5, 0, ((void*)0), 1);
  if (VAR_37)
   goto err_set_bss_mode;

  VAR_37 = FUNC_20(VAR_34, 0, 0);
  if (VAR_37)
   goto err_sta_init;
 }

 FUNC_18(&VAR_28->bands[VAR_19]->ht_cap, VAR_34);
 if (VAR_33->is_hw_11ac_capable)
  FUNC_19(
   &VAR_28->bands[VAR_19]->vht_cap, VAR_34);

 if (VAR_33->config_bands & VAR_0)
  FUNC_18(
   &VAR_28->bands[VAR_20]->ht_cap, VAR_34);

 if ((VAR_33->config_bands & VAR_0) && VAR_33->is_hw_11ac_capable)
  FUNC_19(
   &VAR_28->bands[VAR_20]->vht_cap, VAR_34);

 FUNC_6(VAR_35, FUNC_24(VAR_28));
 VAR_35->ieee80211_ptr = &VAR_34->wdev;
 VAR_35->ieee80211_ptr->iftype = VAR_34->bss_mode;
 FUNC_2(VAR_35, FUNC_23(VAR_28));

 VAR_35->flags |= VAR_8 | VAR_9;
 VAR_35->watchdog_timeo = VAR_17;
 VAR_35->hard_header_len += VAR_18;
 VAR_35->ethtool_ops = &VAR_27;

 VAR_36 = FUNC_21(VAR_35);
 *((unsigned long *) VAR_36) = (unsigned long) VAR_34;

 FUNC_2(VAR_35, VAR_33->dev);

 VAR_34->dfs_cac_workqueue = FUNC_4("MWIFIEX_DFS_CAC%s",
        VAR_21 |
        VAR_22 |
        VAR_23, 1, VAR_29);
 if (!VAR_34->dfs_cac_workqueue) {
  FUNC_12(VAR_33, VAR_4, "cannot alloc DFS CAC queue\n");
  VAR_37 = -VAR_3;
  goto err_alloc_cac;
 }

 FUNC_1(&VAR_34->dfs_cac_work, VAR_25);

 VAR_34->dfs_chan_sw_workqueue = FUNC_4("MWIFIEX_DFS_CHSW%s",
            VAR_21 | VAR_23 |
            VAR_22, 1, VAR_29);
 if (!VAR_34->dfs_chan_sw_workqueue) {
  FUNC_12(VAR_33, VAR_4, "cannot alloc DFS channel sw queue\n");
  VAR_37 = -VAR_3;
  goto err_alloc_chsw;
 }

 FUNC_1(&VAR_34->dfs_chan_sw_work,
     VAR_26);

 FUNC_9(&VAR_34->async_mutex);


 if (FUNC_22(VAR_35)) {
  FUNC_12(VAR_33, VAR_4, "cannot register network device\n");
  VAR_37 = -VAR_1;
  goto err_reg_netdev;
 }

 FUNC_12(VAR_33, VAR_10,
      "info: %s: Marvell 802.11 Adapter\n", VAR_35->name);





 switch (VAR_31) {
 case 128:
 case 129:
 case 132:
  VAR_33->curr_iface_comb.sta_intf++;
  break;
 case 131:
  VAR_33->curr_iface_comb.uap_intf++;
  break;
 case 130:
  VAR_33->curr_iface_comb.p2p_intf++;
  break;
 default:

  FUNC_12(VAR_33, VAR_4, "type not supported\n");
  return FUNC_0(-VAR_2);
 }

 return &VAR_34->wdev;

err_reg_netdev:
 FUNC_5(VAR_34->dfs_chan_sw_workqueue);
 VAR_34->dfs_chan_sw_workqueue = ((void*)0);
err_alloc_chsw:
 FUNC_5(VAR_34->dfs_cac_workqueue);
 VAR_34->dfs_cac_workqueue = ((void*)0);
err_alloc_cac:
 FUNC_7(VAR_35);
 VAR_34->netdev = ((void*)0);
err_sta_init:
err_set_bss_mode:
err_alloc_netdev:
 FUNC_8(&VAR_34->wdev, 0, sizeof(VAR_34->wdev));
 VAR_34->wdev.iftype = 128;
 VAR_34->bss_mode = 128;
 return FUNC_0(VAR_37);
}
