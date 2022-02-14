
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iwl_mvm_sta {int dummy; } ;
struct iwl_mvm {TYPE_1__* queue_info; int mutex; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {scalar_t__ ra_sta_id; scalar_t__ txq_tid; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_sta*,int,scalar_t__,int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int,unsigned long,int) ;
 unsigned long FUNC_5 (struct iwl_mvm*,int) ;
 struct iwl_mvm_sta* FUNC_6 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iwl_mvm *VAR_1, int VAR_2,
           struct ieee80211_sta *VAR_3,
           u8 VAR_4)
{
 struct iwl_mvm_sta *VAR_5;
 u8 VAR_6, VAR_7;
 unsigned long VAR_8 = 0;
 bool VAR_9;
 int VAR_10;

 FUNC_7(&VAR_1->mutex);

 if (FUNC_1(FUNC_3(VAR_1)))
  return -VAR_0;

 VAR_6 = VAR_1->queue_info[VAR_2].ra_sta_id;
 VAR_7 = VAR_1->queue_info[VAR_2].txq_tid;

 VAR_9 = VAR_6 == VAR_4;

 VAR_5 = FUNC_6(VAR_1, VAR_6);
 if (FUNC_1(!VAR_5))
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_1, VAR_2);

 if (VAR_8)
  FUNC_4(VAR_1, VAR_2,
          VAR_8, 0);

 VAR_10 = FUNC_2(VAR_1, VAR_3, VAR_2, VAR_7, 0);
 if (VAR_10) {
  FUNC_0(VAR_1,
   "Failed to free inactive queue %d (ret=%d)\n",
   VAR_2, VAR_10);

  return VAR_10;
 }


 if (!VAR_9)
  FUNC_4(VAR_1, VAR_2, 0, 1);

 return 0;
}
