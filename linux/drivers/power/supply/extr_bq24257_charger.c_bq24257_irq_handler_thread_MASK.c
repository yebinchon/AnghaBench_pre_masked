
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq24257_state {int power_good; int fault; int status; } ;
struct bq24257_device {int charger; int lock; struct bq24257_state state; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct bq24257_device*,struct bq24257_state*) ;
 int FUNC_1 (struct bq24257_device*,struct bq24257_state*) ;
 int FUNC_2 (struct bq24257_device*,struct bq24257_state*) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 int VAR_3;
 struct bq24257_device *VAR_4 = VAR_2;
 struct bq24257_state VAR_5;

 VAR_3 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_3 < 0)
  return VAR_0;

 if (!FUNC_2(VAR_4, &VAR_5))
  return VAR_0;

 FUNC_3(VAR_4->dev, "irq(state changed): status/fault/pg = %d/%d/%d\n",
  VAR_5.status, VAR_5.fault, VAR_5.power_good);

 FUNC_1(VAR_4, &VAR_5);

 FUNC_4(&VAR_4->lock);
 VAR_4->state = VAR_5;
 FUNC_5(&VAR_4->lock);

 FUNC_6(VAR_4->charger);

 return VAR_0;
}
