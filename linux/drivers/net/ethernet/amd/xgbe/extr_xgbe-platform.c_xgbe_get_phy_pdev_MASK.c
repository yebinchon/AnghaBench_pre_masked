
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct platform_device* platdev; int dev; scalar_t__ use_acpi; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct platform_device* FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static struct platform_device *FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct platform_device *VAR_1;

 if (VAR_0->use_acpi) {
  FUNC_0(VAR_0->dev);
  VAR_1 = VAR_0->platdev;
 } else {
  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
