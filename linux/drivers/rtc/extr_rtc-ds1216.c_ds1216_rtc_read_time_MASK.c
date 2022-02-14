
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_hour; int tm_wday; int tm_year; void* tm_mon; void* tm_mday; void* tm_min; void* tm_sec; } ;
struct ds1216_regs {int sec; int min; int hour; int wday; int mday; int month; int year; } ;
struct ds1216_priv {int ioaddr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct ds1216_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct ds1216_priv *VAR_4 = FUNC_1(VAR_2);
 struct ds1216_regs VAR_5;

 FUNC_3(VAR_4->ioaddr);
 FUNC_2(VAR_4->ioaddr, (u8 *)&VAR_5);

 VAR_3->tm_sec = FUNC_0(VAR_5.sec);
 VAR_3->tm_min = FUNC_0(VAR_5.min);
 if (VAR_5.hour & VAR_0) {

  VAR_3->tm_hour = FUNC_0(VAR_5.hour & 0x1f);
  if (VAR_5.hour & VAR_1)
   VAR_3->tm_hour += 12;
 } else
  VAR_3->tm_hour = FUNC_0(VAR_5.hour & 0x3f);
 VAR_3->tm_wday = (VAR_5.wday & 7) - 1;
 VAR_3->tm_mday = FUNC_0(VAR_5.mday & 0x3f);
 VAR_3->tm_mon = FUNC_0(VAR_5.month & 0x1f);
 VAR_3->tm_year = FUNC_0(VAR_5.year);
 if (VAR_3->tm_year < 70)
  VAR_3->tm_year += 100;

 return 0;
}
