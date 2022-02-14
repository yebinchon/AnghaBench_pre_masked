
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int dev; } ;
struct platform_device {int dummy; } ;


 struct platform_device* FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct w1_slave *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1);
}
