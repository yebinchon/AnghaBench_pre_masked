
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; } ;
struct ieee80211_vif_chanctx_switch {int old_ctx; int vif; int new_ctx; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int) ;
 int FUNC_3 (struct iwl_mvm*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct iwl_mvm *VAR_0,
        struct ieee80211_vif_chanctx_switch *VAR_1)
{
 int VAR_2;

 FUNC_4(&VAR_0->mutex);
 FUNC_2(VAR_0, VAR_1[0].vif, VAR_1[0].old_ctx, 1);

 VAR_2 = FUNC_1(VAR_0, VAR_1[0].vif, VAR_1[0].new_ctx,
        1);
 if (VAR_2) {
  FUNC_0(VAR_0,
   "failed to assign new_ctx during channel switch\n");
  goto out_reassign;
 }

 goto out;

out_reassign:
 if (FUNC_1(VAR_0, VAR_1[0].vif, VAR_1[0].old_ctx,
      1)) {
  FUNC_0(VAR_0, "failed to reassign old_ctx after failure.\n");
  goto out_restart;
 }

 goto out;

out_restart:

 FUNC_3(VAR_0, 0);

out:
 FUNC_5(&VAR_0->mutex);

 return VAR_2;
}
