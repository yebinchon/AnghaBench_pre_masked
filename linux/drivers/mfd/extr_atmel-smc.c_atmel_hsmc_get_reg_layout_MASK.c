
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {struct atmel_hsmc_reg_layout const* data; } ;
struct device_node {int dummy; } ;
struct atmel_hsmc_reg_layout {int dummy; } ;


 int VAR_0 ;
 struct atmel_hsmc_reg_layout const* FUNC_0 (int ) ;
 int VAR_1 ;
 struct of_device_id* FUNC_1 (int ,struct device_node*) ;

const struct atmel_hsmc_reg_layout *
FUNC_2(struct device_node *VAR_2)
{
 const struct of_device_id *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 return VAR_3 ? VAR_3->data : FUNC_0(-VAR_0);
}
