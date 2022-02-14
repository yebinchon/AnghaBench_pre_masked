
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {int enabled; TYPE_1__ time; } ;
struct pcf85363 {int regmap; } ;
struct device {int dummy; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pcf85363*,int ) ;
 unsigned char FUNC_1 (scalar_t__) ;
 struct pcf85363* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,scalar_t__,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct pcf85363 *VAR_4 = FUNC_2(VAR_2);
 unsigned char VAR_5[VAR_0 - VAR_1 + 1];
 int VAR_6;

 VAR_5[0] = FUNC_1(VAR_3->time.tm_sec);
 VAR_5[1] = FUNC_1(VAR_3->time.tm_min);
 VAR_5[2] = FUNC_1(VAR_3->time.tm_hour);
 VAR_5[3] = FUNC_1(VAR_3->time.tm_mday);
 VAR_5[4] = FUNC_1(VAR_3->time.tm_mon + 1);





 VAR_6 = FUNC_0(VAR_4, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_1, VAR_5,
    sizeof(VAR_5));
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_4, VAR_3->enabled);
}
