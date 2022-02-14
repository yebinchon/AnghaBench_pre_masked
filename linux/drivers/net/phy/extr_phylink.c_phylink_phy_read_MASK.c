
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phylink {struct phy_device* phydev; } ;
struct TYPE_4__ {int bus; } ;
struct TYPE_3__ {int devices_in_package; } ;
struct phy_device {TYPE_2__ mdio; TYPE_1__ c45_ids; scalar_t__ is_c45; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct phylink *VAR_6, unsigned int VAR_7,
       unsigned int VAR_8)
{
 struct phy_device *VAR_9 = VAR_6->phydev;
 int VAR_10, VAR_11;

 if (FUNC_2(VAR_7)) {
  VAR_10 = FUNC_3(VAR_7);
  VAR_11 = FUNC_1(VAR_7);
  VAR_11 = VAR_5 | VAR_11 << 16 | VAR_8;
 } else if (VAR_9->is_c45) {
  switch (VAR_8) {
  case 132:
  case 131:
  case 129:
  case 128:
   VAR_11 = FUNC_0(VAR_9->c45_ids.devices_in_package);
   break;
  case 133:
  case 130:
   if (!(VAR_9->c45_ids.devices_in_package & VAR_3))
    return -VAR_0;
   VAR_11 = VAR_4;
   if (VAR_8 == 133)
    VAR_8 = VAR_1;
   else
    VAR_8 = VAR_2;
   break;
  default:
   return -VAR_0;
  }
  VAR_10 = VAR_7;
  VAR_11 = VAR_5 | VAR_11 << 16 | VAR_8;
 } else {
  VAR_10 = VAR_7;
  VAR_11 = VAR_8;
 }
 return FUNC_4(VAR_6->phydev->mdio.bus, VAR_10, VAR_11);
}
