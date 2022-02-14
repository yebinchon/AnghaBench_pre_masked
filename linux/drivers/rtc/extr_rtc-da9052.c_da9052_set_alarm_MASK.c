
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtc_time {int tm_sec; int tm_year; int tm_mon; int tm_min; int tm_hour; int tm_mday; } ;
struct da9052_rtc {struct da9052* da9052; } ;
struct da9052 {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct da9052*,int ,int,int*) ;
 int FUNC_2 (struct da9052*,int ,int ,int) ;
 int FUNC_3 (struct da9052_rtc*,char*,int) ;
 int FUNC_4 (unsigned long,struct rtc_time*) ;
 int FUNC_5 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct da9052_rtc *VAR_5, struct rtc_time *VAR_6)
{
 struct da9052 *VAR_7 = VAR_5->da9052;
 unsigned long VAR_8;
 int VAR_9;
 uint8_t VAR_10[3];

 VAR_9 = FUNC_5(VAR_6, &VAR_8);
 if (VAR_9 != 0)
  return VAR_9;

 if (VAR_6->tm_sec > 0) {
  VAR_8 += 60 - VAR_6->tm_sec;
  FUNC_4(VAR_8, VAR_6);
 }
 FUNC_0(VAR_6->tm_sec);

 VAR_6->tm_year -= 100;
 VAR_6->tm_mon += 1;

 VAR_9 = FUNC_2(VAR_7, VAR_1,
    VAR_3, VAR_6->tm_min);
 if (VAR_9 != 0) {
  FUNC_3(VAR_5, "Failed to write ALRM MIN: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_10[0] = VAR_6->tm_hour;
 VAR_10[1] = VAR_6->tm_mday;
 VAR_10[2] = VAR_6->tm_mon;

 VAR_9 = FUNC_1(VAR_7, VAR_0, 3, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_2,
    VAR_4, VAR_6->tm_year);
 if (VAR_9 != 0)
  FUNC_3(VAR_5, "Failed to write ALRM YEAR: %d\n", VAR_9);

 return VAR_9;
}
