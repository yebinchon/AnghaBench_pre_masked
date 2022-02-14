
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_coexist {scalar_t__ auto_report_2ant; struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ auto_tdma_adjust; } ;
struct TYPE_3__ {int dis_ver_info_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_7(struct btc_coexist *VAR_5)
{
 struct rtl_priv *VAR_6 = VAR_5->adapter;

 FUNC_0(VAR_6, VAR_1, VAR_2,
   "[BTCoex], ==========================Periodical===========================\n");

 if (VAR_4->dis_ver_info_cnt <= 5) {
  VAR_4->dis_ver_info_cnt += 1;
  if (VAR_4->dis_ver_info_cnt == 3) {



   FUNC_0(VAR_6, VAR_1, VAR_2,
     "[BTCoex], Set GNT_BT control by PTA\n");
   FUNC_6(VAR_5,
     VAR_0, 0, 0);
  }
 }

 if (VAR_5->auto_report_2ant) {
  FUNC_4(VAR_5);
 } else {
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);

  if (FUNC_1(VAR_5) ||
      VAR_3->auto_tdma_adjust)
   FUNC_5(VAR_5);
 }
}
