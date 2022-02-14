
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt9455_info {int boost_voltage; int voreg; TYPE_1__* client; } ;
struct device {int of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct rt9455_info *VAR_1, u32 *VAR_2,
       u32 *VAR_3,
       u32 *VAR_4, u32 *VAR_5)
{
 struct device *VAR_6 = &VAR_1->client->dev;
 int VAR_7;

 if (!VAR_6->of_node && !FUNC_0(VAR_6)) {
  FUNC_1(VAR_6, "No support for either device tree or ACPI\n");
  return -VAR_0;
 }




 VAR_7 = FUNC_2(VAR_6, "richtek,output-charge-current",
           VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_6, "Error: missing \"output-charge-current\" property\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_6, "richtek,end-of-charge-percentage",
           VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_6, "Error: missing \"end-of-charge-percentage\" property\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_6,
           "richtek,battery-regulation-voltage",
           &VAR_1->voreg);
 if (VAR_7) {
  FUNC_1(VAR_6, "Error: missing \"battery-regulation-voltage\" property\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_6, "richtek,boost-output-voltage",
           &VAR_1->boost_voltage);
 if (VAR_7) {
  FUNC_1(VAR_6, "Error: missing \"boost-output-voltage\" property\n");
  return VAR_7;
 }





 FUNC_2(VAR_6, "richtek,min-input-voltage-regulation",
     VAR_4);
 FUNC_2(VAR_6, "richtek,avg-input-current-regulation",
     VAR_5);

 return 0;
}
