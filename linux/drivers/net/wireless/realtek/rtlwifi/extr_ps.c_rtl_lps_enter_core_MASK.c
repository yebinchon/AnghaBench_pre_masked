
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl_ps_ctl {int fwctrl_lps; } ;
struct TYPE_5__ {int lps_mutex; } ;
struct TYPE_4__ {scalar_t__ busytraffic; } ;
struct TYPE_6__ {scalar_t__ being_setkey; } ;
struct rtl_priv {TYPE_2__ locks; TYPE_1__ link_info; TYPE_3__ sec; } ;
struct rtl_mac {int cnt_after_linked; scalar_t__ opmode; scalar_t__ link_state; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_5)
{
 struct rtl_mac *VAR_6 = FUNC_4(FUNC_5(VAR_5));
 struct rtl_ps_ctl *VAR_7 = FUNC_6(FUNC_5(VAR_5));
 struct rtl_priv *VAR_8 = FUNC_5(VAR_5);

 if (!VAR_7->fwctrl_lps)
  return;

 if (VAR_8->sec.being_setkey)
  return;

 if (VAR_8->link_info.busytraffic)
  return;


 if (VAR_6->cnt_after_linked < 5)
  return;

 if (VAR_6->opmode == VAR_4)
  return;

 if (VAR_6->link_state != VAR_3)
  return;

 FUNC_1(&VAR_8->locks.lps_mutex);





 FUNC_0(VAR_8, VAR_0, VAR_1,
   "Enter 802.11 power save mode...\n");
 FUNC_3(VAR_5, VAR_2);

 FUNC_2(&VAR_8->locks.lps_mutex);
}
