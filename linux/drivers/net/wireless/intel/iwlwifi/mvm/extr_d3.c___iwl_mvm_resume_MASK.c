
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {int status; int hw; int mutex; struct ieee80211_vif* keep_vif; scalar_t__ net_detect; TYPE_2__* trans; int fwrt; TYPE_1__* fw; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum iwl_d3_status { ____Placeholder_iwl_d3_status } iwl_d3_status ;
struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_vif*) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ,struct ieee80211_vif*) ;
 int VAR_8 ;
 int FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int VAR_9 ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*) ;
 struct ieee80211_vif* FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_13 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_14 (struct iwl_mvm*,int,int) ;
 int FUNC_15 (struct iwl_mvm*,int ,int) ;
 int FUNC_16 (struct iwl_mvm*,int ,int ,int ,int *) ;
 int FUNC_17 (struct iwl_mvm*) ;
 int FUNC_18 (TYPE_2__*,int*,int,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static int FUNC_22(struct iwl_mvm *VAR_10, bool VAR_11)
{
 struct ieee80211_vif *VAR_12 = ((void*)0);
 int VAR_13 = 1;
 enum iwl_d3_status VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = FUNC_3(&VAR_10->fw->ucode_capa,
      VAR_5);
 bool VAR_17 = FUNC_3(&VAR_10->fw->ucode_capa,
          VAR_6);

 FUNC_19(&VAR_10->mutex);


 VAR_12 = FUNC_10(VAR_10);
 if (FUNC_0(VAR_12))
  goto err;

 FUNC_6(&VAR_10->fwrt);

 if (FUNC_7(VAR_10, VAR_12)) {
  FUNC_21(VAR_7, &VAR_10->trans->status);
  FUNC_8(VAR_10);
  FUNC_5(&VAR_10->fwrt, &VAR_8,
     0, 0);
  VAR_13 = 1;
  goto err;
 }

 VAR_13 = FUNC_18(VAR_10->trans, &VAR_14, VAR_11, !VAR_16);
 if (VAR_13)
  goto err;

 if (VAR_14 != VAR_2) {
  FUNC_2(VAR_10, "Device was reset during suspend\n");
  goto err;
 }

 if (VAR_17) {
  VAR_13 = FUNC_16(VAR_10, VAR_0, 0, 0, ((void*)0));
  if (VAR_13 < 0) {
   FUNC_1(VAR_10, "Failed to send D0I3_END_CMD first (%d)\n",
    VAR_13);
   goto err;
  }
 }





 FUNC_17(VAR_10);


 FUNC_11(VAR_10);

 if (!VAR_16)

  FUNC_14(VAR_10, 1, 1);

 if (VAR_10->net_detect) {






  if (VAR_16)
   VAR_13 = FUNC_15(VAR_10, VAR_3,
      0);

  FUNC_12(VAR_10, VAR_12);

  goto out;
 } else {
  VAR_15 = FUNC_13(VAR_10, VAR_12);





  goto out_iterate;
 }

err:
 FUNC_9(VAR_10);
 FUNC_20(&VAR_10->mutex);

out_iterate:
 if (!VAR_11)
  FUNC_4(VAR_10->hw,
   VAR_1,
   VAR_9, VAR_15 ? VAR_12 : ((void*)0));

out:

 if (VAR_16 && !VAR_13) {

  if (VAR_17)
   return 0;

  VAR_13 = FUNC_16(VAR_10, VAR_0, 0, 0, ((void*)0));
  if (!VAR_13)
   return 0;
 }






 FUNC_21(VAR_4, &VAR_10->status);

 return 1;
}
