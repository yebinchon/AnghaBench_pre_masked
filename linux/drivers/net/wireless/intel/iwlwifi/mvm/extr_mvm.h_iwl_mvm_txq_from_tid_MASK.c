
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef void iwl_mvm_txq ;
struct ieee80211_sta {TYPE_1__** txq; } ;
struct TYPE_2__ {scalar_t__ drv_priv; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline struct iwl_mvm_txq *
FUNC_0(struct ieee80211_sta *VAR_2, u8 VAR_3)
{
 if (VAR_3 == VAR_1)
  VAR_3 = VAR_0;

 return (void *)VAR_2->txq[VAR_3]->drv_priv;
}
