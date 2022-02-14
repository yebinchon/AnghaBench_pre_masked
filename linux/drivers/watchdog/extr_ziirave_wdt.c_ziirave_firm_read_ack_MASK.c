
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int parent; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*) ;
 struct i2c_client* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_2->parent);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "Failed to read status byte\n");
  return VAR_4;
 }

 return VAR_4 == VAR_1 ? 0 : -VAR_0;
}
