
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_tx_report {scalar_t__ last_sent_sn; scalar_t__ last_recv_sn; scalar_t__ last_sent_time; } ;
struct rtl_priv {struct rtl_tx_report tx_report; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

bool FUNC_3(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct rtl_tx_report *VAR_6 = &VAR_5->tx_report;

 if (VAR_6->last_sent_sn == VAR_6->last_recv_sn)
  return 1;

 if (FUNC_2(VAR_6->last_sent_time + 3 * VAR_2, VAR_3)) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "Check TX-Report timeout!! s_sn=0x%X r_sn=0x%X\n",
    VAR_6->last_sent_sn, VAR_6->last_recv_sn);
  return 1;
 }

 return 0;
}
