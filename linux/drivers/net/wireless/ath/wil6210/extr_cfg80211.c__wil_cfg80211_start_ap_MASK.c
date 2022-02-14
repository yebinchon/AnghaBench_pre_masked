
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef scalar_t__ u16 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int bi; size_t ssid_len; int ssid; void* pbss; void* hidden_ssid; void* wmi_edmg_channel; void* channel; void* privacy; int status; int mid; } ;
struct wil6210_priv {int mutex; int fw_capabilities; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_beacon_data {int probe_resp_len; int probe_resp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (struct wil6210_priv*) ;
 void** FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (struct wil6210_vif*,struct cfg80211_beacon_data*) ;
 scalar_t__ FUNC_4 (int ,void**,scalar_t__) ;
 int VAR_7 ;
 int FUNC_5 (int ,void* const*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct wil6210_vif* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct wil6210_priv*,int ) ;
 int FUNC_14 (struct wil6210_vif*) ;
 int FUNC_15 (struct wil6210_priv*,char*,int ,void*) ;
 int FUNC_16 (struct wil6210_priv*,char*) ;
 int FUNC_17 (struct wil6210_priv*,struct net_device*,int,int) ;
 void* FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct wil6210_priv*,int ) ;
 int VAR_8 ;
 struct wil6210_priv* FUNC_20 (struct wiphy*) ;
 int FUNC_21 (struct wil6210_vif*,int,void*,void*,void*,void*,void*) ;
 int FUNC_22 (struct wil6210_vif*) ;
 int FUNC_23 (struct wil6210_vif*,size_t,void* const*) ;

__attribute__((used)) static int FUNC_24(struct wiphy *VAR_9,
      struct net_device *VAR_10,
      const u8 *VAR_11, size_t VAR_12, u32 VAR_13,
      int VAR_14, u8 VAR_15, u8 VAR_16,
      struct cfg80211_beacon_data *VAR_17,
      u8 VAR_18, u32 VAR_19)
{
 struct wil6210_priv *VAR_20 = FUNC_20(VAR_9);
 struct wil6210_vif *VAR_21 = FUNC_8(VAR_10);
 int VAR_22;
 struct wireless_dev *VAR_23 = VAR_10->ieee80211_ptr;
 u8 VAR_24 = FUNC_18(VAR_23->iftype);
 u8 VAR_25 = (VAR_23->iftype == VAR_1);
 u16 VAR_26 = 0;
 u8 *VAR_27;
 bool VAR_28 = 0;

 if (VAR_19)
  VAR_24 = VAR_6;

 FUNC_15(VAR_20, "start_ap: mid=%d, is_go=%d\n", VAR_21->mid, VAR_25);
 if (VAR_25 && !VAR_19) {
  FUNC_16(VAR_20, "P2P GO must be in PBSS\n");
  return -VAR_0;
 }

 FUNC_19(VAR_20, VAR_7);

 VAR_27 = FUNC_2(VAR_17->probe_resp,
          VAR_17->probe_resp_len,
          &VAR_26);

 if ((VAR_27 && VAR_26 > 0 &&
      FUNC_4(VAR_4,
         VAR_27,
         VAR_26)))
  VAR_28 = 1;

 if (VAR_28) {
  if (!FUNC_12(VAR_5,
         VAR_20->fw_capabilities)) {
   FUNC_16(VAR_20, "FW does not support FT roaming\n");
   return -VAR_0;
  }
  FUNC_11(VAR_8, VAR_21->status);
 }

 FUNC_6(&VAR_20->mutex);

 if (!FUNC_17(VAR_20, VAR_10, 1, 0)) {
  FUNC_0(VAR_20);
  VAR_22 = FUNC_1(VAR_20);
  if (VAR_22)
   goto out;
 }

 VAR_22 = FUNC_23(VAR_21, VAR_12, VAR_11);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_3(VAR_21, VAR_17);
 if (VAR_22)
  goto out;

 VAR_21->privacy = VAR_13;
 VAR_21->channel = VAR_15;
 VAR_21->wmi_edmg_channel = VAR_16;
 VAR_21->hidden_ssid = VAR_18;
 VAR_21->pbss = VAR_19;
 VAR_21->bi = VAR_14;
 FUNC_5(VAR_21->ssid, VAR_11, VAR_12);
 VAR_21->ssid_len = VAR_12;

 FUNC_10(VAR_10);
 if (!FUNC_17(VAR_20, VAR_10, 0, 1))
  FUNC_13(VAR_20, VAR_3);

 VAR_22 = FUNC_21(VAR_21, VAR_14, VAR_24, VAR_15, VAR_16,
      VAR_18, VAR_25);
 if (VAR_22)
  goto err_pcp_start;

 VAR_22 = FUNC_14(VAR_21);
 if (VAR_22)
  goto err_bcast;

 goto out;

err_bcast:
 FUNC_22(VAR_21);
err_pcp_start:
 FUNC_9(VAR_10);
 if (!FUNC_17(VAR_20, VAR_10, 0, 1))
  FUNC_13(VAR_20, VAR_2);
out:
 FUNC_7(&VAR_20->mutex);
 return VAR_22;
}
