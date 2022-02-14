
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct ac100_rtc_dev {TYPE_1__* rtc; int dev; struct regmap* regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ops_lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;
 int FUNC_4 (struct regmap*,int ,unsigned int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct ac100_rtc_dev *VAR_7 = VAR_6;
 struct regmap *VAR_8 = VAR_7->regmap;
 unsigned int VAR_9 = 0;
 int VAR_10;

 FUNC_1(&VAR_7->rtc->ops_lock);


 VAR_10 = FUNC_3(VAR_8, VAR_1, &VAR_9);
 if (VAR_10)
  goto out;

 if (VAR_9 & VAR_0) {

  FUNC_5(VAR_7->rtc, 1, VAR_3 | VAR_4);


  VAR_10 = FUNC_4(VAR_8, VAR_1, VAR_9);
  if (VAR_10)
   goto out;


  VAR_10 = FUNC_0(VAR_7->dev, 0);
  if (VAR_10)
   goto out;
 }

out:
 FUNC_2(&VAR_7->rtc->ops_lock);
 return VAR_2;
}
