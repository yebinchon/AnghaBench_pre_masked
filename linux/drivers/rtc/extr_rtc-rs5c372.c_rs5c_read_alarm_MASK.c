
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_hour; int tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct rs5c372 {int* regs; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 struct rs5c372* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct rs5c372*) ;
 int FUNC_3 (struct rs5c372*,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_4(VAR_6);
 struct rs5c372 *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_7->time.tm_sec = 0;
 VAR_7->time.tm_min = FUNC_0(VAR_9->regs[VAR_3] & 0x7f);
 VAR_7->time.tm_hour = FUNC_3(VAR_9, VAR_9->regs[VAR_2]);


 VAR_7->enabled = !!(VAR_9->regs[VAR_4] & VAR_0);
 VAR_7->pending = !!(VAR_9->regs[VAR_5] & VAR_1);

 return 0;
}
