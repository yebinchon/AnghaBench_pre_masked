
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rv8803_data {int ctrl; struct i2c_client* client; } ;
struct TYPE_2__ {void* tm_mday; void* tm_hour; void* tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 struct rv8803_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct rv8803_data *VAR_6 = FUNC_1(VAR_4);
 struct i2c_client *VAR_7 = VAR_6->client;
 u8 VAR_8[3];
 int VAR_9, VAR_10;

 VAR_10 = FUNC_3(VAR_7, VAR_0, 3, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_2(VAR_7, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->time.tm_sec = 0;
 VAR_5->time.tm_min = FUNC_0(VAR_8[0] & 0x7f);
 VAR_5->time.tm_hour = FUNC_0(VAR_8[1] & 0x3f);
 VAR_5->time.tm_mday = FUNC_0(VAR_8[2] & 0x3f);

 VAR_5->enabled = !!(VAR_6->ctrl & VAR_1);
 VAR_5->pending = (VAR_9 & VAR_3) && VAR_5->enabled;

 return 0;
}
