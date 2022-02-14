
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct hwsim_vif_priv {scalar_t__ bcn_en; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, u8 *VAR_1,
           struct ieee80211_vif *VAR_2)
{
 unsigned int *VAR_3 = VAR_0;
 struct hwsim_vif_priv *VAR_4 = (void *)VAR_2->drv_priv;

 if (VAR_4->bcn_en)
  (*VAR_3)++;
}
