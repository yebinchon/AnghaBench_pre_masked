
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {int hid_exist; } ;
struct btc_coexist {int auto_report_1ant; struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ auto_tdma_adjust; } ;
struct TYPE_3__ {int high_priority_tx; int high_priority_rx; int special_pkt_period_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct btc_coexist*) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*) ;

void FUNC_7(struct btc_coexist *VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_4->adapter;
 struct btc_bt_link_info *VAR_6 = &VAR_4->bt_link_info;

 FUNC_0(VAR_5, VAR_0, VAR_1,
   "[BTCoex], ==========================Periodical===========================\n");

 if (!VAR_4->auto_report_1ant) {
  FUNC_5(VAR_4);
  FUNC_3(VAR_4);
 } else {
  FUNC_2(VAR_4);
  FUNC_4(VAR_4);

  if ((VAR_3->high_priority_tx + VAR_3->high_priority_rx < 50) &&
      VAR_6->hid_exist)
   VAR_6->hid_exist = 0;

  if (FUNC_1(VAR_4) ||
      VAR_2->auto_tdma_adjust) {
   FUNC_6(VAR_4);
  }
  VAR_3->special_pkt_period_cnt++;
 }
}
