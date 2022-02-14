
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_priv {int mutex; TYPE_3__* trans; int status; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int num_of_queues; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int FUNC_3 (struct iwl_priv*,char*,...) ;
 int VAR_0 ;
 int FUNC_4 (struct iwl_priv*,char*) ;
 int VAR_1 ;
 struct iwl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct iwl_priv*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (struct iwl_priv*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4,
        u32 VAR_5, bool VAR_6)
{
 struct iwl_priv *VAR_7 = FUNC_5(VAR_3);
 u32 VAR_8;

 FUNC_9(&VAR_7->mutex);
 FUNC_1(VAR_7, "enter\n");

 if (FUNC_11(VAR_2, &VAR_7->status)) {
  FUNC_2(VAR_7, "Aborting flush due to device shutdown\n");
  goto done;
 }
 if (FUNC_6(VAR_7)) {
  FUNC_2(VAR_7, "Aborting flush due to RF Kill\n");
  goto done;
 }

 VAR_8 = FUNC_0(VAR_7->trans->trans_cfg->base_params->num_of_queues) - 1;
 VAR_8 &= ~(FUNC_0(VAR_1) |
   FUNC_0(VAR_0));

 if (VAR_6) {
  FUNC_3(VAR_7, "Flushing SCD queues: 0x%x\n",
        VAR_8);
  if (FUNC_8(VAR_7, VAR_8)) {
   FUNC_4(VAR_7, "flush request fail\n");
   goto done;
  }
 }

 FUNC_3(VAR_7, "wait transmit/flush all frames\n");
 FUNC_7(VAR_7->trans, VAR_8);
done:
 FUNC_10(&VAR_7->mutex);
 FUNC_1(VAR_7, "leave\n");
}
