
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reg_dmn_pair_mapping {int reg_5ghz_ctl; int reg_2ghz_ctl; int reg_domain; } ;
struct TYPE_4__ {struct reg_dmn_pair_mapping* regpair; } ;
struct TYPE_5__ {TYPE_1__ regulatory; } ;
struct ath10k {TYPE_3__* dfs_detector; TYPE_2__ ath_common; int conf_mutex; } ;
typedef enum wmi_dfs_region { ____Placeholder_wmi_dfs_region } wmi_dfs_region ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;
struct TYPE_6__ {int region; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ath10k*,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ath10k *VAR_2)
{
 struct reg_dmn_pair_mapping *VAR_3;
 int VAR_4;
 enum wmi_dfs_region VAR_5;
 enum nl80211_dfs_regions VAR_6;

 FUNC_5(&VAR_2->conf_mutex);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  FUNC_3(VAR_2, "failed to update channel list: %d\n", VAR_4);

 VAR_3 = VAR_2->ath_common.regulatory.regpair;

 if (FUNC_0(VAR_0) && VAR_2->dfs_detector) {
  VAR_6 = VAR_2->dfs_detector->region;
  VAR_5 = FUNC_1(VAR_6);
 } else {
  VAR_5 = VAR_1;
 }




 VAR_4 = FUNC_4(VAR_2,
         VAR_3->reg_domain,
         VAR_3->reg_domain,
         VAR_3->reg_domain,
         VAR_3->reg_2ghz_ctl,
         VAR_3->reg_5ghz_ctl,
         VAR_5);
 if (VAR_4)
  FUNC_3(VAR_2, "failed to set pdev regdomain: %d\n", VAR_4);
}
