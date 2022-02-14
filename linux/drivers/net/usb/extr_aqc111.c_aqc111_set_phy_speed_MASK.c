
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct usbnet {struct aqc111_data* driver_priv; } ;
struct aqc111_data {int phy_cfg; } ;


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
 scalar_t__ VAR_11 ;




 int FUNC_0 (struct usbnet*,int ,int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct usbnet *VAR_12, u8 VAR_13, u16 VAR_14)
{
 struct aqc111_data *VAR_15 = VAR_12->driver_priv;

 VAR_15->phy_cfg &= ~VAR_4;
 VAR_15->phy_cfg |= VAR_9;
 VAR_15->phy_cfg |= VAR_5;
 VAR_15->phy_cfg |= VAR_6;
 VAR_15->phy_cfg &= ~VAR_7;
 VAR_15->phy_cfg |= (3 << VAR_8) &
    VAR_7;

 if (VAR_13 == VAR_11) {
  switch (VAR_14) {
  case 128:
   VAR_15->phy_cfg |= VAR_3;

  case 129:
   VAR_15->phy_cfg |= VAR_2;

  case 130:
   VAR_15->phy_cfg |= VAR_1;

  case 131:
   VAR_15->phy_cfg |= VAR_0;

  }
 } else {
  switch (VAR_14) {
  case 128:
   VAR_15->phy_cfg |= VAR_3;
   break;
  case 129:
   VAR_15->phy_cfg |= VAR_2;
   break;
  case 130:
   VAR_15->phy_cfg |= VAR_1;
   break;
  case 131:
   VAR_15->phy_cfg |= VAR_0;
   break;
  }
 }

 FUNC_0(VAR_12, VAR_10, 0, 0, &VAR_15->phy_cfg);
}
