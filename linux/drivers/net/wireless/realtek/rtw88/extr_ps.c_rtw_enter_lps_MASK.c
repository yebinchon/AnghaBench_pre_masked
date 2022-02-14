
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_vif {int in_lps; } ;
struct rtw_lps_conf {struct rtw_vif* rtwvif; int mode; } ;
struct rtw_dev {struct rtw_lps_conf lps_conf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*) ;

void FUNC_2(struct rtw_dev *VAR_1, struct rtw_vif *VAR_2)
{
 struct rtw_lps_conf *VAR_3 = &VAR_1->lps_conf;

 if (FUNC_0(!VAR_2))
  return;

 if (VAR_2->in_lps)
  return;

 VAR_3->mode = VAR_0;
 VAR_3->rtwvif = VAR_2;
 VAR_2->in_lps = 1;

 FUNC_1(VAR_1);
}
