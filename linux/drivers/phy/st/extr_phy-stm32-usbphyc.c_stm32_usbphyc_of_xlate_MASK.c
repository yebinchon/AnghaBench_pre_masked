
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_usbphyc_phy {int index; struct phy* phy; } ;
struct stm32_usbphyc {int nphys; scalar_t__ switch_setup; struct stm32_usbphyc_phy** phys; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct of_phandle_args {int args_count; scalar_t__* args; struct device_node* np; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct stm32_usbphyc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct stm32_usbphyc*,scalar_t__) ;

__attribute__((used)) static struct phy *FUNC_4(struct device *VAR_2,
       struct of_phandle_args *VAR_3)
{
 struct stm32_usbphyc *VAR_4 = FUNC_2(VAR_2);
 struct stm32_usbphyc_phy *VAR_5 = ((void*)0);
 struct device_node *VAR_6 = VAR_3->np;
 int VAR_7 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4->nphys; VAR_7++) {
  if (VAR_6 == VAR_4->phys[VAR_7]->phy->dev.of_node) {
   VAR_5 = VAR_4->phys[VAR_7];
   break;
  }
 }
 if (!VAR_5) {
  FUNC_1(VAR_2, "failed to find phy\n");
  return FUNC_0(-VAR_1);
 }

 if (((VAR_5->index == 0) && (VAR_3->args_count != 0)) ||
     ((VAR_5->index == 1) && (VAR_3->args_count != 1))) {
  FUNC_1(VAR_2, "invalid number of cells for phy port%d\n",
   VAR_5->index);
  return FUNC_0(-VAR_1);
 }


 if (VAR_5->index == 1) {
  if (VAR_4->switch_setup < 0) {
   FUNC_3(VAR_4, VAR_3->args[0]);
  } else {
   if (VAR_3->args[0] != VAR_4->switch_setup) {
    FUNC_1(VAR_2, "phy port1 already used\n");
    return FUNC_0(-VAR_0);
   }
  }
 }

 return VAR_5->phy;
}
