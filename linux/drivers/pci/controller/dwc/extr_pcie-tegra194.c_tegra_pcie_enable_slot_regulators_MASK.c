
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {scalar_t__ slot_ctl_3v3; scalar_t__ slot_ctl_12v; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct tegra_pcie_dw *VAR_0)
{
 int VAR_1;

 if (VAR_0->slot_ctl_3v3) {
  VAR_1 = FUNC_3(VAR_0->slot_ctl_3v3);
  if (VAR_1 < 0) {
   FUNC_0(VAR_0->dev,
    "Failed to enable 3.3V slot supply: %d\n", VAR_1);
   return VAR_1;
  }
 }

 if (VAR_0->slot_ctl_12v) {
  VAR_1 = FUNC_3(VAR_0->slot_ctl_12v);
  if (VAR_1 < 0) {
   FUNC_0(VAR_0->dev,
    "Failed to enable 12V slot supply: %d\n", VAR_1);
   goto fail_12v_enable;
  }
 }






 if (VAR_0->slot_ctl_3v3 || VAR_0->slot_ctl_12v)
  FUNC_1(100);

 return 0;

fail_12v_enable:
 if (VAR_0->slot_ctl_3v3)
  FUNC_2(VAR_0->slot_ctl_3v3);
 return VAR_1;
}
