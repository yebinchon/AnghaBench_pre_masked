
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct device {int dummy; } ;
typedef int alarm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,int,int*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_4(VAR_6);
 u8 VAR_9[6];
 int VAR_10;

 if (VAR_8->irq <= 0)
  return -VAR_4;

 VAR_9[0] = 0x0;
 VAR_9[1] = FUNC_0(VAR_7->time.tm_sec);
 VAR_9[2] = FUNC_0(VAR_7->time.tm_min);
 VAR_9[3] = FUNC_0(VAR_7->time.tm_hour);
 VAR_9[4] = FUNC_0(VAR_7->time.tm_mday);
 VAR_9[5] = FUNC_0(VAR_7->time.tm_mon + 1);

 VAR_10 = FUNC_3(VAR_8, VAR_2,
          sizeof(VAR_9), VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_8->dev, "Unable to write alarm registers\n");
  return -VAR_5;
 }

 if (VAR_7->enabled) {
  VAR_10 = FUNC_2(VAR_8, VAR_3,
      (VAR_1 |
       VAR_0));
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
