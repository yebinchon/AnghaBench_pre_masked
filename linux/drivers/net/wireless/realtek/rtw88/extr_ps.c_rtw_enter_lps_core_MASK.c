
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_lps_conf {int awake_interval; int rlbm; int smart_ps; int state; } ;
struct rtw_dev {struct rtw_lps_conf lps_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_3)
{
 struct rtw_lps_conf *VAR_4 = &VAR_3->lps_conf;

 VAR_4->state = VAR_2;
 VAR_4->awake_interval = 1;
 VAR_4->rlbm = 1;
 VAR_4->smart_ps = 2;

 FUNC_0(VAR_3, VAR_0);

 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_1);
}
