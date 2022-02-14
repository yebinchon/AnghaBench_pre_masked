
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_ft_auth_cmd {int bssid; scalar_t__ channel; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int status; int connect_timer; int mid; int privacy; } ;
struct wil6210_priv {int fw_capabilities; } ;
struct net_device {int dummy; } ;
struct cfg80211_connect_params {int bssid; TYPE_1__* channel; scalar_t__ pbss; int privacy; int prev_bssid; } ;
typedef int auth_cmd ;
struct TYPE_2__ {scalar_t__ hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct wmi_ft_auth_cmd*,int ,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 struct wil6210_vif* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct wil6210_priv*,char*,...) ;
 int FUNC_10 (struct wil6210_priv*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct wil6210_priv* FUNC_11 (struct wiphy*) ;
 int FUNC_12 (struct wil6210_priv*,int ,int ,struct wmi_ft_auth_cmd*,int) ;

__attribute__((used)) static int FUNC_13(struct wiphy *VAR_7,
     struct net_device *VAR_8,
     struct cfg80211_connect_params *VAR_9)
{
 struct wil6210_priv *VAR_10 = FUNC_11(VAR_7);
 struct wil6210_vif *VAR_11 = FUNC_6(VAR_8);
 struct wmi_ft_auth_cmd VAR_12;
 int VAR_13;

 if (!FUNC_8(VAR_3, VAR_10->fw_capabilities)) {
  FUNC_9(VAR_10, "FT: FW does not support FT roaming\n");
  return -VAR_1;
 }

 if (!VAR_9->prev_bssid) {
  FUNC_9(VAR_10, "FT: prev_bssid was not set\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_9->prev_bssid, VAR_9->bssid)) {
  FUNC_9(VAR_10, "FT: can not roam to same AP\n");
  return -VAR_0;
 }

 if (!FUNC_8(VAR_6, VAR_11->status)) {
  FUNC_9(VAR_10, "FT: roam while not connected\n");
  return -VAR_0;
 }

 if (VAR_11->privacy != VAR_9->privacy) {
  FUNC_9(VAR_10, "FT: privacy mismatch, current (%d) roam (%d)\n",
   VAR_11->privacy, VAR_9->privacy);
  return -VAR_0;
 }

 if (VAR_9->pbss) {
  FUNC_9(VAR_10, "FT: roam is not valid for PBSS\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.channel = VAR_9->channel->hw_value - 1;
 FUNC_1(VAR_12.bssid, VAR_9->bssid);

 FUNC_10(VAR_10, "FT: roaming\n");

 FUNC_7(VAR_5, VAR_11->status);
 VAR_13 = FUNC_12(VAR_10, VAR_2, VAR_11->mid,
        &VAR_12, sizeof(VAR_12));
 if (VAR_13 == 0)
  FUNC_4(&VAR_11->connect_timer,
     VAR_4 + FUNC_5(5000));
 else
  FUNC_0(VAR_5, VAR_11->status);

 return VAR_13;
}
