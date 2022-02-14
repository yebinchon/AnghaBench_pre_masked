
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wil6210_vif {scalar_t__ ssid_len; scalar_t__ gtk_len; int gtk_index; int gtk; int privacy; int pbss; int hidden_ssid; int wmi_edmg_channel; int channel; int bi; int ssid; int proberesp_len; int assocresp_ies_len; int proberesp_ies_len; int proberesp; int assocresp_ies; int proberesp_ies; } ;
struct wil6210_priv {struct wil6210_vif** vifs; } ;
struct net_device {int dummy; } ;
struct key_params {scalar_t__ key_len; int seq_len; int key; } ;
struct cfg80211_beacon_data {int probe_resp_len; int assocresp_ies_len; int proberesp_ies_len; int probe_resp; int assocresp_ies; int proberesp_ies; } ;


 int VAR_0 ;
 int FUNC_0 (struct wil6210_priv*) ;
 int VAR_1 ;
 int FUNC_1 (struct wiphy*,struct net_device*,int ,scalar_t__,int ,int ,int ,int ,struct cfg80211_beacon_data*,int ,int ) ;
 struct net_device* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wiphy*,struct net_device*,int ,int,int *,struct key_params*) ;
 int FUNC_4 (struct wil6210_priv*,char*,int,int) ;
 int FUNC_5 (char*,int ,int,int,int ,scalar_t__,int) ;
 int FUNC_6 (struct wil6210_priv*,char*,int,int ,int ,int ,int ,int ) ;
 struct wiphy* FUNC_7 (struct wil6210_priv*) ;

void FUNC_8(struct wil6210_priv *VAR_2)
{
 int VAR_3, VAR_4;
 struct wiphy *VAR_5 = FUNC_7(VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  struct wil6210_vif *VAR_6 = VAR_2->vifs[VAR_4];
  struct net_device *VAR_7;
  struct cfg80211_beacon_data VAR_8 = {};
  struct key_params VAR_9 = {};

  if (!VAR_6 || VAR_6->ssid_len == 0)
   continue;

  VAR_7 = FUNC_2(VAR_6);
  VAR_8.proberesp_ies = VAR_6->proberesp_ies;
  VAR_8.assocresp_ies = VAR_6->assocresp_ies;
  VAR_8.probe_resp = VAR_6->proberesp;
  VAR_8.proberesp_ies_len = VAR_6->proberesp_ies_len;
  VAR_8.assocresp_ies_len = VAR_6->assocresp_ies_len;
  VAR_8.probe_resp_len = VAR_6->proberesp_len;

  FUNC_6(VAR_2,
    "AP (vif %d) recovery: privacy %d, bi %d, channel %d, hidden %d, pbss %d\n",
    VAR_4, VAR_6->privacy, VAR_6->bi, VAR_6->channel,
    VAR_6->hidden_ssid, VAR_6->pbss);
  FUNC_5("SSID ", VAR_0, 16, 1,
      VAR_6->ssid, VAR_6->ssid_len, 1);
  VAR_3 = FUNC_1(VAR_5, VAR_7,
         VAR_6->ssid, VAR_6->ssid_len,
         VAR_6->privacy, VAR_6->bi,
         VAR_6->channel,
         VAR_6->wmi_edmg_channel, &VAR_8,
         VAR_6->hidden_ssid, VAR_6->pbss);
  if (VAR_3) {
   FUNC_4(VAR_2, "vif %d recovery failed (%d)\n", VAR_4, VAR_3);
   continue;
  }

  if (!VAR_6->privacy || VAR_6->gtk_len == 0)
   continue;

  VAR_9.key = VAR_6->gtk;
  VAR_9.key_len = VAR_6->gtk_len;
  VAR_9.seq_len = VAR_1;
  VAR_3 = FUNC_3(VAR_5, VAR_7, VAR_6->gtk_index, 0,
       ((void*)0), &VAR_9);
  if (VAR_3)
   FUNC_4(VAR_2, "vif %d recovery add key failed (%d)\n",
    VAR_4, VAR_3);
 }
}
