
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv3028_data {int regmap; } ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
typedef int date ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct rv3028_data* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int*) ;
 scalar_t__ FUNC_4 (struct rtc_time*) ;
 int FUNC_5 (struct rtc_time*) ;
 int FUNC_6 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct rv3028_data *VAR_5 = FUNC_1(VAR_2->parent);
 struct rtc_time VAR_6;
 int VAR_7, VAR_8;
 u8 VAR_9[6];

 VAR_7 = FUNC_3(VAR_5->regmap, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (!VAR_8)
  return 0;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_1, VAR_9,
          sizeof(VAR_9));
 if (VAR_7)
  return VAR_7;

 VAR_6.tm_sec = FUNC_0(VAR_9[0]);
 VAR_6.tm_min = FUNC_0(VAR_9[1]);
 VAR_6.tm_hour = FUNC_0(VAR_9[2]);
 VAR_6.tm_mday = FUNC_0(VAR_9[3]);
 VAR_6.tm_mon = FUNC_0(VAR_9[4]) - 1;
 VAR_6.tm_year = FUNC_0(VAR_9[5]) + 100;

 VAR_7 = FUNC_5(&VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_6(VAR_4, "%llu\n",
         (unsigned long long)FUNC_4(&VAR_6));
}
