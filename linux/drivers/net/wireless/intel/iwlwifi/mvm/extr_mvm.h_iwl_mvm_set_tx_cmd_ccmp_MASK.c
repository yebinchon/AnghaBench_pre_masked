
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tx_cmd {int key; int sec_ctl; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int keylen; int key; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ieee80211_tx_info *VAR_1,
        struct iwl_tx_cmd *VAR_2)
{
 struct ieee80211_key_conf *VAR_3 = VAR_1->control.hw_key;

 VAR_2->sec_ctl = VAR_0;
 FUNC_0(VAR_2->key, VAR_3->key, VAR_3->keylen);
}
