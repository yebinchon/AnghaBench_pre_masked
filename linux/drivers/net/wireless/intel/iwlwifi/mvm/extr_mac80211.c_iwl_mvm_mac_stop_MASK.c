
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int async_handlers_wk; int mutex; int fwrt; int scan_timeout_dwork; int cs_tx_unblock_dwork; int status; int add_stream_wk; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_1);

 FUNC_5(&VAR_2->async_handlers_wk);
 FUNC_5(&VAR_2->add_stream_wk);
 FUNC_4(VAR_0, &VAR_2->status);

 FUNC_2(&VAR_2->cs_tx_unblock_dwork);
 FUNC_2(&VAR_2->scan_timeout_dwork);
 FUNC_6(&VAR_2->fwrt);

 FUNC_7(&VAR_2->mutex);
 FUNC_1(VAR_2);
 FUNC_8(&VAR_2->mutex);





 FUNC_3(&VAR_2->async_handlers_wk);
}
