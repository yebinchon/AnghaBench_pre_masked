
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sun4i_usb_phy_data {TYPE_1__* phys; TYPE_2__* cfg; } ;
struct phy {int dummy; } ;
struct of_phandle_args {size_t* args; } ;
struct device {int dummy; } ;
struct TYPE_4__ {size_t num_phys; int missing_phys; } ;
struct TYPE_3__ {struct phy* phy; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 struct phy* FUNC_1 (int ) ;
 struct sun4i_usb_phy_data* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_1,
     struct of_phandle_args *VAR_2)
{
 struct sun4i_usb_phy_data *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2->args[0] >= VAR_3->cfg->num_phys)
  return FUNC_1(-VAR_0);

 if (VAR_3->cfg->missing_phys & FUNC_0(VAR_2->args[0]))
  return FUNC_1(-VAR_0);

 return VAR_3->phys[VAR_2->args[0]].phy;
}
