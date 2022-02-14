
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm_txq {int txq_id; } ;
struct iwl_mvm_sta {int lock; TYPE_2__* tid_data; int sta_id; int vif; } ;
struct iwl_mvm {TYPE_1__* tvqm_info; int mutex; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {int txq_id; } ;
struct TYPE_3__ {int txq_tid; int sta_id; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,...) ;
 unsigned int FUNC_1 (struct iwl_mvm*,int ,int,int) ;
 struct iwl_mvm_sta* FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_mvm*,int ,int,unsigned int) ;
 struct iwl_mvm_txq* FUNC_4 (struct ieee80211_sta*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iwl_mvm *VAR_0,
     struct ieee80211_sta *VAR_1, u8 VAR_2,
     int VAR_3)
{
 struct iwl_mvm_sta *VAR_4 = FUNC_2(VAR_1);
 struct iwl_mvm_txq *VAR_5 =
  FUNC_4(VAR_1, VAR_3);
 unsigned int VAR_6 =
  FUNC_1(VAR_0, VAR_4->vif, 0, 0);
 int VAR_7 = -1;

 FUNC_5(&VAR_0->mutex);

 FUNC_0(VAR_0,
       "Allocating queue for sta %d on tid %d\n",
       VAR_4->sta_id, VAR_3);
 VAR_7 = FUNC_3(VAR_0, VAR_4->sta_id, VAR_3, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->txq_id = VAR_7;
 VAR_0->tvqm_info[VAR_7].txq_tid = VAR_3;
 VAR_0->tvqm_info[VAR_7].sta_id = VAR_4->sta_id;

 FUNC_0(VAR_0, "Allocated queue is %d\n", VAR_7);

 FUNC_6(&VAR_4->lock);
 VAR_4->tid_data[VAR_3].txq_id = VAR_7;
 FUNC_7(&VAR_4->lock);

 return 0;
}
