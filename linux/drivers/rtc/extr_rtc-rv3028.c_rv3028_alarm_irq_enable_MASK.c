
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv3028_data {int regmap; TYPE_3__* rtc; } ;
struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ enabled; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_6__ {TYPE_2__ aie_timer; TYPE_1__ uie_rtctimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rv3028_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_6, unsigned int VAR_7)
{
 struct rv3028_data *VAR_8 = FUNC_0(VAR_6);
 int VAR_9 = 0, VAR_10;

 if (VAR_7) {
  if (VAR_8->rtc->uie_rtctimer.enabled)
   VAR_9 |= VAR_2;
  if (VAR_8->rtc->aie_timer.enabled)
   VAR_9 |= VAR_1;
 }

 VAR_10 = FUNC_1(VAR_8->regmap, VAR_3,
     VAR_4 | VAR_5, 0);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_8->regmap, VAR_0,
     VAR_2 | VAR_1, VAR_9);
 if (VAR_10)
  return VAR_10;

 return 0;
}
