
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct keystone_rproc {int boot_offset; int dev_ctrl; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int,int *) ;
 int FUNC_5 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1,
         struct keystone_rproc *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct device *VAR_4 = &VAR_1->dev;
 int VAR_5;

 if (!FUNC_3(VAR_3, "ti,syscon-dev")) {
  FUNC_2(VAR_4, "ti,syscon-dev property is absent\n");
  return -VAR_0;
 }

 VAR_2->dev_ctrl =
  FUNC_5(VAR_3, "ti,syscon-dev");
 if (FUNC_0(VAR_2->dev_ctrl)) {
  VAR_5 = FUNC_1(VAR_2->dev_ctrl);
  return VAR_5;
 }

 if (FUNC_4(VAR_3, "ti,syscon-dev", 1,
           &VAR_2->boot_offset)) {
  FUNC_2(VAR_4, "couldn't read the boot register offset\n");
  return -VAR_0;
 }

 return 0;
}
