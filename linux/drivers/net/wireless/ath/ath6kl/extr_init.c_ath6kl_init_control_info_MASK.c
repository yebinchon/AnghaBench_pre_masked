
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {scalar_t__ ch_hint; int wep_key_list; scalar_t__ def_txkey_index; } ;


 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct ath6kl_vif *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->def_txkey_index = 0;
 FUNC_1(VAR_0->wep_key_list, 0, sizeof(VAR_0->wep_key_list));
 VAR_0->ch_hint = 0;
}
