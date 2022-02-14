
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct rtc_test_data {int rtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtc_test_data* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int,int) ;
 struct rtc_test_data* VAR_3 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_4)
{
 struct rtc_test_data *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);

 FUNC_1(VAR_5->rtc, 1, VAR_0 | VAR_1);
}
