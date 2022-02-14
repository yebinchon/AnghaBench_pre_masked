
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ips_nic_off_wq; int rtl_wq; } ;
struct rtl_priv {TYPE_1__ works; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_2(VAR_0);





 FUNC_1(VAR_1->works.rtl_wq,
      &VAR_1->works.ips_nic_off_wq, FUNC_0(100));
}
