
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char tm_wday; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct i2c_client {scalar_t__ irq; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int,unsigned char*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_3(VAR_5);
 unsigned char VAR_8[7];

 int VAR_9, VAR_10;

 if (VAR_7->irq <= 0)
  return -VAR_4;

 VAR_10 = FUNC_2(VAR_7, VAR_1,
         sizeof(VAR_8), VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_1(VAR_7, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6->time.tm_sec = FUNC_0(VAR_8[0] & 0x7F);
 VAR_6->time.tm_min = FUNC_0(VAR_8[1] & 0x7F);
 VAR_6->time.tm_hour = FUNC_0(VAR_8[2] & 0x3F);
 VAR_6->time.tm_mday = FUNC_0(VAR_8[3] & 0x3F);
 VAR_6->time.tm_mon = FUNC_0(VAR_8[4] & 0x1F) - 1;
 VAR_6->time.tm_wday = VAR_8[5] & 0x7;

 VAR_6->enabled = !!(VAR_9 & VAR_0);
 VAR_6->pending = (VAR_8[6] & VAR_3) && VAR_6->enabled;

 return VAR_10;
}
