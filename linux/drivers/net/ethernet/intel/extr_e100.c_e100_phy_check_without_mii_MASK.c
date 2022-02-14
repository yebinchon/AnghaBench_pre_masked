
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int phy_id; } ;
struct nic {int* eeprom; TYPE_1__ mii; int mdio_ctrl; int netdev; } ;





 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nic*,int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct nic *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_4 = (VAR_3->eeprom[VAR_0] >> 8) & 0x0f;

 switch (VAR_4) {
 case 129:
 case 130:
 case 128:






  FUNC_0(VAR_3, VAR_2, VAR_3->netdev,
      "found MII-less i82503 or 80c24 or other PHY\n");

  VAR_3->mdio_ctrl = VAR_1;
  VAR_3->mii.phy_id = 0;





  VAR_5 = 1;
  break;
 default:
  VAR_5 = 0;
  break;
 }
 return VAR_5;
}
