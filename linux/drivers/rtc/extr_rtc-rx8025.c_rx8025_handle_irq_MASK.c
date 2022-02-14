
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rx8025_data {int ctrl1; TYPE_1__* rtc; } ;
struct mutex {int dummy; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 struct rx8025_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_10, void *VAR_11)
{
 struct i2c_client *VAR_12 = VAR_11;
 struct rx8025_data *VAR_13 = FUNC_1(VAR_12);
 struct mutex *VAR_14 = &VAR_13->rtc->ops_lock;
 int VAR_15;

 FUNC_2(VAR_14);
 VAR_15 = FUNC_5(VAR_12, VAR_9);
 if (VAR_15 < 0)
  goto out;

 if (!(VAR_15 & VAR_7))
  FUNC_0(&VAR_12->dev, "Oscillation stop was detected,"
    "you may have to readjust the clock\n");

 if (VAR_15 & VAR_5) {

  VAR_15 &= ~VAR_5;
  FUNC_4(VAR_13->rtc, 1, VAR_3 | VAR_2);
 }

 if (VAR_15 & VAR_6) {

  VAR_15 &= VAR_6;
  if (FUNC_6(VAR_12, VAR_8,
         VAR_13->ctrl1 & ~VAR_4))
   goto out;
  FUNC_4(VAR_13->rtc, 1, VAR_1 | VAR_2);
 }

out:
 FUNC_3(VAR_14);

 return VAR_0;
}
