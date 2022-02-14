
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tof_range_abort_cmd {int request_id; } ;
struct TYPE_2__ {struct cfg80211_pmsr_request* req; } ;
struct iwl_mvm {TYPE_1__ ftm_initiator; int mutex; } ;
struct cfg80211_pmsr_request {int cookie; } ;
typedef int cmd ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_tof_range_abort_cmd*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_mvm *VAR_2, struct cfg80211_pmsr_request *VAR_3)
{
 struct iwl_tof_range_abort_cmd VAR_4 = {
  .request_id = VAR_3->cookie,
 };

 FUNC_3(&VAR_2->mutex);

 if (VAR_3 != VAR_2->ftm_initiator.req)
  return;

 if (FUNC_2(VAR_2, FUNC_1(VAR_1,
       VAR_0, 0),
     0, sizeof(VAR_4), &VAR_4))
  FUNC_0(VAR_2, "failed to abort FTM process\n");
}
