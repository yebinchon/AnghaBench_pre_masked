
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
struct rv8803_data {int ctrl; int client; TYPE_3__* rtc; int flags_lock; } ;
struct TYPE_9__ {int tm_sec; int tm_mday; int tm_hour; int tm_min; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_4__ time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
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
 struct rv8803_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct i2c_client*,int ,int,int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,int*) ;
 struct i2c_client* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_9(VAR_6);
 struct rv8803_data *VAR_9 = FUNC_1(VAR_6);
 u8 VAR_10[3];
 u8 VAR_11[2];
 int VAR_12, VAR_13;


 if (VAR_7->time.tm_sec) {
  time64_t VAR_14 = FUNC_5(&VAR_7->time);

  VAR_14 += 60 - VAR_7->time.tm_sec;
  FUNC_4(VAR_14, &VAR_7->time);
 }

 FUNC_2(&VAR_9->flags_lock);

 VAR_12 = FUNC_6(VAR_8, VAR_4, 2, VAR_11);
 if (VAR_12) {
  FUNC_3(&VAR_9->flags_lock);
  return VAR_12;
 }

 VAR_10[0] = FUNC_0(VAR_7->time.tm_min);
 VAR_10[1] = FUNC_0(VAR_7->time.tm_hour);
 VAR_10[2] = FUNC_0(VAR_7->time.tm_mday);

 if (VAR_9->ctrl & (VAR_2 | VAR_3)) {
  VAR_9->ctrl &= ~(VAR_2 | VAR_3);
  VAR_13 = FUNC_7(VAR_9->client, VAR_1,
           VAR_9->ctrl);
  if (VAR_13) {
   FUNC_3(&VAR_9->flags_lock);
   return VAR_13;
  }
 }

 VAR_11[1] &= ~VAR_5;
 VAR_13 = FUNC_7(VAR_9->client, VAR_4, VAR_11[1]);
 FUNC_3(&VAR_9->flags_lock);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_9->client, VAR_0, 3, VAR_10);
 if (VAR_13)
  return VAR_13;

 if (VAR_7->enabled) {
  if (VAR_9->rtc->uie_rtctimer.enabled)
   VAR_9->ctrl |= VAR_3;
  if (VAR_9->rtc->aie_timer.enabled)
   VAR_9->ctrl |= VAR_2;

  VAR_13 = FUNC_7(VAR_9->client, VAR_1,
           VAR_9->ctrl);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
