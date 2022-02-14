
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int time64_t ;
struct sprd_rtc {scalar_t__ base; int regmap; } ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sprd_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sprd_rtc*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct sprd_rtc *VAR_6 = FUNC_0(VAR_4);
 time64_t VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_1, &VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_7, &VAR_5->time);

 VAR_9 = FUNC_1(VAR_6->regmap, VAR_6->base + VAR_2, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_5->enabled = !!(VAR_8 & VAR_0);

 VAR_9 = FUNC_1(VAR_6->regmap, VAR_6->base + VAR_3, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_5->pending = !!(VAR_8 & VAR_0);
 return 0;
}
