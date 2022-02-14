
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {scalar_t__ driver_data; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct at24_chip_data {int dummy; } ;


 int VAR_0 ;
 struct at24_chip_data const* FUNC_0 (int ) ;
 struct at24_chip_data* FUNC_1 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_device_id* FUNC_2 (int ,int ) ;
 struct at24_chip_data* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (int ,struct device*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static const struct at24_chip_data *FUNC_6(struct device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->of_node;
 const struct at24_chip_data *VAR_5;
 const struct i2c_device_id *VAR_6;

 VAR_6 = FUNC_2(VAR_1, FUNC_5(VAR_3));






 if (VAR_4 && FUNC_4(VAR_2, VAR_3))
  VAR_5 = FUNC_3(VAR_3);
 else if (VAR_6)
  VAR_5 = (void *)VAR_6->driver_data;
 else
  VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5)
  return FUNC_0(-VAR_0);

 return VAR_5;
}
