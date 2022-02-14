
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct pcf85063 {int regmap; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct pcf85063* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct pcf85063 *VAR_7 = FUNC_1(VAR_5);
 u8 VAR_8[5];
 int VAR_9;

 VAR_8[0] = FUNC_0(VAR_6->time.tm_sec);
 VAR_8[1] = FUNC_0(VAR_6->time.tm_min);
 VAR_8[2] = FUNC_0(VAR_6->time.tm_hour);
 VAR_8[3] = FUNC_0(VAR_6->time.tm_mday);
 VAR_8[4] = VAR_0;

 VAR_9 = FUNC_3(VAR_7->regmap, VAR_4,
     VAR_2 | VAR_1, 0);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_3,
    VAR_8, sizeof(VAR_8));
 if (VAR_9)
  return VAR_9;

 return FUNC_3(VAR_7->regmap, VAR_4,
      VAR_2 | VAR_1,
      VAR_6->enabled ? VAR_2 | VAR_1 : VAR_1);
}
