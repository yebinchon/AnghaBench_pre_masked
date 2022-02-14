
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct hwsim_vif_priv {scalar_t__ magic; } ;



__attribute__((used)) static inline void FUNC_0(struct ieee80211_vif *VAR_0)
{
 struct hwsim_vif_priv *VAR_1 = (void *)VAR_0->drv_priv;
 VAR_1->magic = 0;
}
