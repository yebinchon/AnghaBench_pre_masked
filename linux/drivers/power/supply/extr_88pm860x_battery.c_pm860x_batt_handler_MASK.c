
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int present; int lock; int temp_type; int i2c; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pm860x_battery_info*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct pm860x_battery_info *VAR_8 = VAR_7;
 int VAR_9;

 FUNC_1(&VAR_8->lock);
 VAR_9 = FUNC_3(VAR_8->i2c, VAR_1);
 if (VAR_9 & VAR_4) {
  VAR_8->present = 1;
  VAR_8->temp_type = VAR_2;
 } else {
  VAR_8->present = 0;
  VAR_8->temp_type = VAR_3;
 }
 FUNC_2(&VAR_8->lock);

 FUNC_0(VAR_8, &VAR_5);
 return VAR_0;
}
