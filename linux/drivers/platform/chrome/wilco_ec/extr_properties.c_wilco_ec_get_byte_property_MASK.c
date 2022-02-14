
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilco_ec_property_msg {int length; int * data; int property_id; } ;
struct wilco_ec_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wilco_ec_device*,struct wilco_ec_property_msg*) ;

int FUNC_1(struct wilco_ec_device *VAR_1, u32 VAR_2,
          u8 *VAR_3)
{
 struct wilco_ec_property_msg VAR_4;
 int VAR_5;

 VAR_4.property_id = VAR_2;

 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_4.length != 1)
  return -VAR_0;

 *VAR_3 = VAR_4.data[0];

 return 0;
}
