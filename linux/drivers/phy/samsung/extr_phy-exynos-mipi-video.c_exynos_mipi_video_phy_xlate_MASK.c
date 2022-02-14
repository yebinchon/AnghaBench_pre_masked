
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct of_phandle_args {size_t* args; } ;
struct exynos_mipi_video_phy {size_t num_phys; TYPE_1__* phys; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct phy* phy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct exynos_mipi_video_phy* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_1,
     struct of_phandle_args *VAR_2)
{
 struct exynos_mipi_video_phy *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_2->args[0] >= VAR_3->num_phys))
  return FUNC_0(-VAR_0);

 return VAR_3->phys[VAR_2->args[0]].phy;
}
