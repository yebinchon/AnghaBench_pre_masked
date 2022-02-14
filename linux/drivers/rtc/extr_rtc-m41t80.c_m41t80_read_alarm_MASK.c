
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int,int*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_3(VAR_5);
 u8 VAR_8[5];
 int VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_7, VAR_3,
         5, VAR_8);
 if (VAR_10 != 5)
  return VAR_10 < 0 ? VAR_10 : -VAR_0;

 VAR_9 = FUNC_1(VAR_7, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6->time.tm_sec = FUNC_0(VAR_8[4] & 0x7f);
 VAR_6->time.tm_min = FUNC_0(VAR_8[3] & 0x7f);
 VAR_6->time.tm_hour = FUNC_0(VAR_8[2] & 0x3f);
 VAR_6->time.tm_mday = FUNC_0(VAR_8[1] & 0x3f);
 VAR_6->time.tm_mon = FUNC_0(VAR_8[0] & 0x3f) - 1;

 VAR_6->enabled = !!(VAR_8[0] & VAR_1);
 VAR_6->pending = (VAR_9 & VAR_2) && VAR_6->enabled;

 return 0;
}
