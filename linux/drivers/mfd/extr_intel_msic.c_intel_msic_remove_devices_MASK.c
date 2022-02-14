
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct intel_msic {struct platform_device* pdev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_msic *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->pdev;

 FUNC_0(&VAR_1->dev);
}
