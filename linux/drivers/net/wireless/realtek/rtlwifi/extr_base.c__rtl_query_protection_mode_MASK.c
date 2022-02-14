
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl_tcb_desc {int rts_stbc; int cts_enable; int rts_bw; int rts_use_shortpreamble; int rts_use_shortgi; int rts_enable; int rts_rate; scalar_t__ rts_sc; } ;
struct rtl_priv {TYPE_3__* cfg; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {int * maps; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_3,
           struct rtl_tcb_desc *VAR_4,
           struct ieee80211_tx_info *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_0(VAR_3);
 u8 VAR_7 = VAR_5->control.rates[0].flags;


 VAR_4->rts_stbc = 0;
 VAR_4->cts_enable = 0;
 VAR_4->rts_sc = 0;
 VAR_4->rts_bw = 0;
 VAR_4->rts_use_shortpreamble = 0;
 VAR_4->rts_use_shortgi = 0;

 if (VAR_7 & VAR_0) {

  VAR_4->rts_enable = 1;
  VAR_4->cts_enable = 1;
  VAR_4->rts_rate = VAR_6->cfg->maps[VAR_2];
 } else if (VAR_7 & VAR_1) {

  VAR_4->rts_enable = 1;
  VAR_4->rts_rate = VAR_6->cfg->maps[VAR_2];
 }
}
