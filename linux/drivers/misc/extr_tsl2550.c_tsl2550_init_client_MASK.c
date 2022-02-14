
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {int power_state; size_t operating_mode; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 struct tsl2550_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3)
{
 struct tsl2550_data *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;





 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 != VAR_2)
  return -VAR_0;
 VAR_4->power_state = 1;


 VAR_5 = FUNC_2(VAR_3,
       VAR_1[VAR_4->operating_mode]);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
