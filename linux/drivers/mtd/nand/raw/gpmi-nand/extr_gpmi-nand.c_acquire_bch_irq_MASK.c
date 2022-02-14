
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct gpmi_nand_data {int dev; struct platform_device* pdev; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,int ,char const*,struct gpmi_nand_data*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,char const*) ;

__attribute__((used)) static int FUNC_3(struct gpmi_nand_data *VAR_3, irq_handler_t VAR_4)
{
 struct platform_device *VAR_5 = VAR_3->pdev;
 const char *VAR_6 = VAR_1;
 struct resource *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_6);
 if (!VAR_7) {
  FUNC_0(VAR_3->dev, "Can't get resource for %s\n", VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_3->dev, VAR_7->start, VAR_4, 0, VAR_6, VAR_3);
 if (VAR_8)
  FUNC_0(VAR_3->dev, "error requesting BCH IRQ\n");

 return VAR_8;
}
