
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_usb2_phy_instance {TYPE_1__* cfg; struct samsung_usb2_phy_driver* drv; } ;
struct samsung_usb2_phy_driver {int ref_reg_val; scalar_t__ reg_phy; } ;
struct TYPE_2__ {int id; } ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct samsung_usb2_phy_instance *VAR_18, bool VAR_19)
{
 struct samsung_usb2_phy_driver *VAR_20 = VAR_18->drv;
 u32 VAR_21 = 0;
 u32 VAR_22 = 0;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;

 switch (VAR_18->cfg->id) {
 case 131:
  VAR_22 = VAR_7;
  VAR_21 = VAR_14;
  break;
 case 130:
  VAR_22 = VAR_8;
  VAR_21 = VAR_15 |
    VAR_16 |
    VAR_17 |
    VAR_10 |
    VAR_11;
  FUNC_2(VAR_19, VAR_20->reg_phy + VAR_0);
  break;
 case 129:
  VAR_22 = VAR_5;
  VAR_21 = VAR_17 |
    VAR_12;
  break;
 case 128:
  VAR_22 = VAR_6;
  VAR_21 = VAR_17 |
    VAR_13;
  break;
 }

 if (VAR_19) {
  VAR_25 = FUNC_0(VAR_20->reg_phy + VAR_1);
  VAR_25 &= ~VAR_2;
  VAR_25 |= VAR_20->ref_reg_val << VAR_3;
  FUNC_2(VAR_25, VAR_20->reg_phy + VAR_1);

  VAR_24 = FUNC_0(VAR_20->reg_phy + VAR_4);
  VAR_24 &= ~VAR_22;
  FUNC_2(VAR_24, VAR_20->reg_phy + VAR_4);

  VAR_23 = FUNC_0(VAR_20->reg_phy + VAR_9);
  VAR_23 |= VAR_21;
  FUNC_2(VAR_23, VAR_20->reg_phy + VAR_9);
  FUNC_1(10);
  VAR_23 &= ~VAR_21;
  FUNC_2(VAR_23, VAR_20->reg_phy + VAR_9);


  FUNC_1(80);
 } else {
  VAR_24 = FUNC_0(VAR_20->reg_phy + VAR_4);
  VAR_24 |= VAR_22;
  FUNC_2(VAR_24, VAR_20->reg_phy + VAR_4);
 }
}
