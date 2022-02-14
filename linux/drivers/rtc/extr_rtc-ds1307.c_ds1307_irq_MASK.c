
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct ds1307 {TYPE_1__* rtc; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct ds1307 *VAR_9 = VAR_8;
 struct mutex *VAR_10 = &VAR_9->rtc->ops_lock;
 int VAR_11, VAR_12;

 FUNC_0(VAR_10);
 VAR_12 = FUNC_2(VAR_9->regmap, VAR_3, &VAR_11);
 if (VAR_12)
  goto out;

 if (VAR_11 & VAR_0) {
  VAR_11 &= ~VAR_0;
  FUNC_4(VAR_9->regmap, VAR_3, VAR_11);

  VAR_12 = FUNC_3(VAR_9->regmap, VAR_2,
      VAR_1, 0);
  if (VAR_12)
   goto out;

  FUNC_5(VAR_9->rtc, 1, VAR_5 | VAR_6);
 }

out:
 FUNC_1(VAR_10);

 return VAR_4;
}
