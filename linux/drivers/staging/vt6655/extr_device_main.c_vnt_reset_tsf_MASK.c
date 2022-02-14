
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ PortOffset; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct vnt_private *VAR_4 = VAR_2->priv;


 FUNC_0(VAR_4->PortOffset + VAR_0, VAR_1);
}
