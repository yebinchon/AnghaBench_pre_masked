
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int bat_present; int battery; int lock; int dev; int gpiod; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct sc27xx_fgu_data *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_3(&VAR_3->lock);

 VAR_4 = FUNC_2(VAR_3->gpiod);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->dev, "failed to get gpio state\n");
  FUNC_4(&VAR_3->lock);
  return FUNC_0(VAR_4);
 }

 VAR_3->bat_present = !!VAR_4;

 FUNC_4(&VAR_3->lock);

 FUNC_5(VAR_3->battery);
 return VAR_0;
}
