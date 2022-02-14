
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_mvm {int lar_regdom_set; TYPE_4__* hw; int dev; TYPE_3__* nvm_data; TYPE_2__* fw; TYPE_1__* cfg; } ;
struct ieee80211_regdomain {int dummy; } ;
struct TYPE_8__ {int wiphy; } ;
struct TYPE_7__ {int lar_enabled; } ;
struct TYPE_6__ {int ucode_capa; } ;
struct TYPE_5__ {scalar_t__ nvm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_regdomain*) ;
 int FUNC_1 (struct iwl_mvm*,char*,char*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;
 struct ieee80211_regdomain* FUNC_4 (struct iwl_mvm*,int *) ;
 struct ieee80211_regdomain* FUNC_5 (int ,char*,int ,int *) ;
 int FUNC_6 (struct iwl_mvm*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 scalar_t__ FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct ieee80211_regdomain*) ;
 int FUNC_10 (int ,struct ieee80211_regdomain*) ;

int FUNC_11(struct iwl_mvm *VAR_5)
{
 bool VAR_6;
 bool VAR_7;
 int VAR_8;
 struct ieee80211_regdomain *VAR_9;
 char VAR_10[3];

 if (VAR_5->cfg->nvm_type == VAR_2) {
  VAR_6 = FUNC_2(&VAR_5->fw->ucode_capa,
          VAR_3);
  VAR_7 = VAR_5->nvm_data->lar_enabled;
  if (VAR_6 != VAR_7)
   FUNC_1(VAR_5,
     "Conflict between TLV & NVM regarding enabling LAR (TLV = %s NVM =%s)\n",
     VAR_6 ? "enabled" : "disabled",
     VAR_7 ? "enabled" : "disabled");
 }

 if (!FUNC_7(VAR_5))
  return 0;





 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8 != -VAR_1)
  return VAR_8;







 VAR_5->lar_regdom_set = 0;

 VAR_9 = FUNC_4(VAR_5, ((void*)0));
 if (FUNC_0(VAR_9))
  return -VAR_0;

 if (FUNC_8(VAR_5) &&
     !FUNC_3(VAR_5->dev, VAR_10)) {
  FUNC_9(VAR_9);
  VAR_9 = FUNC_5(VAR_5->hw->wiphy, VAR_10,
          VAR_4, ((void*)0));
  if (FUNC_0(VAR_9))
   return -VAR_0;
 }

 VAR_8 = FUNC_10(VAR_5->hw->wiphy, VAR_9);
 FUNC_9(VAR_9);
 return VAR_8;
}
