
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct vnt_private {int dummy; } ;
struct TYPE_2__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int FUNC_0 (struct vnt_private*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
   u64 VAR_2)
{
 struct vnt_private *VAR_3 = VAR_0->priv;

 FUNC_0(VAR_3, VAR_2, VAR_1->bss_conf.beacon_int);
}
