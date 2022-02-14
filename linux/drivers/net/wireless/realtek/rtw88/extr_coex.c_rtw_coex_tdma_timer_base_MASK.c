
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_stat {int tdma_timer_base; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_3, u8 VAR_4)
{
 struct rtw_coex *VAR_5 = &VAR_3->coex;
 struct rtw_coex_stat *VAR_6 = &VAR_5->stat;
 u8 VAR_7[2] = {0};

 if (VAR_6->tdma_timer_base == VAR_4)
  return;

 VAR_6->tdma_timer_base = VAR_4;

 VAR_7[0] = VAR_0;

 if (VAR_4 == 3)
  VAR_7[1] = VAR_2;
 else
  VAR_7[1] = VAR_1;

 FUNC_1(VAR_3, VAR_7[0], &VAR_7[1]);


 if (VAR_6->tdma_timer_base == 3)
  FUNC_0(VAR_3);
}
