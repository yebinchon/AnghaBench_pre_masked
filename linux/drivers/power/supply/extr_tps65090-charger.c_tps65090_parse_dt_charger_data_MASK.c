
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tps65090_platform_data {unsigned int enable_low_current_chrg; int irq_base; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct tps65090_platform_data* FUNC_1 (TYPE_1__*,int,int ) ;
 unsigned int FUNC_2 (struct device_node*,char*) ;

__attribute__((used)) static struct tps65090_platform_data *
  FUNC_3(struct platform_device *VAR_1)
{
 struct tps65090_platform_data *VAR_2;
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 unsigned int VAR_4;

 VAR_2 = FUNC_1(&VAR_1->dev, sizeof(*VAR_2), VAR_0);
 if (!VAR_2) {
  FUNC_0(&VAR_1->dev, "Memory alloc for tps65090_pdata failed\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3, "ti,enable-low-current-chrg");
 VAR_2->enable_low_current_chrg = VAR_4;

 VAR_2->irq_base = -1;

 return VAR_2;

}
