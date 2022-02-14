
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct of_phandle_args {int* args; } ;
struct device {int dummy; } ;
struct bcm_usb_phy_cfg {scalar_t__ version; struct phy* phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct bcm_usb_phy_cfg* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_3,
         struct of_phandle_args *VAR_4)
{
 struct bcm_usb_phy_cfg *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 if (VAR_5->version == VAR_0) {
  VAR_6 = VAR_4->args[0];

  if (FUNC_1(VAR_6 > 1))
   return FUNC_0(-VAR_2);

  return VAR_5[VAR_6].phy;
 } else
  return VAR_5->phy;
}
