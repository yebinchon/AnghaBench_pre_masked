
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_ft_reassoc_cmd {int bssid; } ;
struct wiphy {int dummy; } ;
struct wil6210_vif {int mid; struct cfg80211_bss* bss; int status; } ;
struct wil6210_priv {int fw_capabilities; } ;
struct net_device {int dummy; } ;
struct cfg80211_update_ft_ies_params {int ie; int ie_len; } ;
struct cfg80211_bss {int bssid; } ;
typedef int reassoc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct wmi_ft_reassoc_cmd*,int ,int) ;
 struct wil6210_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wil6210_priv*,char*,int ) ;
 int FUNC_5 (struct wil6210_priv*,char*,...) ;
 int FUNC_6 (char*,int ,int,int,int ,int ,int) ;
 int VAR_5 ;
 struct wil6210_priv* FUNC_7 (struct wiphy*) ;
 int FUNC_8 (struct wil6210_priv*,int ,int ,struct wmi_ft_reassoc_cmd*,int) ;
 int FUNC_9 (struct wil6210_vif*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct wiphy *VAR_6, struct net_device *VAR_7,
      struct cfg80211_update_ft_ies_params *VAR_8)
{
 struct wil6210_priv *VAR_9 = FUNC_7(VAR_6);
 struct wil6210_vif *VAR_10 = FUNC_2(VAR_7);
 struct cfg80211_bss *VAR_11;
 struct wmi_ft_reassoc_cmd VAR_12;
 int VAR_13 = 0;

 FUNC_4(VAR_9, "update ft ies, mid=%d\n", VAR_10->mid);
 FUNC_6("FT IE ", VAR_0, 16, 1,
     VAR_8->ie, VAR_8->ie_len, 1);

 if (!FUNC_3(VAR_4, VAR_9->fw_capabilities)) {
  FUNC_5(VAR_9, "FW does not support FT roaming\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_9(VAR_10, VAR_8->ie_len, VAR_8->ie);
 if (VAR_13)
  return VAR_13;

 if (!FUNC_3(VAR_5, VAR_10->status))

  return 0;





 VAR_11 = VAR_10->bss;
 if (!VAR_11) {
  FUNC_5(VAR_9, "FT: bss is NULL\n");
  return -VAR_1;
 }

 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 FUNC_0(VAR_12.bssid, VAR_11->bssid);

 VAR_13 = FUNC_8(VAR_9, VAR_3, VAR_10->mid,
        &VAR_12, sizeof(VAR_12));
 if (VAR_13)
  FUNC_5(VAR_9, "FT: reassoc failed (%d)\n", VAR_13);

 return VAR_13;
}
