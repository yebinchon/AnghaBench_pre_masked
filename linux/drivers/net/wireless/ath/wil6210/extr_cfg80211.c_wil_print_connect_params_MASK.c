
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil6210_priv {int dummy; } ;
struct cfg80211_connect_params {char* bssid; char* prev_bssid; char* pbss; int crypto; scalar_t__ privacy; int auth_type; int ssid_len; scalar_t__ ssid; TYPE_1__* channel; } ;
struct TYPE_2__ {int center_freq; int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,scalar_t__,int ,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,...) ;
 int FUNC_3 (struct wil6210_priv*,int *) ;

__attribute__((used)) static void FUNC_4(struct wil6210_priv *VAR_2,
         struct cfg80211_connect_params *VAR_3)
{
 FUNC_2(VAR_2, "Connecting to:\n");
 if (VAR_3->channel) {
  FUNC_2(VAR_2, "  Channel: %d freq %d\n",
    VAR_3->channel->hw_value, VAR_3->channel->center_freq);
 }
 if (VAR_3->bssid)
  FUNC_2(VAR_2, "  BSSID: %pM\n", VAR_3->bssid);
 if (VAR_3->ssid)
  FUNC_0(VAR_1, "  SSID: ", VAR_0,
          16, 1, VAR_3->ssid, VAR_3->ssid_len, 1);
 if (VAR_3->prev_bssid)
  FUNC_2(VAR_2, "  Previous BSSID=%pM\n", VAR_3->prev_bssid);
 FUNC_2(VAR_2, "  Auth Type: %s\n",
   FUNC_1(VAR_3->auth_type));
 FUNC_2(VAR_2, "  Privacy: %s\n", VAR_3->privacy ? "secure" : "open");
 FUNC_2(VAR_2, "  PBSS: %d\n", VAR_3->pbss);
 FUNC_3(VAR_2, &VAR_3->crypto);
}
