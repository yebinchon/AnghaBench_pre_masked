
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilco_ec_property_msg {int length; int * data; int property_id; } ;
struct wilco_ec_device {int dummy; } ;


 int FUNC_0 (struct wilco_ec_device*,struct wilco_ec_property_msg*) ;

int FUNC_1(struct wilco_ec_device *VAR_0, u32 VAR_1,
          u8 VAR_2)
{
 struct wilco_ec_property_msg VAR_3;

 VAR_3.property_id = VAR_1;
 VAR_3.data[0] = VAR_2;
 VAR_3.length = 1;

 return FUNC_0(VAR_0, &VAR_3);
}
