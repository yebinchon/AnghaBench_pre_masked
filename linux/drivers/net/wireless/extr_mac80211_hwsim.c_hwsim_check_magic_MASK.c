
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int p2p; int type; int addr; scalar_t__ drv_priv; } ;
struct hwsim_vif_priv {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,struct ieee80211_vif*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ieee80211_vif *VAR_1)
{
 struct hwsim_vif_priv *VAR_2 = (void *)VAR_1->drv_priv;
 FUNC_0(VAR_2->magic != VAR_0,
      "Invalid VIF (%p) magic %#x, %pM, %d/%d\n",
      VAR_1, VAR_2->magic, VAR_1->addr, VAR_1->type, VAR_1->p2p);
}
