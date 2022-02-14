
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {struct rtl_btc_ops* btc_ops; } ;
struct rtl_priv {TYPE_1__* hw; TYPE_3__* cfg; TYPE_2__ btcoexist; } ;
struct rtl_btc_ops {int (* btc_get_ampdu_cfg ) (struct rtl_priv*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
struct TYPE_8__ {scalar_t__ (* get_btc_status ) () ;} ;
struct TYPE_7__ {TYPE_4__* ops; } ;
struct TYPE_5__ {scalar_t__ max_rx_aggregation_subframes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct rtl_priv*,scalar_t__*,scalar_t__*,scalar_t__*) ;

void FUNC_3(struct rtl_priv *VAR_3)
{
 struct rtl_btc_ops *VAR_4 = VAR_3->btcoexist.btc_ops;
 u8 VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;

 if (VAR_3->cfg->ops->get_btc_status())
  VAR_4->btc_get_ampdu_cfg(VAR_3, &VAR_5,
        &VAR_6, &VAR_7);

 FUNC_0(VAR_3, VAR_0, VAR_1,
   "Set RX AMPDU: coex - reject=%d, ctrl_agg_size=%d, size=%d",
   VAR_5, VAR_6, VAR_7);

 VAR_3->hw->max_rx_aggregation_subframes =
  (VAR_6 ? VAR_7 : VAR_2);
}
