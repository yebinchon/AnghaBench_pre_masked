
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct bq24257_device {int iilimit_setup_work; scalar_t__ iilimit_autoset_enable; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq24257_device*,int ,int) ;
 int FUNC_1 (int *) ;
 struct bq24257_device* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct bq24257_device *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->iilimit_autoset_enable)
  FUNC_1(&VAR_2->iilimit_setup_work);

 FUNC_0(VAR_2, VAR_0, 1);

 return 0;
}
