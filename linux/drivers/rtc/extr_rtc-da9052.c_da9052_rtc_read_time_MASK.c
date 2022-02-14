
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;
struct da9052_rtc {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int,int*) ;
 struct da9052_rtc* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct da9052_rtc*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct da9052_rtc *VAR_11 = FUNC_1(VAR_9);
 int VAR_12;
 uint8_t VAR_13[2][6];
 int VAR_14 = 1;
 int VAR_15 = VAR_1;

 VAR_12 = FUNC_0(VAR_11->da9052, VAR_0, 6, &VAR_13[0][0]);
 if (VAR_12) {
  FUNC_4(VAR_11, "Failed to read RTC time : %d\n", VAR_12);
  return VAR_12;
 }

 do {
  VAR_12 = FUNC_0(VAR_11->da9052,
     VAR_0, 6, &VAR_13[VAR_14][0]);
  if (VAR_12) {
   FUNC_4(VAR_11, "Failed to read RTC time : %d\n", VAR_12);
   return VAR_12;
  }

  if (FUNC_2(&VAR_13[0][0], &VAR_13[1][0], 6) == 0) {
   VAR_10->tm_year = (VAR_13[0][5] & VAR_7) + 100;
   VAR_10->tm_mon = (VAR_13[0][4] & VAR_5) - 1;
   VAR_10->tm_mday = VAR_13[0][3] & VAR_2;
   VAR_10->tm_hour = VAR_13[0][2] & VAR_3;
   VAR_10->tm_min = VAR_13[0][1] & VAR_4;
   VAR_10->tm_sec = VAR_13[0][0] & VAR_6;

   return 0;
  }

  VAR_14 = (1-VAR_14);
  FUNC_3(20);

 } while (VAR_15--);

 FUNC_4(VAR_11, "Timed out reading time\n");

 return -VAR_8;
}
