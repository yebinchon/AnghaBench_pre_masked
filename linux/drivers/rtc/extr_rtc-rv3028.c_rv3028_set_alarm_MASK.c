
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int time64_t ;
struct rv3028_data {int regmap; TYPE_3__* rtc; } ;
struct TYPE_9__ {int tm_sec; int tm_mday; int tm_hour; int tm_min; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_4__ time; } ;
struct device {int dummy; } ;
typedef int alarmvals ;
struct TYPE_7__ {scalar_t__ enabled; } ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct TYPE_8__ {TYPE_2__ aie_timer; TYPE_1__ uie_rtctimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct rv3028_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct rv3028_data *VAR_8 = FUNC_1(VAR_6);
 u8 VAR_9[3];
 u8 VAR_10 = 0;
 int VAR_11;


 if (VAR_7->time.tm_sec) {
  time64_t VAR_12 = FUNC_5(&VAR_7->time);

  VAR_12 += 60 - VAR_7->time.tm_sec;
  FUNC_4(VAR_12, &VAR_7->time);
 }

 VAR_11 = FUNC_3(VAR_8->regmap, VAR_1,
     VAR_2 | VAR_3, 0);
 if (VAR_11)
  return VAR_11;

 VAR_9[0] = FUNC_0(VAR_7->time.tm_min);
 VAR_9[1] = FUNC_0(VAR_7->time.tm_hour);
 VAR_9[2] = FUNC_0(VAR_7->time.tm_mday);

 VAR_11 = FUNC_3(VAR_8->regmap, VAR_4,
     VAR_5, 0);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_8->regmap, VAR_0, VAR_9,
    sizeof(VAR_9));
 if (VAR_11)
  return VAR_11;

 if (VAR_7->enabled) {
  if (VAR_8->rtc->uie_rtctimer.enabled)
   VAR_10 |= VAR_3;
  if (VAR_8->rtc->aie_timer.enabled)
   VAR_10 |= VAR_2;
 }

 VAR_11 = FUNC_3(VAR_8->regmap, VAR_1,
     VAR_3 | VAR_2, VAR_10);

 return VAR_11;
}
