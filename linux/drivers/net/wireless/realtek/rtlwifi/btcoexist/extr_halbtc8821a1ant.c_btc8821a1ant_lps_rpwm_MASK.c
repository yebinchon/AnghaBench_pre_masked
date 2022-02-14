
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {void* cur_rpwm; void* pre_rpwm; void* cur_lps; void* pre_lps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*,void*,...) ;
 int FUNC_1 (struct btc_coexist*,void*,void*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
      bool VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_3->adapter;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], %s set lps/rpwm = 0x%x/0x%x\n",
   (VAR_4 ? "force to" : ""), VAR_5, VAR_6);
 VAR_2->cur_lps = VAR_5;
 VAR_2->cur_rpwm = VAR_6;

 if (!VAR_4) {
  FUNC_0(VAR_7, VAR_0, VAR_1,
    "[BTCoex], LPS-RxBeaconMode = 0x%x, LPS-RPWM = 0x%x!!\n",
    VAR_2->cur_lps, VAR_2->cur_rpwm);

  if ((VAR_2->pre_lps == VAR_2->cur_lps) &&
      (VAR_2->pre_rpwm == VAR_2->cur_rpwm)) {
   FUNC_0(VAR_7, VAR_0, VAR_1,
     "[BTCoex], LPS-RPWM_Last = 0x%x, LPS-RPWM_Now = 0x%x!!\n",
     VAR_2->pre_rpwm, VAR_2->cur_rpwm);

   return;
  }
 }
 FUNC_1(VAR_3, VAR_5, VAR_6);

 VAR_2->pre_lps = VAR_2->cur_lps;
 VAR_2->pre_rpwm = VAR_2->cur_rpwm;
}
