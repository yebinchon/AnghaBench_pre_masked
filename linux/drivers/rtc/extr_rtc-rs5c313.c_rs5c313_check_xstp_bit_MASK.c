
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_mday; int tm_mon; int tm_year; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtc_time*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct rtc_time*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct rtc_time VAR_5;
 int VAR_6;

 VAR_1;
 if (FUNC_3() & VAR_3) {

  FUNC_6(0x00);

  FUNC_5(0x07);


  for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
   if (!(FUNC_3() & VAR_2))
    break;
   VAR_4;
  }

  FUNC_0(&VAR_5, 0, sizeof(struct rtc_time));
  VAR_5.tm_mday = 1;
  VAR_5.tm_mon = 1 - 1;
  VAR_5.tm_year = 2000 - 1900;

  FUNC_4(((void*)0), &VAR_5);
  FUNC_2("invalid value, resetting to 1 Jan 2000\n");
 }
 VAR_0;
 FUNC_1(700);
}
