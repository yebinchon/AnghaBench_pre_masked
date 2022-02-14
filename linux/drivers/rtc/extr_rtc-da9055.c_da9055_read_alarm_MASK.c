
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;
struct da9055 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct da9055*,int ,int,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct da9055 *VAR_6, struct rtc_time *VAR_7)
{
 int VAR_8;
 uint8_t VAR_9[5];

 VAR_8 = FUNC_0(VAR_6, VAR_0, 5, VAR_9);
 if (VAR_8 != 0) {
  FUNC_1(VAR_6->dev, "Failed to group read ALM: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7->tm_year = (VAR_9[4] & VAR_5) + 100;
 VAR_7->tm_mon = (VAR_9[3] & VAR_4) - 1;
 VAR_7->tm_mday = VAR_9[2] & VAR_1;
 VAR_7->tm_hour = VAR_9[1] & VAR_2;
 VAR_7->tm_min = VAR_9[0] & VAR_3;
 VAR_7->tm_sec = 0;

 return FUNC_2(VAR_7);
}
