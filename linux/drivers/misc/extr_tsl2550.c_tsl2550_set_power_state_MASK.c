
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {int power_state; int operating_mode; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tsl2550_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, int VAR_3)
{
 struct tsl2550_data *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (VAR_3 == 0)
  VAR_5 = FUNC_1(VAR_2, VAR_0);
 else {
  VAR_5 = FUNC_1(VAR_2, VAR_1);


  FUNC_2(VAR_2, VAR_4->operating_mode);
 }

 VAR_4->power_state = VAR_3;

 return VAR_5;
}
