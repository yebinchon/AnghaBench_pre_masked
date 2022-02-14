
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rtl_ps_ctl {int last_delaylps_stamp_jiffies; } ;
struct TYPE_10__ {TYPE_4__* btc_ops; } ;
struct TYPE_6__ {int is_special_data; } ;
struct rtl_priv {TYPE_5__ btcoexist; TYPE_3__* cfg; TYPE_1__ ra; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_9__ {int (* btc_special_packet_notify ) (struct rtl_priv*,int) ;} ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {scalar_t__ (* get_btc_status ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rtl_priv*,int) ;

__attribute__((used)) static void FUNC_3(struct rtl_priv *VAR_1, struct rtl_ps_ctl *VAR_2,
        int VAR_3)
{
 struct ieee80211_hw *VAR_4 = VAR_1->hw;

 VAR_1->ra.is_special_data = 1;
 if (VAR_1->cfg->ops->get_btc_status())
  VAR_1->btcoexist.btc_ops->btc_special_packet_notify(
     VAR_1, VAR_3);
 FUNC_0(VAR_4);
 VAR_2->last_delaylps_stamp_jiffies = VAR_0;
}
