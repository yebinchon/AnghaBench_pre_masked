
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_wday; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
struct bq32k_regs {int minutes; int seconds; int cent_hours; int date; int day; int month; int years; } ;
typedef int regs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct bq32k_regs*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct bq32k_regs VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, &VAR_8, 0, sizeof(VAR_8));
 if (VAR_9)
  return VAR_9;





 if (VAR_8.minutes & VAR_3)
  return -VAR_5;

 VAR_7->tm_sec = FUNC_0(VAR_8.seconds & VAR_4);
 VAR_7->tm_min = FUNC_0(VAR_8.minutes & VAR_2);
 VAR_7->tm_hour = FUNC_0(VAR_8.cent_hours & VAR_1);
 VAR_7->tm_mday = FUNC_0(VAR_8.date);
 VAR_7->tm_wday = FUNC_0(VAR_8.day) - 1;
 VAR_7->tm_mon = FUNC_0(VAR_8.month) - 1;
 VAR_7->tm_year = FUNC_0(VAR_8.years) +
    ((VAR_8.cent_hours & VAR_0) ? 100 : 0);

 return 0;
}
