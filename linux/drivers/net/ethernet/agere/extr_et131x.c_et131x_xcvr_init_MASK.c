
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int addr; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct et131x_adapter {int* eeprom_data; TYPE_2__* netdev; } ;
struct TYPE_4__ {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct et131x_adapter*,int ,int*) ;
 int FUNC_1 (struct et131x_adapter*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct et131x_adapter *VAR_8)
{
 u16 VAR_9;
 struct phy_device *VAR_10 = VAR_8->netdev->phydev;
 if ((VAR_8->eeprom_data[1] & 0x4) == 0) {
  FUNC_0(VAR_8, VAR_7, &VAR_9);

  VAR_9 &= (VAR_1 | VAR_0);
  VAR_9 |= (VAR_6 << VAR_2);

  if ((VAR_8->eeprom_data[1] & 0x8) == 0)
   VAR_9 |= (VAR_4 << VAR_3);
  else
   VAR_9 |= (VAR_5 << VAR_3);

  FUNC_1(VAR_8, VAR_10->mdio.addr, VAR_7, VAR_9);
 }
}
