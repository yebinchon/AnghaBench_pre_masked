
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_usb2_phy_instance {TYPE_1__* cfg; struct samsung_usb2_phy_driver* drv; } ;
struct samsung_usb2_phy_driver {int ref_reg_val; scalar_t__ reg_phy; int reg_sys; } ;
struct TYPE_2__ {int id; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (struct samsung_usb2_phy_instance*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct samsung_usb2_phy_instance *VAR_38)
{
 struct samsung_usb2_phy_driver *VAR_39 = VAR_38->drv;
 u32 VAR_40;
 u32 VAR_41;
 u32 VAR_42;
 u32 VAR_43;
 u32 VAR_44;

 switch (VAR_38->cfg->id) {
 case 131:
  FUNC_2(VAR_39->reg_sys,
       VAR_24,
       VAR_23,
       VAR_22);


  VAR_41 = FUNC_1(VAR_39->reg_phy + VAR_26);

  VAR_41 &= ~VAR_29;
  VAR_41 |= VAR_39->ref_reg_val << VAR_30;

  VAR_41 &= ~(VAR_28 |
   VAR_27 |
   VAR_37);
  VAR_41 |= VAR_34 |
   VAR_33 |
   VAR_31 |
   VAR_32;

  VAR_41 &= ~VAR_35;
  VAR_41 |= VAR_25 <<
     VAR_36;
  FUNC_4(VAR_41, VAR_39->reg_phy + VAR_26);
  FUNC_3(100);
  VAR_41 &= ~(VAR_34 |
   VAR_31 |
   VAR_33 |
   VAR_32);
  FUNC_4(VAR_41, VAR_39->reg_phy + VAR_26);


  break;
 case 130:
 case 129:
 case 128:

  VAR_40 = FUNC_1(VAR_39->reg_phy + VAR_6);

  VAR_40 &= ~VAR_10;
  VAR_40 |= VAR_39->ref_reg_val <<
     VAR_11;


  VAR_40 &= ~(VAR_13 |
    VAR_14 |
    VAR_15 |
    VAR_9 |
    VAR_8);
  VAR_40 |= VAR_12 |
    VAR_16 |
    VAR_7;
  FUNC_4(VAR_40, VAR_39->reg_phy + VAR_6);
  FUNC_3(10);
  VAR_40 &= ~(VAR_12 |
    VAR_16);
  FUNC_4(VAR_40, VAR_39->reg_phy + VAR_6);


  VAR_41 = FUNC_1(VAR_39->reg_phy + VAR_26);

  VAR_41 &= ~VAR_29;
  VAR_41 |= VAR_39->ref_reg_val << VAR_30;

  VAR_41 &= ~(VAR_28 |
   VAR_27 |
   VAR_37);
  VAR_41 |= VAR_34 |
   VAR_33 |
   VAR_31 |
   VAR_32;

  VAR_41 &= ~VAR_35;
  VAR_41 |= VAR_25 <<
     VAR_36;
  FUNC_4(VAR_41, VAR_39->reg_phy + VAR_26);
  FUNC_3(10);
  VAR_41 &= ~(VAR_34 |
   VAR_31 |
   VAR_33);


  VAR_44 = (VAR_20 |
    VAR_21 |
    VAR_19);
  FUNC_4(VAR_44, VAR_39->reg_phy + VAR_17);
  FUNC_4(VAR_44, VAR_39->reg_phy + VAR_18);
  FUNC_3(10);
  VAR_44 &= ~VAR_19;
  FUNC_4(VAR_44, VAR_39->reg_phy + VAR_17);
  FUNC_4(VAR_44, VAR_39->reg_phy + VAR_18);


  FUNC_3(80);


  VAR_42 = FUNC_1(VAR_39->reg_phy + VAR_0);
  VAR_42 |= VAR_4 |
   VAR_2 |
   VAR_3 |
   VAR_1;
  FUNC_4(VAR_42, VAR_39->reg_phy + VAR_0);


  VAR_43 = FUNC_1(VAR_39->reg_phy + VAR_5);

  VAR_43 |= 0x1 << 3;
  FUNC_4(VAR_43, VAR_39->reg_phy + VAR_5);

  break;
 }
 FUNC_0(VAR_38, 0);

 return 0;
}
