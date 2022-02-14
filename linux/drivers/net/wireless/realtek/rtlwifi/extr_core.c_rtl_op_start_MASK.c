
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int conf_mutex; } ;
struct TYPE_5__ {int watchdog_timer; } ;
struct rtl_priv {TYPE_3__ locks; TYPE_2__ works; TYPE_1__* intf_ops; int status; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int (* adapter_start ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rtl_hal*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_1)
{
 int VAR_2 = 0;
 struct rtl_priv *VAR_3 = FUNC_4(VAR_1);
 struct rtl_hal *VAR_4 = FUNC_3(FUNC_4(VAR_1));

 if (!FUNC_0(VAR_4))
  return 0;
 if (!FUNC_7(VAR_0, &VAR_3->status))
  return 0;
 FUNC_1(&VAR_3->locks.conf_mutex);
 VAR_2 = VAR_3->intf_ops->adapter_start(VAR_1);
 if (!VAR_2)
  FUNC_5(&VAR_3->works.watchdog_timer);
 FUNC_2(&VAR_3->locks.conf_mutex);
 return VAR_2;
}
