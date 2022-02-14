
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct brcmf_event_msg {scalar_t__ event_code; scalar_t__ status; int addr; } ;
struct TYPE_2__ {scalar_t__ use_fwsup; int bssid; } ;
struct brcmf_cfg80211_vif {int sme_state; TYPE_1__ profile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct brcmf_cfg80211_vif *VAR_9,
       const struct brcmf_event_msg *VAR_10)
{
 u32 VAR_11 = VAR_10->event_code;
 u32 VAR_12 = VAR_10->status;

 if (VAR_9->profile.use_fwsup == VAR_4 &&
     VAR_11 == VAR_0 &&
     VAR_12 == VAR_2)
  FUNC_3(VAR_6, &VAR_9->sme_state);
 if (VAR_11 == VAR_1 && VAR_12 == VAR_3) {
  FUNC_0(VAR_7, "Processing set ssid\n");
  FUNC_2(VAR_9->profile.bssid, VAR_10->addr, VAR_8);
  if (VAR_9->profile.use_fwsup != VAR_4)
   return 1;

  FUNC_3(VAR_5, &VAR_9->sme_state);
 }

 if (FUNC_4(VAR_6, &VAR_9->sme_state) &&
     FUNC_4(VAR_5, &VAR_9->sme_state)) {
  FUNC_1(VAR_6, &VAR_9->sme_state);
  FUNC_1(VAR_5, &VAR_9->sme_state);
  return 1;
 }
 return 0;
}
