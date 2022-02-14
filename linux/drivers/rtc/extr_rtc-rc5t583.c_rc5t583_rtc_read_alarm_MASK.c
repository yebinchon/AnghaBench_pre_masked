
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct rc5t583 {int regmap; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct rc5t583* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned char*,int) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct rc5t583 *VAR_6 = FUNC_2(VAR_4->parent);
 unsigned char VAR_7[VAR_0];
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6->regmap, VAR_1, VAR_7,
  VAR_0);
 if (VAR_9 < 0) {
  FUNC_1(VAR_4, "rtc_read_alarm error %d\n", VAR_9);
  return VAR_9;
 }

 VAR_5->time.tm_sec = 0;
 VAR_5->time.tm_min = FUNC_0(VAR_7[0]);
 VAR_5->time.tm_hour = FUNC_0(VAR_7[1]);
 VAR_5->time.tm_mday = FUNC_0(VAR_7[2]);
 VAR_5->time.tm_mon = FUNC_0(VAR_7[3]) - 1;
 VAR_5->time.tm_year = FUNC_0(VAR_7[4]) + 100;

 VAR_9 = FUNC_4(VAR_6->regmap, VAR_2, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_8 & VAR_3)
  VAR_5->enabled = 1;

 return VAR_9;
}
