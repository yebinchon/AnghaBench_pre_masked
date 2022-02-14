
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct TYPE_4__ {int svc_map; } ;
struct ath10k {int bss_survey_done; TYPE_1__ scan; struct ieee80211_channel* rx_channel; TYPE_2__ wmi; int conf_mutex; } ;
typedef enum wmi_bss_survey_req_type { ____Placeholder_wmi_bss_survey_req_type } wmi_bss_survey_req_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*) ;
 int FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void
FUNC_7(struct ath10k *VAR_5,
      struct ieee80211_channel *VAR_6)
{
 int VAR_7;
 enum wmi_bss_survey_req_type VAR_8 = VAR_3;

 FUNC_3(&VAR_5->conf_mutex);

 if (!FUNC_5(VAR_4, VAR_5->wmi.svc_map) ||
     (VAR_5->rx_channel != VAR_6))
  return;

 if (VAR_5->scan.state != VAR_1) {
  FUNC_0(VAR_5, VAR_0, "ignoring bss chan info request while scanning..\n");
  return;
 }

 FUNC_4(&VAR_5->bss_survey_done);

 VAR_7 = FUNC_2(VAR_5, VAR_8);
 if (VAR_7) {
  FUNC_1(VAR_5, "failed to send pdev bss chan info request\n");
  return;
 }

 VAR_7 = FUNC_6(&VAR_5->bss_survey_done, 3 * VAR_2);
 if (!VAR_7) {
  FUNC_1(VAR_5, "bss channel survey timed out\n");
  return;
 }
}
