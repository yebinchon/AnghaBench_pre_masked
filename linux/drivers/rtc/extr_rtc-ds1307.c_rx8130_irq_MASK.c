
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mutex {int dummy; } ;
struct ds1307 {TYPE_1__* rtc; int regmap; } ;
typedef int irqreturn_t ;
typedef int ctl ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct ds1307 *VAR_8 = VAR_7;
 struct mutex *VAR_9 = &VAR_8->rtc->ops_lock;
 u8 VAR_10[3];
 int VAR_11;

 FUNC_0(VAR_9);


 VAR_11 = FUNC_2(VAR_8->regmap, VAR_4, VAR_10,
          sizeof(VAR_10));
 if (VAR_11 < 0)
  goto out;
 if (!(VAR_10[1] & VAR_5))
  goto out;
 VAR_10[1] &= ~VAR_5;
 VAR_10[2] &= ~VAR_3;

 VAR_11 = FUNC_3(VAR_8->regmap, VAR_4, VAR_10,
    sizeof(VAR_10));
 if (VAR_11 < 0)
  goto out;

 FUNC_4(VAR_8->rtc, 1, VAR_1 | VAR_2);

out:
 FUNC_1(VAR_9);

 return VAR_0;
}
