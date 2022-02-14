
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct esp {int flags; int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,int *) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct esp *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_1->dev);
 struct device_node *VAR_3;

 VAR_3 = VAR_2->dev.of_node;
 if (FUNC_0(VAR_3, "differential", ((void*)0)))
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
}
