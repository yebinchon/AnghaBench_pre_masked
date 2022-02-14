
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rx8010_data {int ctrlreg; int client; TYPE_3__* rtc; } ;
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
 struct rx8010_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5,
       unsigned int VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_3(VAR_5);
 struct rx8010_data *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_10 = VAR_8->ctrlreg;

 if (VAR_6) {
  if (VAR_8->rtc->uie_rtctimer.enabled)
   VAR_10 |= VAR_2;
  if (VAR_8->rtc->aie_timer.enabled)
   VAR_10 |= (VAR_1 | VAR_2);
 } else {
  if (!VAR_8->rtc->uie_rtctimer.enabled)
   VAR_10 &= ~VAR_2;
  if (!VAR_8->rtc->aie_timer.enabled)
   VAR_10 &= ~VAR_1;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 &= ~VAR_4;
 VAR_11 = FUNC_2(VAR_8->client, VAR_3, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_10 != VAR_8->ctrlreg) {
  VAR_8->ctrlreg = VAR_10;
  VAR_11 = FUNC_2(VAR_8->client, VAR_0,
      VAR_8->ctrlreg);
  if (VAR_11 < 0)
   return VAR_11;
 }

 return 0;
}
