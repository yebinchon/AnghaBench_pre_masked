
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,int,int *) ;
 int FUNC_1 (struct device*,int,int,int *) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;

int FUNC_5(struct device *VAR_1, int VAR_2, u8 *VAR_3)
{
 if (FUNC_4("ti,dm8148"))
  return FUNC_0(VAR_1, 0x630, VAR_2, VAR_3);

 if (FUNC_4("ti,am33xx"))
  return FUNC_0(VAR_1, 0x630, VAR_2, VAR_3);

 if (FUNC_3(VAR_1->of_node, "ti,am3517-emac"))
  return FUNC_1(VAR_1, 0x110, VAR_2, VAR_3);

 if (FUNC_3(VAR_1->of_node, "ti,dm816-emac"))
  return FUNC_0(VAR_1, 0x30, VAR_2, VAR_3);

 if (FUNC_4("ti,am43"))
  return FUNC_0(VAR_1, 0x630, VAR_2, VAR_3);

 if (FUNC_4("ti,dra7"))
  return FUNC_1(VAR_1, 0x514, VAR_2, VAR_3);

 FUNC_2(VAR_1, "incompatible machine/device type for reading mac address\n");
 return -VAR_0;
}
