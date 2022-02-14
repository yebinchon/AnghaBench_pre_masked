
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int time64_t ;
struct sprd_rtc {scalar_t__ base; int regmap; TYPE_2__* rtc; } ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct TYPE_4__ {TYPE_1__ aie_timer; scalar_t__ registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sprd_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sprd_rtc*,int ,int *) ;
 int FUNC_4 (struct device*,struct rtc_wkalrm*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct sprd_rtc *VAR_6 = FUNC_0(VAR_4);
 time64_t VAR_7;
 int VAR_8;
 u32 VAR_9;
 if (VAR_6->rtc && VAR_6->rtc->registered && VAR_6->rtc->aie_timer.enabled == 0)
  return FUNC_4(VAR_4, VAR_5);

 VAR_8 = FUNC_3(VAR_6, VAR_0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_7, &VAR_5->time);

 VAR_8 = FUNC_1(VAR_6->regmap, VAR_6->base + VAR_2, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_5->enabled = !!(VAR_9 & VAR_1);

 VAR_8 = FUNC_1(VAR_6->regmap, VAR_6->base + VAR_3, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_5->pending = !!(VAR_9 & VAR_1);
 return 0;
}
