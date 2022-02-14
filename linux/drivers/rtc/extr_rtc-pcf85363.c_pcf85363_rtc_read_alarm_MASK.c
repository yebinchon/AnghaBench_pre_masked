
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct pcf85363 {int regmap; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 void* FUNC_0 (unsigned char) ;
 struct pcf85363* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,scalar_t__,unsigned char*,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct pcf85363 *VAR_6 = FUNC_1(VAR_4);
 unsigned char VAR_7[VAR_1 - VAR_2 + 1];
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6->regmap, VAR_2, VAR_7,
          sizeof(VAR_7));
 if (VAR_9)
  return VAR_9;

 VAR_5->time.tm_sec = FUNC_0(VAR_7[0]);
 VAR_5->time.tm_min = FUNC_0(VAR_7[1]);
 VAR_5->time.tm_hour = FUNC_0(VAR_7[2]);
 VAR_5->time.tm_mday = FUNC_0(VAR_7[3]);
 VAR_5->time.tm_mon = FUNC_0(VAR_7[4]) - 1;

 VAR_9 = FUNC_3(VAR_6->regmap, VAR_0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_5->enabled = !!(VAR_8 & VAR_3);

 return 0;
}
