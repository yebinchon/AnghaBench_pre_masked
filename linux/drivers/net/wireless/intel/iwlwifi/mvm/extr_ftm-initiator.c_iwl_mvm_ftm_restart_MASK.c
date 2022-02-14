
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* req; int req_wdev; int * responses; } ;
struct iwl_mvm {TYPE_3__ ftm_initiator; int mutex; } ;
struct TYPE_7__ {int burst_index; } ;
struct cfg80211_pmsr_result {int final; TYPE_2__ ftm; int addr; int type; int host_time; int status; } ;
struct TYPE_9__ {int n_peers; TYPE_1__* peers; } ;
struct TYPE_6__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,struct cfg80211_pmsr_result*,int ) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(struct iwl_mvm *VAR_4)
{
 struct cfg80211_pmsr_result VAR_5 = {
  .status = VAR_2,
  .final = 1,
  .host_time = FUNC_3(),
  .type = VAR_3,
 };
 int VAR_6;

 FUNC_4(&VAR_4->mutex);

 if (!VAR_4->ftm_initiator.req)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_4->ftm_initiator.req->n_peers; VAR_6++) {
  FUNC_5(VAR_5.addr, VAR_4->ftm_initiator.req->peers[VAR_6].addr,
         VAR_0);
  VAR_5.ftm.burst_index = VAR_4->ftm_initiator.responses[VAR_6];

  FUNC_1(VAR_4->ftm_initiator.req_wdev,
         VAR_4->ftm_initiator.req,
         &VAR_5, VAR_1);
 }

 FUNC_0(VAR_4->ftm_initiator.req_wdev,
          VAR_4->ftm_initiator.req, VAR_1);
 FUNC_2(VAR_4);
}
