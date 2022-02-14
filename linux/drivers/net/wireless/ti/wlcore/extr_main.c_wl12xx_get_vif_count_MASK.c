
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vif_counter_data {struct ieee80211_vif* cur_vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ,struct vif_counter_data*) ;
 int FUNC_1 (struct vif_counter_data*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2,
          struct ieee80211_vif *VAR_3,
          struct vif_counter_data *VAR_4)
{
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->cur_vif = VAR_3;

 FUNC_0(VAR_2, VAR_0,
         VAR_1, VAR_4);
}
