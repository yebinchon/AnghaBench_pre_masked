
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct regulatory_request {int dfs_region; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct TYPE_5__ {int regulatory; } ;
struct ath10k {scalar_t__ state; int phy_capability; TYPE_3__* hw; int conf_mutex; TYPE_4__* dfs_detector; TYPE_1__ ath_common; } ;
struct TYPE_8__ {int (* set_dfs_domain ) (TYPE_4__*,int ) ;} ;
struct TYPE_7__ {TYPE_2__* wiphy; } ;
struct TYPE_6__ {int * bands; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath10k*,int ,char*,int ) ;
 int FUNC_2 (struct ath10k*,int ) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int ) ;
 int FUNC_5 (struct wiphy*,struct regulatory_request*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 struct ieee80211_hw* FUNC_9 (struct wiphy*) ;

__attribute__((used)) static void FUNC_10(struct wiphy *VAR_5,
    struct regulatory_request *VAR_6)
{
 struct ieee80211_hw *VAR_7 = FUNC_9(VAR_5);
 struct ath10k *VAR_8 = VAR_7->priv;
 bool VAR_9;

 FUNC_5(VAR_5, VAR_6, &VAR_8->ath_common.regulatory);

 if (FUNC_0(VAR_2) && VAR_8->dfs_detector) {
  FUNC_1(VAR_8, VAR_0, "dfs region 0x%x\n",
      VAR_6->dfs_region);
  VAR_9 = VAR_8->dfs_detector->set_dfs_domain(VAR_8->dfs_detector,
         VAR_6->dfs_region);
  if (!VAR_9)
   FUNC_4(VAR_8, "DFS region 0x%X not supported, will trigger radar for every pulse\n",
        VAR_6->dfs_region);
 }

 FUNC_6(&VAR_8->conf_mutex);
 if (VAR_8->state == VAR_1)
  FUNC_3(VAR_8);
 FUNC_7(&VAR_8->conf_mutex);

 if (VAR_8->phy_capability & VAR_4)
  FUNC_2(VAR_8,
            VAR_8->hw->wiphy->bands[VAR_3]);
}
