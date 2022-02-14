
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_soctherm {scalar_t__ thermal_irq; scalar_t__ edp_irq; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ,int ,int ,char*,struct tegra_soctherm*) ;
 void* FUNC_4 (struct platform_device*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct device_node*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6,
        struct tegra_soctherm *VAR_7)
{
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_8, VAR_1);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_6->dev, "soctherm_oc_int_init failed\n");
  return VAR_9;
 }

 VAR_7->thermal_irq = FUNC_4(VAR_6, 0);
 if (VAR_7->thermal_irq < 0) {
  FUNC_0(&VAR_6->dev, "get 'thermal_irq' failed.\n");
  return 0;
 }

 VAR_7->edp_irq = FUNC_4(VAR_6, 1);
 if (VAR_7->edp_irq < 0) {
  FUNC_0(&VAR_6->dev, "get 'edp_irq' failed.\n");
  return 0;
 }

 VAR_9 = FUNC_3(&VAR_6->dev,
     VAR_7->thermal_irq,
     VAR_4,
     VAR_5,
     VAR_0,
     FUNC_2(&VAR_6->dev),
     VAR_7);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_6->dev, "request_irq 'thermal_irq' failed.\n");
  return VAR_9;
 }

 VAR_9 = FUNC_3(&VAR_6->dev,
     VAR_7->edp_irq,
     VAR_2,
     VAR_3,
     VAR_0,
     "soctherm_edp",
     VAR_7);
 if (VAR_9 < 0) {
  FUNC_1(&VAR_6->dev, "request_irq 'edp_irq' failed.\n");
  return VAR_9;
 }

 return 0;
}
