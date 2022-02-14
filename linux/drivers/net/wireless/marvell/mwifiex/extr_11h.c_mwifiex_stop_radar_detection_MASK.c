
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_radar_params {scalar_t__ cac_time_ms; struct cfg80211_chan_def* chandef; } ;
struct mwifiex_private {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_radar_params*,int ,int) ;
 int FUNC_1 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_radar_params*,int) ;

int FUNC_2(struct mwifiex_private *VAR_2,
     struct cfg80211_chan_def *VAR_3)
{
 struct mwifiex_radar_params VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct mwifiex_radar_params));
 VAR_4.chandef = VAR_3;
 VAR_4.cac_time_ms = 0;

 return FUNC_1(VAR_2, VAR_1,
    VAR_0, 0, &VAR_4, 1);
}
