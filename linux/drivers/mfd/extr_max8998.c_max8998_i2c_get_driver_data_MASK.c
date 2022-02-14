
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 struct of_device_id* FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct i2c_client *VAR_2,
      const struct i2c_device_id *VAR_3)
{
 if (FUNC_0(VAR_0) && VAR_2->dev.of_node) {
  const struct of_device_id *VAR_4;
  VAR_4 = FUNC_1(VAR_1, VAR_2->dev.of_node);
  return (unsigned long)VAR_4->data;
 }

 return VAR_3->driver_data;
}
