
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm_sta {int reserved_queue; int sta_id; } ;
struct iwl_mvm {TYPE_1__* queue_info; } ;
struct ieee80211_sta {int tdls; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int status; int tid_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ) ;
 struct iwl_mvm_sta* FUNC_6 (struct ieee80211_sta*) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_8,
          struct ieee80211_sta *VAR_9,
          enum nl80211_iftype VAR_10)
{
 struct iwl_mvm_sta *VAR_11 = FUNC_6(VAR_9);
 int VAR_12;


 if (FUNC_2(FUNC_4(VAR_8)))
  return 0;


 FUNC_5(VAR_8, VAR_4);


 if (VAR_10 == VAR_7 && !VAR_9->tdls &&
     !VAR_8->queue_info[VAR_1].tid_bitmap &&
     (VAR_8->queue_info[VAR_1].status ==
      VAR_5))
  VAR_12 = VAR_1;
 else
  VAR_12 = FUNC_3(VAR_8, VAR_11->sta_id,
      VAR_3,
      VAR_2);
 if (VAR_12 < 0) {

  VAR_12 = FUNC_5(VAR_8, VAR_11->sta_id);
  if (VAR_12 < 0) {
   FUNC_1(VAR_8, "No available queues for new station\n");
   return -VAR_0;
  }
 }
 VAR_8->queue_info[VAR_12].status = VAR_6;

 VAR_11->reserved_queue = VAR_12;

 FUNC_0(VAR_8, "Reserving data queue #%d for sta_id %d\n",
       VAR_12, VAR_11->sta_id);

 return 0;
}
