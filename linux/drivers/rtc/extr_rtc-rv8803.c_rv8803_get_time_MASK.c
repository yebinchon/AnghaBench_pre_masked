
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv8803_data {int client; } ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; int tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct rv8803_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,size_t,int,int*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct rv8803_data *VAR_12 = FUNC_2(VAR_10);
 u8 VAR_13[7];
 u8 VAR_14[7];
 u8 *VAR_15 = VAR_13;
 int VAR_16, VAR_17;

 VAR_17 = FUNC_5(VAR_12->client, VAR_2);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_17 & VAR_3) {
  FUNC_3(VAR_10, "Voltage low, data is invalid.\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_6(VAR_12->client, VAR_7, 7, VAR_15);
 if (VAR_16)
  return VAR_16;

 if ((VAR_13[VAR_7] & 0x7f) == FUNC_1(59)) {
  VAR_16 = FUNC_6(VAR_12->client, VAR_7, 7, VAR_14);
  if (VAR_16)
   return VAR_16;

  if ((VAR_14[VAR_7] & 0x7f) != FUNC_1(59))
   VAR_15 = VAR_14;
 }

 VAR_11->tm_sec = FUNC_0(VAR_15[VAR_7] & 0x7f);
 VAR_11->tm_min = FUNC_0(VAR_15[VAR_5] & 0x7f);
 VAR_11->tm_hour = FUNC_0(VAR_15[VAR_4] & 0x3f);
 VAR_11->tm_wday = FUNC_4(VAR_15[VAR_8] & 0x7f);
 VAR_11->tm_mday = FUNC_0(VAR_15[VAR_1] & 0x3f);
 VAR_11->tm_mon = FUNC_0(VAR_15[VAR_6] & 0x1f) - 1;
 VAR_11->tm_year = FUNC_0(VAR_15[VAR_9]) + 100;

 return 0;
}
