
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct keystone_rproc {int rproc; } ;


 int FUNC_0 (int *) ;
 struct keystone_rproc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct keystone_rproc *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(VAR_1->rproc);
 FUNC_3(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
 FUNC_5(VAR_1->rproc);
 FUNC_0(&VAR_0->dev);

 return 0;
}
