
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rx8010_data {int ctrlreg; struct i2c_client* client; } ;
struct TYPE_2__ {void* tm_mday; void* tm_hour; void* tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 struct rx8010_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct rx8010_data *VAR_8 = FUNC_1(VAR_6);
 struct i2c_client *VAR_9 = VAR_8->client;
 u8 VAR_10[3];
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_9, VAR_2, 3, VAR_10);
 if (VAR_12 != 3)
  return VAR_12 < 0 ? VAR_12 : -VAR_0;

 VAR_11 = FUNC_2(VAR_9, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_7->time.tm_sec = 0;
 VAR_7->time.tm_min = FUNC_0(VAR_10[0] & 0x7f);
 VAR_7->time.tm_hour = FUNC_0(VAR_10[1] & 0x3f);

 if (!(VAR_10[2] & VAR_1))
  VAR_7->time.tm_mday = FUNC_0(VAR_10[2] & 0x7f);

 VAR_7->enabled = !!(VAR_8->ctrlreg & VAR_3);
 VAR_7->pending = (VAR_11 & VAR_5) && VAR_7->enabled;

 return 0;
}
