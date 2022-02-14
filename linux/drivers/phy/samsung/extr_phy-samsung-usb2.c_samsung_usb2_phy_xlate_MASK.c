
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct samsung_usb2_phy_driver {TYPE_2__* instances; TYPE_1__* cfg; } ;
struct phy {int dummy; } ;
struct of_phandle_args {size_t* args; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct phy* phy; } ;
struct TYPE_3__ {size_t num_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct samsung_usb2_phy_driver* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_2,
     struct of_phandle_args *VAR_3)
{
 struct samsung_usb2_phy_driver *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 if (FUNC_1(VAR_3->args[0] >= VAR_4->cfg->num_phys))
  return FUNC_0(-VAR_1);

 return VAR_4->instances[VAR_3->args[0]].phy;
}
