
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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct samsung_usb2_phy_instance*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct samsung_usb2_phy_instance *VAR_17)
{
 struct samsung_usb2_phy_driver *VAR_18 = VAR_17->drv;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 FUNC_0(VAR_17, 1);

 switch (VAR_17->cfg->id) {
 case 131:
  VAR_20 = FUNC_1(VAR_18->reg_phy + VAR_13);
  VAR_20 |= (VAR_15 |
   VAR_16 |
   VAR_14);
  FUNC_2(VAR_20, VAR_18->reg_phy + VAR_13);
  break;
 case 130:
  VAR_19 = FUNC_1(VAR_18->reg_phy + VAR_0);
  VAR_19 |= (VAR_5 |
    VAR_2 |
    VAR_1 |
    VAR_3 |
    VAR_4);
  FUNC_2(VAR_19, VAR_18->reg_phy + VAR_0);
  break;
 case 129:
 case 128:
  VAR_21 = (VAR_10 |
    VAR_11 |
    VAR_12 |
    VAR_8 |
    VAR_9
    );
  FUNC_2(VAR_21, VAR_18->reg_phy + VAR_6);
  FUNC_2(VAR_21, VAR_18->reg_phy + VAR_7);
  break;
 }

 return 0;
}
