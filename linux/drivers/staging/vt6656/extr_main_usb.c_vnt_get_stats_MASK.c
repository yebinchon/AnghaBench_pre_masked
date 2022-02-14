
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int low_stats; } ;
struct ieee80211_low_level_stats {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int FUNC_0 (struct ieee80211_low_level_stats*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_hw *VAR_0,
    struct ieee80211_low_level_stats *VAR_1)
{
 struct vnt_private *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_1, &VAR_2->low_stats, sizeof(*VAR_1));

 return 0;
}
