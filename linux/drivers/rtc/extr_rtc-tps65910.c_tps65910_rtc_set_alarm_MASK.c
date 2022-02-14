
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65910 {int regmap; } ;
struct TYPE_2__ {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct tps65910* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned char*,int) ;
 int FUNC_4 (struct device*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 unsigned char VAR_4[VAR_0];
 struct tps65910 *VAR_5 = FUNC_2(VAR_2->parent);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_2, 0);
 if (VAR_6)
  return VAR_6;

 VAR_4[0] = FUNC_0(VAR_3->time.tm_sec);
 VAR_4[1] = FUNC_0(VAR_3->time.tm_min);
 VAR_4[2] = FUNC_0(VAR_3->time.tm_hour);
 VAR_4[3] = FUNC_0(VAR_3->time.tm_mday);
 VAR_4[4] = FUNC_0(VAR_3->time.tm_mon + 1);
 VAR_4[5] = FUNC_0(VAR_3->time.tm_year - 100);


 VAR_6 = FUNC_3(VAR_5->regmap, VAR_1,
  VAR_4, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_2, "rtc_set_alarm error %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_3->enabled)
  VAR_6 = FUNC_4(VAR_2, 1);

 return VAR_6;
}
