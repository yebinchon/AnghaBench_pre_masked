
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;
struct da9052_rtc {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int*) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct da9052_rtc*,char*,...) ;
 int FUNC_4 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct da9052_rtc *VAR_8, struct rtc_time *VAR_9)
{
 int VAR_10;
 uint8_t VAR_11[2][5];
 int VAR_12 = 1;
 int VAR_13 = VAR_1;

 VAR_10 = FUNC_0(VAR_8->da9052, VAR_0, 5, &VAR_11[0][0]);
 if (VAR_10) {
  FUNC_3(VAR_8, "Failed to group read ALM: %d\n", VAR_10);
  return VAR_10;
 }

 do {
  VAR_10 = FUNC_0(VAR_8->da9052,
     VAR_0, 5, &VAR_11[VAR_12][0]);
  if (VAR_10) {
   FUNC_3(VAR_8, "Failed to group read ALM: %d\n", VAR_10);
   return VAR_10;
  }

  if (FUNC_1(&VAR_11[0][0], &VAR_11[1][0], 5) == 0) {
   VAR_9->tm_year = (VAR_11[0][4] & VAR_6) + 100;
   VAR_9->tm_mon = (VAR_11[0][3] & VAR_5) - 1;
   VAR_9->tm_mday = VAR_11[0][2] & VAR_2;
   VAR_9->tm_hour = VAR_11[0][1] & VAR_3;
   VAR_9->tm_min = VAR_11[0][0] & VAR_4;
   VAR_9->tm_sec = 0;

   VAR_10 = FUNC_4(VAR_9);
   return VAR_10;
  }

  VAR_12 = (1-VAR_12);
  FUNC_2(20);

 } while (VAR_13--);

 FUNC_3(VAR_8, "Timed out reading alarm time\n");

 return -VAR_7;
}
