
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct samsung_usb2_phy_instance *VAR_8, bool VAR_9)
{
 struct samsung_usb2_phy_driver *VAR_10 = VAR_8->drv;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13;
 u32 VAR_14;

 switch (VAR_8->cfg->id) {
 case 129:
  VAR_12 = VAR_2;
  VAR_11 = VAR_6;
  break;
 case 128:
  VAR_12 = VAR_3;
  VAR_11 = VAR_7 |
    VAR_5;
  break;
 }

 if (VAR_9) {
  FUNC_2(VAR_10->ref_reg_val, VAR_10->reg_phy + VAR_0);

  VAR_14 = FUNC_0(VAR_10->reg_phy + VAR_1);
  VAR_14 &= ~VAR_12;
  FUNC_2(VAR_14, VAR_10->reg_phy + VAR_1);

  VAR_13 = FUNC_0(VAR_10->reg_phy + VAR_4);
  VAR_13 |= VAR_11;
  FUNC_2(VAR_13, VAR_10->reg_phy + VAR_4);
  FUNC_1(10);
  VAR_13 &= ~VAR_11;
  FUNC_2(VAR_13, VAR_10->reg_phy + VAR_4);
 } else {
  VAR_14 = FUNC_0(VAR_10->reg_phy + VAR_1);
  VAR_14 |= VAR_12;
  FUNC_2(VAR_14, VAR_10->reg_phy + VAR_1);
 }
}
