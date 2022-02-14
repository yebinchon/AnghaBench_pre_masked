
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct brcmf_pub {struct brcmf_cfg80211_info* config; } ;
struct brcmf_pno_scanresults_le {int count; } ;
struct brcmf_pno_net_info_le {scalar_t__ SSID_len; scalar_t__ channel; int SSID; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
struct brcmf_event_msg {int datalen; scalar_t__ event_code; } ;
struct TYPE_8__ {int nd_data_completed; int nd_data_wait; TYPE_3__* nd; TYPE_2__* nd_info; } ;
struct brcmf_cfg80211_info {TYPE_4__ wowl; } ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_7__ {int n_channels; int * channels; TYPE_1__ ssid; } ;
struct TYPE_6__ {int n_matches; TYPE_3__** matches; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct brcmf_pno_net_info_le* FUNC_2 (struct brcmf_pno_scanresults_le*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static s32
FUNC_7(struct brcmf_if *VAR_7, const struct brcmf_event_msg *VAR_8,
        void *VAR_9)
{
 struct brcmf_pub *VAR_10 = VAR_7->drvr;
 struct brcmf_cfg80211_info *VAR_11 = VAR_10->config;
 struct brcmf_pno_scanresults_le *VAR_12;
 struct brcmf_pno_net_info_le *VAR_13;

 FUNC_1(VAR_6, "Enter\n");

 if (VAR_8->datalen < (sizeof(*VAR_12) + sizeof(*VAR_13))) {
  FUNC_1(VAR_6, "Event data to small. Ignore\n");
  return 0;
 }

 VAR_12 = (struct brcmf_pno_scanresults_le *)VAR_9;

 if (VAR_8->event_code == VAR_0) {
  FUNC_1(VAR_6, "PFN NET LOST event. Ignore\n");
  return 0;
 }

 if (FUNC_4(VAR_12->count) < 1) {
  FUNC_0(VAR_10, "Invalid result count, expected 1 (%d)\n",
    FUNC_4(VAR_12->count));
  return -VAR_2;
 }

 VAR_13 = FUNC_2(VAR_12);
 if (VAR_13->SSID_len > VAR_3)
  VAR_13->SSID_len = VAR_3;
 FUNC_5(VAR_11->wowl.nd->ssid.ssid, VAR_13->SSID, VAR_13->SSID_len);
 VAR_11->wowl.nd->ssid.ssid_len = VAR_13->SSID_len;
 VAR_11->wowl.nd->n_channels = 1;
 VAR_11->wowl.nd->channels[0] =
  FUNC_3(VAR_13->channel,
   VAR_13->channel <= VAR_1 ?
     VAR_4 : VAR_5);
 VAR_11->wowl.nd_info->n_matches = 1;
 VAR_11->wowl.nd_info->matches[0] = VAR_11->wowl.nd;


 VAR_11->wowl.nd_data_completed = 1;
 FUNC_6(&VAR_11->wowl.nd_data_wait);

 return 0;
}
