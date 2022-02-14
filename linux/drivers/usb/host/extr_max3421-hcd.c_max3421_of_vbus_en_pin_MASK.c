
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct max3421_hcd_platform_data {void* vbus_active_level; void* vbus_gpout; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,void*,void*) ;
 int FUNC_2 (int ,char*,void**,int) ;

__attribute__((used)) static int
FUNC_3(struct device *VAR_1, struct max3421_hcd_platform_data *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4[2];

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_1->of_node, "maxim,vbus-en-pin", VAR_4, 2);
 if (VAR_3) {
  FUNC_0(VAR_1, "device tree node property 'maxim,vbus-en-pin' is missing\n");
  return VAR_3;
 }
 FUNC_1(VAR_1, "property 'maxim,vbus-en-pin' value is <%d %d>\n", VAR_4[0], VAR_4[1]);

 VAR_2->vbus_gpout = VAR_4[0];
 VAR_2->vbus_active_level = VAR_4[1];

 return 0;
}
