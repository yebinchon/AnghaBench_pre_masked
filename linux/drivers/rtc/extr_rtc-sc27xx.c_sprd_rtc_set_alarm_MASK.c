
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time64_t ;
struct sprd_rtc {scalar_t__ base; int regmap; TYPE_3__* rtc; } ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int expires; } ;
struct TYPE_5__ {int enabled; TYPE_1__ node; } ;
struct TYPE_6__ {TYPE_2__ aie_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sprd_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 struct rtc_time FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct rtc_time*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sprd_rtc*,int) ;
 int FUNC_7 (struct device*,struct rtc_wkalrm*) ;
 int FUNC_8 (struct sprd_rtc*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct sprd_rtc *VAR_6 = FUNC_0(VAR_4);
 time64_t VAR_7 = FUNC_5(&VAR_5->time);
 struct rtc_time VAR_8 =
  FUNC_3(VAR_6->rtc->aie_timer.node.expires);
 int VAR_9;
 if (!VAR_6->rtc->aie_timer.enabled || FUNC_4(&VAR_8, &VAR_5->time))
  return FUNC_7(VAR_4, VAR_5);


 VAR_9 = FUNC_2(VAR_6->regmap, VAR_6->base + VAR_2,
      VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_8(VAR_6, VAR_0, VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->enabled) {
  VAR_9 = FUNC_1(VAR_6->regmap,
      VAR_6->base + VAR_3,
      VAR_1,
      VAR_1);
  if (VAR_9)
   return VAR_9;


  VAR_9 = FUNC_6(VAR_6, 0);
 } else {
  FUNC_1(VAR_6->regmap,
       VAR_6->base + VAR_3,
       VAR_1, 0);





  VAR_9 = FUNC_6(VAR_6, 1);
 }

 return VAR_9;
}
