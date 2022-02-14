
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int FUNC_0 (struct vnt_private*,int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         const u8 *VAR_2)
{
 struct vnt_private *VAR_3 = VAR_0->priv;


 FUNC_0(VAR_3, 1);
}
