
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct TYPE_2__ {int reject_agg_pkt; int bt_ctrl_agg_buf_size; int agg_buf_size; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 struct btc_coexist* FUNC_0 (struct rtl_priv*) ;

void FUNC_1(struct rtl_priv *VAR_0, u8 *VAR_1,
      u8 *VAR_2, u8 *VAR_3)
{
 struct btc_coexist *VAR_4 = FUNC_0(VAR_0);

 if (!VAR_4) {
  *VAR_1 = 0;
  *VAR_2 = 0;
  return;
 }

 if (VAR_1)
  *VAR_1 = VAR_4->bt_info.reject_agg_pkt;
 if (VAR_2)
  *VAR_2 = VAR_4->bt_info.bt_ctrl_agg_buf_size;
 if (VAR_3)
  *VAR_3 = VAR_4->bt_info.agg_buf_size;
}
