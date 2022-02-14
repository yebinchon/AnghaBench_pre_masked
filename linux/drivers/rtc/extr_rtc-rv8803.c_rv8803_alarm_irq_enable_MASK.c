
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rv8803_data {int ctrl; int flags_lock; TYPE_3__* rtc; } ;
struct i2c_client {int dummy; } ;
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
 struct rv8803_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, unsigned int VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_5(VAR_6);
 struct rv8803_data *VAR_9 = FUNC_0(VAR_6);
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = VAR_9->ctrl;

 if (VAR_7) {
  if (VAR_9->rtc->uie_rtctimer.enabled)
   VAR_10 |= VAR_2;
  if (VAR_9->rtc->aie_timer.enabled)
   VAR_10 |= VAR_1;
 } else {
  if (!VAR_9->rtc->uie_rtctimer.enabled)
   VAR_10 &= ~VAR_2;
  if (!VAR_9->rtc->aie_timer.enabled)
   VAR_10 &= ~VAR_1;
 }

 FUNC_1(&VAR_9->flags_lock);
 VAR_11 = FUNC_3(VAR_8, VAR_3);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_9->flags_lock);
  return VAR_11;
 }
 VAR_11 &= ~(VAR_4 | VAR_5);
 VAR_12 = FUNC_4(VAR_8, VAR_3, VAR_11);
 FUNC_2(&VAR_9->flags_lock);
 if (VAR_12)
  return VAR_12;

 if (VAR_10 != VAR_9->ctrl) {
  VAR_9->ctrl = VAR_10;
  VAR_12 = FUNC_4(VAR_8, VAR_0, VAR_9->ctrl);
  if (VAR_12)
   return VAR_12;
 }

 return 0;
}
