
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct brcmf_event_msg {scalar_t__ event_code; scalar_t__ status; int flags; } ;
struct brcmf_cfg80211_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_1(struct brcmf_cfg80211_info *VAR_8,
          const struct brcmf_event_msg *VAR_9)
{
 u32 VAR_10 = VAR_9->event_code;
 u32 VAR_11 = VAR_9->status;

 if (VAR_10 == VAR_1 && VAR_11 == VAR_5) {
  FUNC_0(VAR_7, "Processing Link %s & no network found\n",
     VAR_9->flags & VAR_0 ? "up" : "down");
  return 1;
 }

 if (VAR_10 == VAR_3 && VAR_11 != VAR_6) {
  FUNC_0(VAR_7, "Processing connecting & no network found\n");
  return 1;
 }

 if (VAR_10 == VAR_2 &&
     VAR_11 != VAR_4) {
  FUNC_0(VAR_7, "Processing failed supplicant state: %u\n",
     VAR_11);
  return 1;
 }

 return 0;
}
