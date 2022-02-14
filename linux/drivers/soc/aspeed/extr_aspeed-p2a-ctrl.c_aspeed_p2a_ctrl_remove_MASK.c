
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct aspeed_p2a_ctrl {int miscdev; } ;


 struct aspeed_p2a_ctrl* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct aspeed_p2a_ctrl *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->miscdev);

 return 0;
}
