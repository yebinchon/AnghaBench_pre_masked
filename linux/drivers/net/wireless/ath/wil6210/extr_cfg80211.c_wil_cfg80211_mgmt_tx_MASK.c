
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ channel; } ;
struct wil6210_priv {int dummy; } ;
struct cfg80211_mgmt_tx_params {size_t len; int wait; TYPE_1__* chan; int offchan; int * buf; } ;
struct TYPE_2__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct wireless_dev*,int ,int const*,size_t,int,int ) ;
 struct wil6210_vif* FUNC_1 (struct wil6210_priv*,struct wireless_dev*) ;
 int FUNC_2 (struct wil6210_priv*,char*,...) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 struct wil6210_priv* FUNC_4 (struct wiphy*) ;
 int FUNC_5 (struct wil6210_vif*,int const*,size_t) ;
 int FUNC_6 (struct wil6210_vif*,int const*,size_t,scalar_t__,int ) ;

int FUNC_7(struct wiphy *VAR_5, struct wireless_dev *VAR_6,
    struct cfg80211_mgmt_tx_params *VAR_7,
    u64 *VAR_8)
{
 const u8 *VAR_9 = VAR_7->buf;
 size_t VAR_10 = VAR_7->len;
 struct wil6210_priv *VAR_11 = FUNC_4(VAR_5);
 struct wil6210_vif *VAR_12 = FUNC_1(VAR_11, VAR_6);
 int VAR_13;
 bool VAR_14;

 FUNC_2(VAR_11, "mgmt_tx: channel %d offchan %d, wait %d\n",
       VAR_7->chan ? VAR_7->chan->hw_value : -1,
       VAR_7->offchan,
       VAR_7->wait);






 if (VAR_7->chan && VAR_7->chan->hw_value == 0) {
  FUNC_3(VAR_11, "invalid channel\n");
  return -VAR_2;
 }

 if (VAR_6->iftype != VAR_4) {
  FUNC_2(VAR_11,
        "send WMI_SW_TX_REQ_CMDID on non-AP interfaces\n");
  VAR_13 = FUNC_5(VAR_12, VAR_9, VAR_10);
  goto out;
 }

 if (!VAR_7->chan || VAR_7->chan->hw_value == VAR_12->channel) {
  FUNC_2(VAR_11,
        "send WMI_SW_TX_REQ_CMDID for on-channel\n");
  VAR_13 = FUNC_5(VAR_12, VAR_9, VAR_10);
  goto out;
 }

 if (VAR_7->offchan == 0) {
  FUNC_3(VAR_11,
   "invalid channel params: current %d requested %d, off-channel not allowed\n",
   VAR_12->channel, VAR_7->chan->hw_value);
  return -VAR_1;
 }


 VAR_13 = FUNC_6(VAR_12, VAR_9, VAR_10, VAR_7->chan->hw_value,
        VAR_7->wait);

out:




 VAR_14 = (VAR_13 == 0);
 VAR_13 = (VAR_13 == -VAR_0) ? 0 : VAR_13;
 FUNC_0(VAR_6, VAR_8 ? *VAR_8 : 0, VAR_9, VAR_10,
    VAR_14, VAR_3);

 return VAR_13;
}
