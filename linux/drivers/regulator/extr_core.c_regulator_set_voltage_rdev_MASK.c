
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ suspend_state_t ;
struct regulator_dev {int dev; TYPE_3__* supply; TYPE_2__* desc; } ;
struct TYPE_6__ {int rdev; } ;
struct TYPE_5__ {scalar_t__ min_dropout_uV; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ get_voltage_sel; scalar_t__ get_voltage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regulator_dev*,int,int,scalar_t__) ;
 int FUNC_1 (struct regulator_dev*,int,int) ;
 int FUNC_2 (struct regulator_dev*,int,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct regulator_dev*,int,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*,int,int ,scalar_t__) ;

int FUNC_9(struct regulator_dev *VAR_3, int VAR_4,
          int VAR_5, suspend_state_t VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_3->supply &&
     FUNC_7(VAR_3->supply->rdev,
       VAR_2) &&
     (VAR_3->desc->min_dropout_uV || !(VAR_3->desc->ops->get_voltage ||
        VAR_3->desc->ops->get_voltage_sel))) {
  int VAR_10;
  int VAR_11;

  VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_5);
  if (VAR_11 < 0) {
   VAR_9 = VAR_11;
   goto out;
  }

  VAR_7 = FUNC_2(VAR_3, VAR_11, 0);
  if (VAR_7 < 0) {
   VAR_9 = VAR_7;
   goto out;
  }

  VAR_7 += VAR_3->desc->min_dropout_uV;

  VAR_10 = FUNC_5(VAR_3->supply->rdev);
  if (VAR_10 < 0) {
   VAR_9 = VAR_10;
   goto out;
  }

  VAR_8 = VAR_7 - VAR_10;
 }

 if (VAR_8 > 0) {
  VAR_9 = FUNC_8(VAR_3->supply,
    VAR_7, VAR_0, VAR_6);
  if (VAR_9) {
   FUNC_3(&VAR_3->dev, "Failed to increase supply voltage: %d\n",
     VAR_9);
   goto out;
  }
 }

 if (VAR_6 == VAR_1)
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  VAR_9 = FUNC_0(VAR_3, VAR_4,
       VAR_5, VAR_6);
 if (VAR_9 < 0)
  goto out;

 if (VAR_8 < 0) {
  VAR_9 = FUNC_8(VAR_3->supply,
    VAR_7, VAR_0, VAR_6);
  if (VAR_9)
   FUNC_4(&VAR_3->dev, "Failed to decrease supply voltage: %d\n",
     VAR_9);

  VAR_9 = 0;
 }

out:
 return VAR_9;
}
