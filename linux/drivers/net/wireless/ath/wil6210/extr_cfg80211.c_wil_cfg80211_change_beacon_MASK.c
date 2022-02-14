
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wireless_dev {int beacon_interval; int ssid_len; int ssid; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int privacy; int pbss; int hidden_ssid; int wmi_edmg_channel; int channel; int ssid_len; int ssid; int mid; } ;
struct wil6210_priv {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_beacon_data {int tail_len; scalar_t__ tail; } ;


 int VAR_0 ;
 int FUNC_0 (struct wil6210_vif*,struct cfg80211_beacon_data*) ;
 int FUNC_1 (struct wiphy*,struct net_device*,int ,int ,int,int ,int ,int ,struct cfg80211_beacon_data*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct wil6210_vif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_6 (struct cfg80211_beacon_data*) ;
 struct wil6210_priv* FUNC_7 (struct wiphy*) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_1,
          struct net_device *VAR_2,
          struct cfg80211_beacon_data *VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_7(VAR_1);
 struct wireless_dev *VAR_5 = VAR_2->ieee80211_ptr;
 struct wil6210_vif *VAR_6 = FUNC_4(VAR_2);
 int VAR_7;
 u32 VAR_8 = 0;

 FUNC_5(VAR_4, "change_beacon, mid=%d\n", VAR_6->mid);
 FUNC_6(VAR_3);

 if (VAR_3->tail &&
     FUNC_2(VAR_0, VAR_3->tail,
        VAR_3->tail_len))
  VAR_8 = 1;

 FUNC_3(VAR_6->ssid, VAR_5->ssid, VAR_5->ssid_len);
 VAR_6->ssid_len = VAR_5->ssid_len;


 if (VAR_6->privacy != VAR_8) {
  FUNC_5(VAR_4, "privacy changed %d=>%d. Restarting AP\n",
        VAR_6->privacy, VAR_8);

  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_6->ssid,
         VAR_6->ssid_len, VAR_8,
         VAR_5->beacon_interval,
         VAR_6->channel,
         VAR_6->wmi_edmg_channel, VAR_3,
         VAR_6->hidden_ssid,
         VAR_6->pbss);
 } else {
  VAR_7 = FUNC_0(VAR_6, VAR_3);
 }

 return VAR_7;
}
