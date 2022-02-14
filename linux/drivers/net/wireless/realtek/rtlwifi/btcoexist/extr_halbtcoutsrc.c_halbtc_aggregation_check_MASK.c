
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_bt_ctrl_agg_buf_size; scalar_t__ bt_ctrl_agg_buf_size; scalar_t__ pre_agg_buf_size; scalar_t__ agg_buf_size; scalar_t__ reject_agg_pkt; scalar_t__ pre_reject_agg_pkt; } ;
struct btc_coexist {TYPE_1__ bt_info; struct rtl_priv* adapter; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_1)
{
 bool VAR_2 = 0;
 static unsigned long VAR_3;
 unsigned long VAR_4 = 0;
 struct rtl_priv *VAR_5 = VAR_1->adapter;






 VAR_4 = VAR_0;
 if (FUNC_0(VAR_4 - VAR_3) <= 8000) {

  return;
 }
 VAR_3 = VAR_4;

 if (VAR_1->bt_info.reject_agg_pkt) {
  VAR_2 = 1;
  VAR_1->bt_info.pre_reject_agg_pkt =
   VAR_1->bt_info.reject_agg_pkt;
 } else {
  if (VAR_1->bt_info.pre_reject_agg_pkt) {
   VAR_2 = 1;
   VAR_1->bt_info.pre_reject_agg_pkt =
    VAR_1->bt_info.reject_agg_pkt;
  }

  if (VAR_1->bt_info.pre_bt_ctrl_agg_buf_size !=
      VAR_1->bt_info.bt_ctrl_agg_buf_size) {
   VAR_2 = 1;
   VAR_1->bt_info.pre_bt_ctrl_agg_buf_size =
    VAR_1->bt_info.bt_ctrl_agg_buf_size;
  }

  if (VAR_1->bt_info.bt_ctrl_agg_buf_size) {
   if (VAR_1->bt_info.pre_agg_buf_size !=
       VAR_1->bt_info.agg_buf_size) {
    VAR_2 = 1;
   }
   VAR_1->bt_info.pre_agg_buf_size =
    VAR_1->bt_info.agg_buf_size;
  }

  if (VAR_2)
   FUNC_1(VAR_5);
 }
}
