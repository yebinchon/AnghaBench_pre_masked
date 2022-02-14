
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int irq; } ;
struct adt7316_bus {int multi_write; int multi_read; int write; int read; int irq; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct adt7316_bus*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_4,
        const struct i2c_device_id *VAR_5)
{
 struct adt7316_bus VAR_6 = {
  .client = VAR_4,
  .irq = VAR_4->irq,
  .read = VAR_2,
  .write = VAR_3,
  .multi_read = VAR_0,
  .multi_write = VAR_1,
 };

 return FUNC_0(&VAR_4->dev, &VAR_6, VAR_5->name);
}
