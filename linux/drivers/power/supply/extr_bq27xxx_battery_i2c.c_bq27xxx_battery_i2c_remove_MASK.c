
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct bq27xxx_device_info {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq27xxx_device_info*) ;
 struct bq27xxx_device_info* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2)
{
 struct bq27xxx_device_info *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3);

 FUNC_3(&VAR_1);
 FUNC_2(&VAR_0, VAR_3->id);
 FUNC_4(&VAR_1);

 return 0;
}
