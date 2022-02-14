
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct bcma_hcd_device {struct bcma_device* core; } ;
struct bcma_device {struct device dev; } ;


 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (int ,int *,struct device*) ;

__attribute__((used)) static int FUNC_2(struct bcma_hcd_device *VAR_0)
{
 struct bcma_device *VAR_1 = VAR_0->core;
 struct device *VAR_2 = &VAR_1->dev;

 FUNC_0(VAR_1, 0);

 FUNC_1(VAR_2->of_node, ((void*)0), VAR_2);

 return 0;
}
