
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rtc_time {int tm_year; int tm_mday; int tm_mon; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(u16 *VAR_1, struct rtc_time *VAR_2)
{
 int VAR_3;
 *VAR_1 = 0;


 if (VAR_2->tm_year < 100 || VAR_2->tm_year > 199)
  return -VAR_0;

 for (VAR_3 = 2000; VAR_3 < 1900 + VAR_2->tm_year; VAR_3++)
  *VAR_1 += FUNC_0(1, 12, VAR_3);

 *VAR_1 += FUNC_0(VAR_2->tm_mday, VAR_2->tm_mon, 1900 + VAR_2->tm_year);

 return 0;
}
