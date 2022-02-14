
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_vif {int in_lps; } ;
struct rtw_lps_conf {struct rtw_vif* rtwvif; int mode; } ;
struct rtw_dev {int lps_work; int hw; struct rtw_lps_conf lps_conf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

void FUNC_1(struct rtw_dev *VAR_1, struct rtw_vif *VAR_2)
{
 struct rtw_lps_conf *VAR_3 = &VAR_1->lps_conf;

 if (!VAR_2->in_lps)
  return;

 VAR_3->mode = VAR_0;
 VAR_3->rtwvif = VAR_2;
 VAR_2->in_lps = 0;

 FUNC_0(VAR_1->hw, &VAR_1->lps_work, 0);
}
