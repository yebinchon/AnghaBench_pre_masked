
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct pcf85063 {int regmap; } ;
struct device {int dummy; } ;
typedef int buf ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 struct pcf85063* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct pcf85063 *VAR_5 = FUNC_1(VAR_3);
 u8 VAR_6[4];
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->regmap, VAR_1,
          VAR_6, sizeof(VAR_6));
 if (VAR_8)
  return VAR_8;

 VAR_4->time.tm_sec = FUNC_0(VAR_6[0]);
 VAR_4->time.tm_min = FUNC_0(VAR_6[1]);
 VAR_4->time.tm_hour = FUNC_0(VAR_6[2]);
 VAR_4->time.tm_mday = FUNC_0(VAR_6[3]);

 VAR_8 = FUNC_3(VAR_5->regmap, VAR_2, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_4->enabled = !!(VAR_7 & VAR_0);

 return 0;
}
