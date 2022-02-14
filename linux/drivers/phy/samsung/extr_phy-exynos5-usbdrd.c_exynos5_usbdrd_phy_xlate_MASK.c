
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct of_phandle_args {size_t* args; } ;
struct exynos5_usbdrd_phy {TYPE_1__* phys; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct phy* phy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct exynos5_usbdrd_phy* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_2,
     struct of_phandle_args *VAR_3)
{
 struct exynos5_usbdrd_phy *VAR_4 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_3->args[0] >= VAR_1))
  return FUNC_0(-VAR_0);

 return VAR_4->phys[VAR_3->args[0]].phy;
}
