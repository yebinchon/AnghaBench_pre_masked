
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_stats {int recvsignalpower; } ;
struct TYPE_2__ {int recv_signal_power; } ;
struct rtl_priv {TYPE_1__ stats; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0,
       struct rtl_stats *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 if (VAR_2->stats.recv_signal_power == 0)
  VAR_2->stats.recv_signal_power = VAR_1->recvsignalpower;
 if (VAR_1->recvsignalpower > VAR_2->stats.recv_signal_power)
  VAR_3 = 5;
 else if (VAR_1->recvsignalpower < VAR_2->stats.recv_signal_power)
  VAR_3 = (-5);
 VAR_2->stats.recv_signal_power = (VAR_2->stats.recv_signal_power *
  5 + VAR_1->recvsignalpower + VAR_3) / 6;
}
