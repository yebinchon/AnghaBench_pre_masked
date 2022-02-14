
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,struct rtc_time*) ;
 int FUNC_2 (struct device*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 int VAR_3;
 u8 VAR_4[7];

 VAR_3 = FUNC_2(VAR_1, VAR_0, VAR_4, sizeof(VAR_4));

 if (VAR_3)
  return VAR_3;

 VAR_2->tm_sec = FUNC_0(VAR_4[0] & 0x7F);
 VAR_2->tm_min = FUNC_0(VAR_4[1] & 0x7F);
 VAR_2->tm_hour = FUNC_0(VAR_4[2] & 0x3F);
 VAR_2->tm_wday = FUNC_0(VAR_4[3] & 0x07) - 1;
 VAR_2->tm_mday = FUNC_0(VAR_4[4] & 0x3F);
 VAR_2->tm_mon = FUNC_0(VAR_4[5] & 0x1F) - 1;
 VAR_2->tm_year = FUNC_0(VAR_4[6]) + 100;

 FUNC_1(VAR_1, "Read from mcp795: %ptR\n", VAR_2);

 return 0;
}
