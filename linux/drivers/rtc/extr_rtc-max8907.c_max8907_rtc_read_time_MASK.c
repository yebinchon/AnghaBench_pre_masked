
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int dummy; } ;
struct max8907_rtc {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max8907_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int *,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct max8907_rtc *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->regmap, VAR_0, VAR_5,
          VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(VAR_5, VAR_3);

 return 0;
}
