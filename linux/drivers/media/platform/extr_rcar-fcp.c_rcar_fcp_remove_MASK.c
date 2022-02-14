
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_fcp_device {int list; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rcar_fcp_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct rcar_fcp_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_0);
 FUNC_0(&VAR_2->list);
 FUNC_2(&VAR_0);

 FUNC_4(&VAR_1->dev);

 return 0;
}
