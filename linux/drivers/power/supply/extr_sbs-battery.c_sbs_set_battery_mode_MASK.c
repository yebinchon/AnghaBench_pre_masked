
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
typedef enum sbs_battery_mode { ____Placeholder_sbs_battery_mode } sbs_battery_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static enum sbs_battery_mode FUNC_3(struct i2c_client *VAR_3,
 enum sbs_battery_mode VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 if ((VAR_6 & VAR_1) == VAR_4)
  return VAR_4;

 if (VAR_4 == VAR_0)
  VAR_5 = VAR_6 & ~VAR_1;
 else
  VAR_5 = VAR_6 | VAR_1;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_5);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(1000, 2000);

 return VAR_6 & VAR_1;
}
