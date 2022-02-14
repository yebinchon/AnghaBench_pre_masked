
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rx8010_data {int ctrlreg; int client; TYPE_4__* rtc; } ;
struct TYPE_5__ {int tm_mday; int tm_hour; int tm_min; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {scalar_t__ enabled; } ;
struct TYPE_6__ {scalar_t__ enabled; } ;
struct TYPE_8__ {TYPE_3__ aie_timer; TYPE_2__ uie_rtctimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 struct rx8010_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct i2c_client *VAR_12 = FUNC_5(VAR_10);
 struct rx8010_data *VAR_13 = FUNC_1(VAR_10);
 u8 VAR_14[3];
 int VAR_15, VAR_16;
 int VAR_17;

 VAR_16 = FUNC_2(VAR_12, VAR_8);
 if (VAR_16 < 0) {
  return VAR_16;
 }

 if (VAR_13->ctrlreg & (VAR_4 | VAR_5)) {
  VAR_13->ctrlreg &= ~(VAR_4 | VAR_5);
  VAR_17 = FUNC_3(VAR_13->client, VAR_3,
      VAR_13->ctrlreg);
  if (VAR_17 < 0) {
   return VAR_17;
  }
 }

 VAR_16 &= ~VAR_9;
 VAR_17 = FUNC_3(VAR_13->client, VAR_8, VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_14[0] = FUNC_0(VAR_11->time.tm_min);
 VAR_14[1] = FUNC_0(VAR_11->time.tm_hour);
 VAR_14[2] = FUNC_0(VAR_11->time.tm_mday);

 VAR_17 = FUNC_4(VAR_13->client, VAR_1,
          2, VAR_14);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_15 = FUNC_2(VAR_12, VAR_6);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 |= VAR_7;
 VAR_17 = FUNC_3(VAR_13->client, VAR_6, VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_14[2] == 0)
  VAR_14[2] |= VAR_0;

 VAR_17 = FUNC_3(VAR_13->client, VAR_2,
     VAR_14[2]);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_11->enabled) {
  if (VAR_13->rtc->uie_rtctimer.enabled)
   VAR_13->ctrlreg |= VAR_5;
  if (VAR_13->rtc->aie_timer.enabled)
   VAR_13->ctrlreg |=
    (VAR_4 | VAR_5);

  VAR_17 = FUNC_3(VAR_13->client, VAR_3,
      VAR_13->ctrlreg);
  if (VAR_17 < 0)
   return VAR_17;
 }

 return 0;
}
