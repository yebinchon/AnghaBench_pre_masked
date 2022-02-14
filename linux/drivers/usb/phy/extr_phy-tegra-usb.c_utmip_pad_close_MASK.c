
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct tegra_usb_phy {int pad_clk; TYPE_1__ u_phy; int pad_rst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tegra_usb_phy *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->pad_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->u_phy.dev,
   "Failed to enable UTMI-pads clock: %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_3(VAR_0->pad_rst);
 if (VAR_1)
  FUNC_2(VAR_0->u_phy.dev,
   "Failed to assert UTMI-pads reset: %d\n", VAR_1);

 FUNC_4(1);

 FUNC_0(VAR_0->pad_clk);

 return VAR_1;
}
