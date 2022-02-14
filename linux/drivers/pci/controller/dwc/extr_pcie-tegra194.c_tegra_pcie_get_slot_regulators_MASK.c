
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {int * slot_ctl_12v; int dev; int * slot_ctl_3v3; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct tegra_pcie_dw *VAR_1)
{
 VAR_1->slot_ctl_3v3 = FUNC_2(VAR_1->dev, "vpcie3v3");
 if (FUNC_0(VAR_1->slot_ctl_3v3)) {
  if (FUNC_1(VAR_1->slot_ctl_3v3) != -VAR_0)
   return FUNC_1(VAR_1->slot_ctl_3v3);

  VAR_1->slot_ctl_3v3 = ((void*)0);
 }

 VAR_1->slot_ctl_12v = FUNC_2(VAR_1->dev, "vpcie12v");
 if (FUNC_0(VAR_1->slot_ctl_12v)) {
  if (FUNC_1(VAR_1->slot_ctl_12v) != -VAR_0)
   return FUNC_1(VAR_1->slot_ctl_12v);

  VAR_1->slot_ctl_12v = ((void*)0);
 }

 return 0;
}
