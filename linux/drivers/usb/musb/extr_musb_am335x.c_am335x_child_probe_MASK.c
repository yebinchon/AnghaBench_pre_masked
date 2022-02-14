
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,int *,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->dev);

 VAR_1 = FUNC_0(VAR_0->dev.of_node, ((void*)0), ((void*)0), &VAR_0->dev);
 if (VAR_1)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_0->dev);
 return VAR_1;
}
