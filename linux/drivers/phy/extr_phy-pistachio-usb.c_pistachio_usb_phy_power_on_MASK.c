
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_usb_phy {unsigned int refclk; int phy_clk; int dev; int cr_top; } ;
struct phy {int dummy; } ;


 unsigned int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 unsigned long* VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long FUNC_5 (int) ;
 struct pistachio_usb_phy* FUNC_6 (struct phy*) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 int FUNC_8 (int ,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct phy *VAR_16)
{
 struct pistachio_usb_phy *VAR_17 = FUNC_6(VAR_16);
 unsigned long VAR_18, VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 VAR_21 = FUNC_3(VAR_17->phy_clk);
 if (VAR_21 < 0) {
  FUNC_4(VAR_17->dev, "Failed to enable PHY clock: %d\n", VAR_21);
  return VAR_21;
 }

 FUNC_8(VAR_17->cr_top, VAR_11,
      VAR_12 <<
      VAR_13,
      VAR_17->refclk << VAR_13);

 VAR_19 = FUNC_2(VAR_17->phy_clk);
 if (VAR_17->refclk == VAR_3 && VAR_19 != 12000000) {
  FUNC_4(VAR_17->dev, "Unsupported rate for XO crystal: %ld\n",
   VAR_19);
  VAR_21 = -VAR_0;
  goto disable_clk;
 }

 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_14); VAR_20++) {
  if (VAR_19 == VAR_14[VAR_20])
   break;
 }
 if (VAR_20 == FUNC_0(VAR_14)) {
  FUNC_4(VAR_17->dev, "Unsupported clock rate: %lu\n", VAR_19);
  VAR_21 = -VAR_0;
  goto disable_clk;
 }

 FUNC_8(VAR_17->cr_top, VAR_4,
      VAR_5 <<
      VAR_6,
      VAR_20 << VAR_6);

 VAR_18 = VAR_15 + FUNC_5(200);
 while (FUNC_9(VAR_15, VAR_18)) {
  unsigned int VAR_22;

  FUNC_7(VAR_17->cr_top, VAR_7, &VAR_22);
  if (VAR_22 & VAR_10) {
   FUNC_4(VAR_17->dev, "VBUS fault detected\n");
   VAR_21 = -VAR_1;
   goto disable_clk;
  }
  if ((VAR_22 & VAR_8) &&
      (VAR_22 & VAR_9))
   return 0;
  FUNC_10(1000, 1500);
 }

 FUNC_4(VAR_17->dev, "Timed out waiting for PHY to power on\n");
 VAR_21 = -VAR_2;

disable_clk:
 FUNC_1(VAR_17->phy_clk);
 return VAR_21;
}
