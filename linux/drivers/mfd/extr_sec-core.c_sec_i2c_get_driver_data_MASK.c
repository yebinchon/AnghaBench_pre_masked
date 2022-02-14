
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 struct of_device_id* FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_1(struct i2c_client *VAR_1,
      const struct i2c_device_id *VAR_2)
{
 return VAR_2->driver_data;
}
