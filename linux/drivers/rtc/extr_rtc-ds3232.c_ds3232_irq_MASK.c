
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct ds3232 {TYPE_1__* rtc; int dev; int regmap; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ds3232* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 struct device *VAR_9 = VAR_8;
 struct ds3232 *VAR_10 = FUNC_0(VAR_9);
 struct mutex *VAR_11 = &VAR_10->rtc->ops_lock;
 int VAR_12;
 int VAR_13, VAR_14;

 FUNC_2(VAR_11);

 VAR_12 = FUNC_4(VAR_10->regmap, VAR_2, &VAR_13);
 if (VAR_12)
  goto unlock;

 if (VAR_13 & VAR_3) {
  VAR_12 = FUNC_4(VAR_10->regmap, VAR_0, &VAR_14);
  if (VAR_12) {
   FUNC_1(VAR_10->dev,
     "Read Control Register error %d\n", VAR_12);
  } else {

   VAR_14 &= ~(VAR_1);
   VAR_12 = FUNC_5(VAR_10->regmap, VAR_0,
        VAR_14);
   if (VAR_12) {
    FUNC_1(VAR_10->dev,
      "Write Control Register error %d\n",
      VAR_12);
    goto unlock;
   }


   VAR_13 &= ~VAR_3;
   VAR_12 = FUNC_5(VAR_10->regmap, VAR_2, VAR_13);
   if (VAR_12) {
    FUNC_1(VAR_10->dev,
      "Write Status Register error %d\n",
      VAR_12);
    goto unlock;
   }

   FUNC_6(VAR_10->rtc, 1, VAR_5 | VAR_6);
  }
 }

unlock:
 FUNC_3(VAR_11);

 return VAR_4;
}
