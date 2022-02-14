
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct ds1343_priv {int map; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned char) ;
 struct ds1343_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct ds1343_priv *VAR_3 = FUNC_1(VAR_1);
 unsigned char VAR_4[7];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->map, VAR_0, VAR_4, 7);
 if (VAR_5)
  return VAR_5;

 VAR_2->tm_sec = FUNC_0(VAR_4[0]);
 VAR_2->tm_min = FUNC_0(VAR_4[1]);
 VAR_2->tm_hour = FUNC_0(VAR_4[2] & 0x3F);
 VAR_2->tm_wday = FUNC_0(VAR_4[3]) - 1;
 VAR_2->tm_mday = FUNC_0(VAR_4[4]);
 VAR_2->tm_mon = FUNC_0(VAR_4[5] & 0x1F) - 1;
 VAR_2->tm_year = FUNC_0(VAR_4[6]) + 100;

 return 0;
}
