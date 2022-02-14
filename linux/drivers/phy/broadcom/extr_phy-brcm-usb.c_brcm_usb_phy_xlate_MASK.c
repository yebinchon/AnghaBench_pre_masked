
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy {int dummy; } ;
struct of_phandle_args {int* args; } ;
struct device {int dummy; } ;
struct brcm_usb_phy_data {TYPE_1__* phys; } ;
struct TYPE_2__ {struct phy* phy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct phy* FUNC_0 (int ) ;


 struct brcm_usb_phy_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_3,
          struct of_phandle_args *VAR_4)
{
 struct brcm_usb_phy_data *VAR_5 = FUNC_1(VAR_3);





 switch (VAR_4->args[0]) {
 case 0:
 case 129:
  if (VAR_5->phys[VAR_0].phy)
   return VAR_5->phys[VAR_0].phy;
  FUNC_2(VAR_3, "Error, 2.0 Phy not found\n");
  break;
 case 1:
 case 128:
  if (VAR_5->phys[VAR_1].phy)
   return VAR_5->phys[VAR_1].phy;
  FUNC_2(VAR_3, "Error, 3.0 Phy not found\n");
  break;
 }
 return FUNC_0(-VAR_2);
}
