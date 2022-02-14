
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rv3028_data {int regmap; } ;
struct TYPE_2__ {void* tm_mday; void* tm_hour; void* tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; int pending; TYPE_1__ time; } ;
struct device {int dummy; } ;
typedef int alarmvals ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 struct rv3028_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct rv3028_data *VAR_7 = FUNC_1(VAR_5);
 u8 VAR_8[3];
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = FUNC_2(VAR_7->regmap, VAR_0, VAR_8,
          sizeof(VAR_8));
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_7->regmap, VAR_3, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_7->regmap, VAR_1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_6->time.tm_sec = 0;
 VAR_6->time.tm_min = FUNC_0(VAR_8[0] & 0x7f);
 VAR_6->time.tm_hour = FUNC_0(VAR_8[1] & 0x3f);
 VAR_6->time.tm_mday = FUNC_0(VAR_8[2] & 0x3f);

 VAR_6->enabled = !!(VAR_10 & VAR_2);
 VAR_6->pending = (VAR_9 & VAR_4) && VAR_6->enabled;

 return 0;
}
