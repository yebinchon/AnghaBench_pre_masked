
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct esp {int cfreq; int dev; } ;
struct device_node {struct device_node* parent; } ;


 int FUNC_0 (struct device_node*,char*,int ) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct esp *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_1(VAR_0->dev);
 struct device_node *VAR_2, *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->dev.of_node;
 VAR_2 = VAR_3->parent;

 VAR_4 = FUNC_0(VAR_3, "clock-frequency", 0);
 if (VAR_4 == 0)
  VAR_4 = FUNC_0(VAR_2, "clock-frequency", 0);

 VAR_0->cfreq = VAR_4;
}
