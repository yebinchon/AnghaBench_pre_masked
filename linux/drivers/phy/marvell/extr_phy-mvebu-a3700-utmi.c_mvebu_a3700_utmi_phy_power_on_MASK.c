
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct phy {struct device dev; } ;
struct mvebu_a3700_utmi {scalar_t__ regs; int usb_misc; TYPE_1__* caps; } ;
struct TYPE_2__ {int usb32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_2 (struct device*,char*) ;
 struct mvebu_a3700_utmi* FUNC_3 (struct phy*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int,int ,int ) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_29)
{
 struct mvebu_a3700_utmi *VAR_30 = FUNC_3(VAR_29);
 struct device *VAR_31 = &VAR_29->dev;
 int VAR_32 = VAR_30->caps->usb32;
 int VAR_33 = 0;
 u32 VAR_34;





 VAR_34 = FUNC_4(VAR_30->regs + VAR_27);
 VAR_34 &= ~(VAR_17 | VAR_11 | VAR_19);
 VAR_34 |= (VAR_16 << VAR_18) |
        (VAR_10 << VAR_12);
 FUNC_7(VAR_34, VAR_30->regs + VAR_27);


 FUNC_6(VAR_30->usb_misc, FUNC_1(VAR_32),
      FUNC_0(VAR_32) | VAR_20,
      FUNC_0(VAR_32) | VAR_20);

 if (VAR_32) {

  VAR_34 = FUNC_4(VAR_30->regs + VAR_26);
  VAR_34 |= VAR_9;
  FUNC_7(VAR_34, VAR_30->regs + VAR_26);


  VAR_34 = FUNC_4(VAR_30->regs + VAR_25);
  VAR_34 &= ~(VAR_1 | VAR_2 | VAR_6 | VAR_8 |
    VAR_0 | VAR_4 | VAR_3);
  FUNC_7(VAR_34, VAR_30->regs + VAR_25);


  FUNC_6(VAR_30->usb_misc, FUNC_1(VAR_32),
       VAR_23 |
       VAR_22, 0);
 }


 VAR_33 = FUNC_5(VAR_30->regs + VAR_24, VAR_34,
     VAR_34 & VAR_7,
     VAR_13, VAR_14);
 if (VAR_33) {
  FUNC_2(VAR_31, "Failed to end USB2 PLL calibration\n");
  return VAR_33;
 }


 VAR_33 = FUNC_5(VAR_30->regs + VAR_24, VAR_34,
     VAR_34 & VAR_5,
     VAR_13, VAR_14);
 if (VAR_33) {
  FUNC_2(VAR_31, "Failed to end USB2 impedance calibration\n");
  return VAR_33;
 }


 VAR_33 = FUNC_5(VAR_30->regs + VAR_28, VAR_34,
     VAR_34 & VAR_21,
     VAR_13, VAR_14);
 if (VAR_33) {
  FUNC_2(VAR_31, "Failed to end USB2 unknown calibration\n");
  return VAR_33;
 }


 VAR_33 = FUNC_5(VAR_30->regs + VAR_27, VAR_34,
     VAR_34 & VAR_15,
     VAR_13, VAR_14);
 if (VAR_33)
  FUNC_2(VAR_31, "Failed to lock USB2 PLL\n");

 return VAR_33;
}
