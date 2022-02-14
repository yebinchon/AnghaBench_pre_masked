
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_pipe3 {scalar_t__ mode; int dpll_reset_reg; int * dpll_reset_syscon; int pcie_pcs_reg; int * pcs_syscon; int * control_dev; int * phy_power_syscon; int power_reg; struct device* dev; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct platform_device* FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int,int *) ;
 void* FUNC_7 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_8(struct ti_pipe3 *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct device_node *VAR_6;
 struct platform_device *VAR_7;

 VAR_3->phy_power_syscon = FUNC_7(VAR_5,
       "syscon-phy-power");
 if (FUNC_0(VAR_3->phy_power_syscon)) {
  FUNC_1(VAR_4,
   "can't get syscon-phy-power, using control device\n");
  VAR_3->phy_power_syscon = ((void*)0);
 } else {
  if (FUNC_6(VAR_5,
            "syscon-phy-power", 1,
            &VAR_3->power_reg)) {
   FUNC_2(VAR_4, "couldn't get power reg. offset\n");
   return -VAR_0;
  }
 }

 if (!VAR_3->phy_power_syscon) {
  VAR_6 = FUNC_5(VAR_5, "ctrl-module", 0);
  if (!VAR_6) {
   FUNC_2(VAR_4, "Failed to get control device phandle\n");
   return -VAR_0;
  }

  VAR_7 = FUNC_4(VAR_6);
  if (!VAR_7) {
   FUNC_2(VAR_4, "Failed to get control device\n");
   return -VAR_0;
  }

  VAR_3->control_dev = &VAR_7->dev;
 }

 if (VAR_3->mode == VAR_1) {
  VAR_3->pcs_syscon = FUNC_7(VAR_5,
          "syscon-pcs");
  if (FUNC_0(VAR_3->pcs_syscon)) {
   FUNC_1(VAR_4,
    "can't get syscon-pcs, using omap control\n");
   VAR_3->pcs_syscon = ((void*)0);
  } else {
   if (FUNC_6(VAR_5,
             "syscon-pcs", 1,
             &VAR_3->pcie_pcs_reg)) {
    FUNC_2(VAR_4,
     "couldn't get pcie pcs reg. offset\n");
    return -VAR_0;
   }
  }
 }

 if (VAR_3->mode == VAR_2) {
  VAR_3->dpll_reset_syscon = FUNC_7(VAR_5,
       "syscon-pllreset");
  if (FUNC_0(VAR_3->dpll_reset_syscon)) {
   FUNC_3(VAR_4,
     "can't get syscon-pllreset, sata dpll won't idle\n");
   VAR_3->dpll_reset_syscon = ((void*)0);
  } else {
   if (FUNC_6(VAR_5,
             "syscon-pllreset", 1,
             &VAR_3->dpll_reset_reg)) {
    FUNC_2(VAR_4,
     "couldn't get pllreset reg. offset\n");
    return -VAR_0;
   }
  }
 }

 return 0;
}
