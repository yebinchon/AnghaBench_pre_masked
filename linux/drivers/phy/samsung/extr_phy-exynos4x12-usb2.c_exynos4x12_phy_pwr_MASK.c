
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_usb2_phy_instance {TYPE_1__* cfg; struct samsung_usb2_phy_driver* drv; } ;
struct samsung_usb2_phy_driver {scalar_t__ reg_phy; } ;
struct TYPE_2__ {int id; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct samsung_usb2_phy_instance *VAR_13, bool VAR_14)
{
 struct samsung_usb2_phy_driver *VAR_15 = VAR_13->drv;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18;
 u32 VAR_19;

 switch (VAR_13->cfg->id) {
 case 131:
  VAR_17 = VAR_3;
  VAR_16 = VAR_11;
  break;
 case 130:
  VAR_17 = VAR_4;
  VAR_16 = VAR_8 |
    VAR_12 |
    VAR_6;
  break;
 case 129:
  VAR_17 = VAR_1;
  VAR_16 = VAR_9 |
    VAR_7;
  break;
 case 128:
  VAR_17 = VAR_2;
  VAR_16 = VAR_10 |
    VAR_7;
  break;
 }

 if (VAR_14) {
  VAR_19 = FUNC_0(VAR_15->reg_phy + VAR_0);
  VAR_19 &= ~VAR_17;
  FUNC_2(VAR_19, VAR_15->reg_phy + VAR_0);

  VAR_18 = FUNC_0(VAR_15->reg_phy + VAR_5);
  VAR_18 |= VAR_16;
  FUNC_2(VAR_18, VAR_15->reg_phy + VAR_5);
  FUNC_1(10);
  VAR_18 &= ~VAR_16;
  FUNC_2(VAR_18, VAR_15->reg_phy + VAR_5);


  FUNC_1(80);
 } else {
  VAR_19 = FUNC_0(VAR_15->reg_phy + VAR_0);
  VAR_19 |= VAR_17;
  FUNC_2(VAR_19, VAR_15->reg_phy + VAR_0);
 }
}
