
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct max8907_rtc {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct max8907_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct max8907_rtc *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6[VAR_2];
 int VAR_7;

 FUNC_3(&VAR_4->time, VAR_6);


 VAR_7 = FUNC_2(VAR_5->regmap, VAR_0, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5->regmap, VAR_1, VAR_6,
    VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4->enabled)
  VAR_7 = FUNC_2(VAR_5->regmap, VAR_0, 0x77);

 return VAR_7;
}
