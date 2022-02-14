
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct tegra_usb_phy {int pad_clk; TYPE_1__ u_phy; int pad_rst; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_12(struct tegra_usb_phy *VAR_1)
{
 int VAR_2;

 VAR_1->pad_clk = FUNC_5(VAR_1->u_phy.dev, "utmi-pads");
 if (FUNC_0(VAR_1->pad_clk)) {
  VAR_2 = FUNC_1(VAR_1->pad_clk);
  FUNC_4(VAR_1->u_phy.dev,
   "Failed to get UTMIP pad clock: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->pad_rst = FUNC_6(
      VAR_1->u_phy.dev, "utmi-pads");
 if (FUNC_0(VAR_1->pad_rst)) {
  VAR_2 = FUNC_1(VAR_1->pad_rst);
  FUNC_4(VAR_1->u_phy.dev,
   "Failed to get UTMI-pads reset: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1->pad_clk);
 if (VAR_2) {
  FUNC_4(VAR_1->u_phy.dev,
   "Failed to enable UTMI-pads clock: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_9(&VAR_0);

 VAR_2 = FUNC_8(VAR_1->pad_rst);
 if (VAR_2) {
  FUNC_4(VAR_1->u_phy.dev,
   "Failed to initialize UTMI-pads reset: %d\n", VAR_2);
  goto unlock;
 }

 VAR_2 = FUNC_7(VAR_1->pad_rst);
 if (VAR_2) {
  FUNC_4(VAR_1->u_phy.dev,
   "Failed to assert UTMI-pads reset: %d\n", VAR_2);
  goto unlock;
 }

 FUNC_11(1);

 VAR_2 = FUNC_8(VAR_1->pad_rst);
 if (VAR_2)
  FUNC_4(VAR_1->u_phy.dev,
   "Failed to deassert UTMI-pads reset: %d\n", VAR_2);
unlock:
 FUNC_10(&VAR_0);

 FUNC_2(VAR_1->pad_clk);

 return VAR_2;
}
