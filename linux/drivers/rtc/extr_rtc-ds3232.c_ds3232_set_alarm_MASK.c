
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct ds3232 {scalar_t__ irq; int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct ds3232* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8, struct rtc_wkalrm *VAR_9)
{
 struct ds3232 *VAR_10 = FUNC_1(VAR_8);
 int VAR_11, VAR_12;
 int VAR_13;
 u8 VAR_14[4];

 if (VAR_10->irq <= 0)
  return -VAR_7;

 VAR_14[0] = FUNC_0(VAR_9->time.tm_sec);
 VAR_14[1] = FUNC_0(VAR_9->time.tm_min);
 VAR_14[2] = FUNC_0(VAR_9->time.tm_hour);
 VAR_14[3] = FUNC_0(VAR_9->time.tm_mday);


 VAR_13 = FUNC_3(VAR_10->regmap, VAR_1, &VAR_11);
 if (VAR_13)
  goto out;
 VAR_11 &= ~(VAR_2 | VAR_3);
 VAR_13 = FUNC_4(VAR_10->regmap, VAR_1, VAR_11);
 if (VAR_13)
  goto out;


 VAR_13 = FUNC_3(VAR_10->regmap, VAR_4, &VAR_12);
 if (VAR_13)
  goto out;
 VAR_12 &= ~(VAR_5 | VAR_6);
 VAR_13 = FUNC_4(VAR_10->regmap, VAR_4, VAR_12);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_2(VAR_10->regmap, VAR_0, VAR_14, 4);
 if (VAR_13)
  goto out;

 if (VAR_9->enabled) {
  VAR_11 |= VAR_2;
  VAR_13 = FUNC_4(VAR_10->regmap, VAR_1, VAR_11);
 }
out:
 return VAR_13;
}
