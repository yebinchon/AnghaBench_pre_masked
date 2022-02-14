
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnt_private {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int FUNC_0 (struct vnt_private*,int *) ;

__attribute__((used)) static u64 FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct vnt_private *VAR_2 = VAR_0->priv;
 u64 VAR_3;

 FUNC_0(VAR_2, &VAR_3);

 return VAR_3;
}
