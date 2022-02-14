
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct rsi_hw {int * country; int dfs_region; struct rsi_common* priv; } ;
struct rsi_common {int num_supp_bands; int mutex; } ;
struct regulatory_request {int * alpha2; int dfs_region; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;
struct ieee80211_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int ) ;
 struct ieee80211_hw* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static void FUNC_5(struct wiphy *VAR_5,
      struct regulatory_request *VAR_6)
{
 struct ieee80211_supported_band *VAR_7;
 struct ieee80211_channel *VAR_8;
 struct ieee80211_hw *VAR_9 = FUNC_4(VAR_5);
 struct rsi_hw * VAR_10 = VAR_9->priv;
 struct rsi_common *VAR_11 = VAR_10->priv;
 int VAR_12;

 FUNC_0(&VAR_11->mutex);

 FUNC_2(VAR_3, "country = %s dfs_region = %d\n",
  *VAR_6->alpha2, VAR_6->dfs_region);

 if (VAR_11->num_supp_bands > 1) {
  VAR_7 = VAR_5->bands[VAR_4];

  for (VAR_12 = 0; VAR_12 < VAR_7->n_channels; VAR_12++) {
   VAR_8 = &VAR_7->channels[VAR_12];
   if (VAR_8->flags & VAR_0)
    continue;

   if (VAR_8->flags & VAR_2)
    VAR_8->flags |= VAR_1;
  }
 }
 VAR_10->dfs_region = FUNC_3(VAR_6->dfs_region);
 FUNC_2(VAR_3, "RSI region code = %d\n", VAR_10->dfs_region);

 VAR_10->country[0] = VAR_6->alpha2[0];
 VAR_10->country[1] = VAR_6->alpha2[1];

 FUNC_1(&VAR_11->mutex);
}
