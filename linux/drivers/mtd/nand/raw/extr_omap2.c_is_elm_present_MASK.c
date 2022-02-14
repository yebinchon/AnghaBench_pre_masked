
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct omap_nand_info {int * elm_dev; TYPE_1__* pdev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct platform_device* FUNC_1 (struct device_node*) ;

__attribute__((used)) static bool FUNC_2(struct omap_nand_info *VAR_0,
      struct device_node *VAR_1)
{
 struct platform_device *VAR_2;


 if (!VAR_1) {
  FUNC_0(&VAR_0->pdev->dev, "ELM devicetree node not found\n");
  return 0;
 }
 VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2) {
  FUNC_0(&VAR_0->pdev->dev, "ELM device not found\n");
  return 0;
 }

 VAR_0->elm_dev = &VAR_2->dev;
 return 1;
}
