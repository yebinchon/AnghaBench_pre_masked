
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_wday; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;
struct abb5zes3_rtc_data {int regmap; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 struct abb5zes3_rtc_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct abb5zes3_rtc_data *VAR_10 = FUNC_1(VAR_8);
 u8 VAR_11[VAR_5 + VAR_7];
 int VAR_12;

 VAR_11[VAR_5] = FUNC_0(VAR_9->tm_sec);
 VAR_11[VAR_3] = FUNC_0(VAR_9->tm_min);
 VAR_11[VAR_2] = FUNC_0(VAR_9->tm_hour);
 VAR_11[VAR_0] = FUNC_0(VAR_9->tm_mday);
 VAR_11[VAR_1] = FUNC_0(VAR_9->tm_wday);
 VAR_11[VAR_4] = FUNC_0(VAR_9->tm_mon + 1);
 VAR_11[VAR_6] = FUNC_0(VAR_9->tm_year - 100);

 VAR_12 = FUNC_2(VAR_10->regmap, VAR_5,
    VAR_11 + VAR_5,
    VAR_7);

 return VAR_12;
}
