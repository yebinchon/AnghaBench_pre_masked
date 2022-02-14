
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl_tcb_desc {int use_shortpreamble; scalar_t__ hw_rate; } ;
struct rtl_priv {TYPE_3__* cfg; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {scalar_t__* maps; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_2,
       struct rtl_tcb_desc *VAR_3,
       struct ieee80211_tx_info *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_0(VAR_2);
 u8 VAR_6 = VAR_4->control.rates[0].flags;

 VAR_3->use_shortpreamble = 0;


 if (VAR_3->hw_rate == VAR_5->cfg->maps[VAR_1])
  return;
 else if (VAR_6 & VAR_0)
  VAR_3->use_shortpreamble = 1;

 return;
}
