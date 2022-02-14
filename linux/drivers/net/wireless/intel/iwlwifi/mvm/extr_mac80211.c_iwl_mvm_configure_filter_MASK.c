
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct iwl_mvm {int mutex; struct iwl_mcast_filter_cmd* mcast_filter_cmd; } ;
struct iwl_mcast_filter_cmd {int pass_all; scalar_t__ count; } ;
struct ieee80211_hw {int dummy; } ;


 unsigned int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mcast_filter_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1,
         unsigned int VAR_2,
         unsigned int *VAR_3,
         u64 VAR_4)
{
 struct iwl_mvm *VAR_5 = FUNC_0(VAR_1);
 struct iwl_mcast_filter_cmd *VAR_6 = (void *)(unsigned long)VAR_4;

 FUNC_3(&VAR_5->mutex);


 FUNC_2(VAR_5->mcast_filter_cmd);
 VAR_5->mcast_filter_cmd = VAR_6;

 if (!VAR_6)
  goto out;

 if (VAR_2 & VAR_0)
  VAR_6->pass_all = !!(*VAR_3 & VAR_0);

 if (VAR_6->pass_all)
  VAR_6->count = 0;

 FUNC_1(VAR_5);
out:
 FUNC_4(&VAR_5->mutex);
 *VAR_3 = 0;
}
