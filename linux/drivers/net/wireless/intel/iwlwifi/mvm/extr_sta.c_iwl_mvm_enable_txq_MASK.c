
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_trans_txq_scd_cfg {int fifo; int tid; int sta_id; int aggregate; int frame_limit; } ;
struct iwl_scd_txq_cfg_cmd {int scd_queue; int ssn; int tid; int aggregate; int tx_fifo; int sta_id; int window; int action; } ;
struct iwl_mvm {int trans; } ;
struct ieee80211_sta {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_scd_txq_cfg_cmd*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,int,int ,int ) ;
 int FUNC_6 (int ,int,int ,int *,unsigned int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static bool FUNC_8(struct iwl_mvm *VAR_2, struct ieee80211_sta *VAR_3,
          int VAR_4, u16 VAR_5,
          const struct iwl_trans_txq_scd_cfg *VAR_6,
          unsigned int VAR_7)
{
 struct iwl_scd_txq_cfg_cmd VAR_8 = {
  .scd_queue = VAR_4,
  .action = VAR_0,
  .window = VAR_6->frame_limit,
  .sta_id = VAR_6->sta_id,
  .ssn = FUNC_2(VAR_5),
  .tx_fifo = VAR_6->fifo,
  .aggregate = VAR_6->aggregate,
  .tid = VAR_6->tid,
 };
 bool VAR_9;

 if (FUNC_1(FUNC_3(VAR_2)))
  return 0;


 if (!FUNC_5(VAR_2, VAR_3, VAR_4, VAR_6->sta_id, VAR_6->tid))
  return 0;

 VAR_9 = FUNC_6(VAR_2->trans, VAR_4, VAR_5,
        ((void*)0), VAR_7);
 if (VAR_9)
  FUNC_7(&VAR_8.ssn, 1);

 FUNC_0(FUNC_4(VAR_2, VAR_1, 0, sizeof(VAR_8), &VAR_8),
      "Failed to configure queue %d on FIFO %d\n", VAR_4, VAR_6->fifo);

 return VAR_9;
}
