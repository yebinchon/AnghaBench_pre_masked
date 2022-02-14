
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct ds3232 {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 struct ds3232* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct ds3232 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;
 u8 VAR_5[7];
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16 = 0;

 VAR_4 = FUNC_2(VAR_3->regmap, VAR_0, VAR_5, 7);
 if (VAR_4)
  return VAR_4;

 VAR_11 = VAR_5[0];
 VAR_10 = VAR_5[1];
 VAR_9 = VAR_5[2];
 VAR_12 = VAR_5[3];
 VAR_8 = VAR_5[4];
 VAR_7 = VAR_5[5];
 VAR_6 = VAR_5[6];



 VAR_13 = VAR_9 & 0x40;
 VAR_14 = VAR_9 & 0x20;
 VAR_15 = VAR_7 & 0x80;



 VAR_2->tm_sec = FUNC_0(VAR_11);
 VAR_2->tm_min = FUNC_0(VAR_10);
 if (VAR_13) {

  if (VAR_14)
   VAR_2->tm_hour = FUNC_0(VAR_9 & 0x1F) + 12;
  else
   VAR_2->tm_hour = FUNC_0(VAR_9 & 0x1F);
 } else {
  VAR_2->tm_hour = FUNC_0(VAR_9);
 }


 VAR_2->tm_wday = FUNC_0(VAR_12) - 1;
 VAR_2->tm_mday = FUNC_0(VAR_8);

 VAR_2->tm_mon = FUNC_0(VAR_7 & 0x7F) - 1;
 if (VAR_15)
  VAR_16 = 100;

 VAR_2->tm_year = FUNC_0(VAR_6) + VAR_16;

 return 0;
}
