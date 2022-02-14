
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct phy {int dev; } ;
struct ns2_phy_driver {scalar_t__ usb2h_strap_reg; scalar_t__ idmdrd_rst_ctrl; scalar_t__ crmu_usb2_ctrl; scalar_t__ icfgdrd_regs; } ;
struct ns2_phy_data {scalar_t__ new_state; struct ns2_phy_driver* driver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,char*) ;
 struct ns2_phy_data* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,struct ns2_phy_driver*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_12)
{
 struct ns2_phy_data *VAR_13 = FUNC_1(VAR_12);
 struct ns2_phy_driver *VAR_14 = VAR_13->driver;
 u32 VAR_15 = VAR_13->new_state;
 int VAR_16;
 u32 VAR_17;

 if (VAR_15 == VAR_4) {
  FUNC_4(VAR_2, VAR_14->icfgdrd_regs + VAR_5);

  VAR_17 = FUNC_3(VAR_14->idmdrd_rst_ctrl);
  VAR_17 &= ~VAR_7;
  FUNC_4(VAR_17, VAR_14->idmdrd_rst_ctrl);

  VAR_17 = FUNC_3(VAR_14->crmu_usb2_ctrl);
  VAR_17 |= (VAR_0 | VAR_1);
  FUNC_4(VAR_17, VAR_14->crmu_usb2_ctrl);


  VAR_17 = FUNC_3(VAR_14->crmu_usb2_ctrl);
  VAR_17 |= (VAR_10 | VAR_11);
  FUNC_4(VAR_17, VAR_14->crmu_usb2_ctrl);

  VAR_16 = FUNC_2(VAR_6, VAR_9, VAR_14);
  if (VAR_16 < 0) {
   FUNC_0(&VAR_12->dev, "Phy PLL lock failed\n");
   return VAR_16;
  }
 } else {
  FUNC_4(VAR_3, VAR_14->icfgdrd_regs + VAR_5);

  VAR_17 = FUNC_3(VAR_14->crmu_usb2_ctrl);
  VAR_17 |= VAR_0;
  FUNC_4(VAR_17, VAR_14->crmu_usb2_ctrl);

  VAR_16 = FUNC_2(VAR_6, VAR_9, VAR_14);
  if (VAR_16 < 0) {
   FUNC_0(&VAR_12->dev, "Phy PLL lock failed\n");
   return VAR_16;
  }

  VAR_17 = FUNC_3(VAR_14->idmdrd_rst_ctrl);
  VAR_17 &= ~VAR_7;
  FUNC_4(VAR_17, VAR_14->idmdrd_rst_ctrl);


  VAR_17 = FUNC_3(VAR_14->usb2h_strap_reg);
  VAR_17 |= VAR_8;
  FUNC_4(VAR_17, VAR_14->usb2h_strap_reg);
 }

 return 0;
}
