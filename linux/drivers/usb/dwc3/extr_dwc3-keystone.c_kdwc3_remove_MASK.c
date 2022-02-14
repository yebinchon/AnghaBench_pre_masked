
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dwc3_keystone {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (struct dwc3_keystone*) ;
 int VAR_0 ;
 int FUNC_2 (struct device_node*,char*) ;
 struct dwc3_keystone* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct dwc3_keystone *VAR_2 = FUNC_3(VAR_1);
 struct device_node *VAR_3 = VAR_1->dev.of_node;

 if (!FUNC_2(VAR_3, "ti,am654-dwc3"))
  FUNC_1(VAR_2);

 FUNC_0(&VAR_1->dev, ((void*)0), VAR_0);
 FUNC_6(VAR_2->dev);
 FUNC_5(VAR_2->dev);

 FUNC_4(VAR_1, ((void*)0));

 return 0;
}
