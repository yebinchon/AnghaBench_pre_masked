
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_drv_data {int dummy; } ;
struct of_device_id {struct sensor_drv_data const* data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct of_device_id* FUNC_0 (int ,struct device_node*) ;

const struct sensor_drv_data *FUNC_1(
   struct device_node *VAR_1)
{
 const struct of_device_id *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 ? VAR_2->data : ((void*)0);
}
