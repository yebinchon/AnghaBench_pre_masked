
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv3028_data {int regmap; } ;
struct rtc_time {int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;
typedef int date ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 struct rv3028_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,size_t,int*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct rv3028_data *VAR_11 = FUNC_1(VAR_9);
 u8 VAR_12[7];
 int VAR_13;

 VAR_12[VAR_4] = FUNC_0(VAR_10->tm_sec);
 VAR_12[VAR_2] = FUNC_0(VAR_10->tm_min);
 VAR_12[VAR_1] = FUNC_0(VAR_10->tm_hour);
 VAR_12[VAR_7] = 1 << (VAR_10->tm_wday);
 VAR_12[VAR_0] = FUNC_0(VAR_10->tm_mday);
 VAR_12[VAR_3] = FUNC_0(VAR_10->tm_mon + 1);
 VAR_12[VAR_8] = FUNC_0(VAR_10->tm_year - 100);





 VAR_13 = FUNC_2(VAR_11->regmap, VAR_4, VAR_12,
    sizeof(VAR_12));
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_11->regmap, VAR_5,
     VAR_6, 0);

 return VAR_13;
}
