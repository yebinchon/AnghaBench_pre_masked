
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx8010_data {int client; } ;
struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* FUNC_0 (int) ;
 struct rx8010_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,size_t,int,int*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct rx8010_data *VAR_13 = FUNC_1(VAR_11);
 u8 VAR_14[7];
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_4(VAR_13->client, VAR_2);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_15 & VAR_3) {
  FUNC_2(VAR_11, "Frequency stop detected\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_5(VAR_13->client, VAR_8,
         7, VAR_14);
 if (VAR_16 != 7)
  return VAR_16 < 0 ? VAR_16 : -VAR_1;

 VAR_12->tm_sec = FUNC_0(VAR_14[VAR_8 - VAR_8] & 0x7f);
 VAR_12->tm_min = FUNC_0(VAR_14[VAR_6 - VAR_8] & 0x7f);
 VAR_12->tm_hour = FUNC_0(VAR_14[VAR_4 - VAR_8] & 0x3f);
 VAR_12->tm_mday = FUNC_0(VAR_14[VAR_5 - VAR_8] & 0x3f);
 VAR_12->tm_mon = FUNC_0(VAR_14[VAR_7 - VAR_8] & 0x1f) - 1;
 VAR_12->tm_year = FUNC_0(VAR_14[VAR_10 - VAR_8]) + 100;
 VAR_12->tm_wday = FUNC_3(VAR_14[VAR_9 - VAR_8] & 0x7f);

 return 0;
}
