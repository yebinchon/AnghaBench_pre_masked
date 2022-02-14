
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct sprd_rtc {int valid; scalar_t__ base; int regmap; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sprd_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct sprd_rtc*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct sprd_rtc *VAR_6 = FUNC_0(VAR_4);
 time64_t VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_3, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (!VAR_6->valid) {

  VAR_8 = FUNC_1(VAR_6->regmap, VAR_6->base + VAR_2,
       VAR_0);
  if (VAR_8)
   return VAR_8;





  VAR_8 = FUNC_1(VAR_6->regmap, VAR_6->base + VAR_2,
       VAR_1);
  if (VAR_8)
   return VAR_8;

  VAR_6->valid = 1;
 }

 return 0;
}
