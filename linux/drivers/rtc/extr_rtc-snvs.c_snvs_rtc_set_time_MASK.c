
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_rtc_data {scalar_t__ offset; int regmap; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct snvs_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,unsigned long) ;
 unsigned long FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct snvs_rtc_data*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct snvs_rtc_data *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6 = FUNC_2(VAR_4);
 int VAR_7;


 VAR_7 = FUNC_3(VAR_5, 0);
 if (VAR_7)
  return VAR_7;


 FUNC_1(VAR_5->regmap, VAR_5->offset + VAR_1, VAR_6 << VAR_0);
 FUNC_1(VAR_5->regmap, VAR_5->offset + VAR_2, VAR_6 >> (32 - VAR_0));


 VAR_7 = FUNC_3(VAR_5, 1);

 return VAR_7;
}
