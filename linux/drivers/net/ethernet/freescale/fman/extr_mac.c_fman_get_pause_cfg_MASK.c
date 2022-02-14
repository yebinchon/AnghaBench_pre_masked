
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct phy_device {scalar_t__ asym_pause; scalar_t__ pause; int advertising; int duplex; } ;
struct mac_device {int rx_pause_req; int tx_pause_req; int autoneg_pause; struct phy_device* phy_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct mac_device *VAR_4, bool *VAR_5,
   bool *VAR_6)
{
 struct phy_device *VAR_7 = VAR_4->phy_dev;
 u16 VAR_8, VAR_9;
 u8 VAR_10;

 *VAR_5 = *VAR_6 = 0;

 if (!VAR_7->duplex)
  return;




 if (!VAR_4->autoneg_pause) {
  *VAR_5 = VAR_4->rx_pause_req;
  *VAR_6 = VAR_4->tx_pause_req;
  return;
 }






 VAR_8 = FUNC_0(VAR_7->advertising);


 VAR_9 = 0;
 if (VAR_7->pause)
  VAR_9 |= VAR_3;
 if (VAR_7->asym_pause)
  VAR_9 |= VAR_2;




 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (VAR_10 & VAR_0)
  *VAR_5 = 1;
 if (VAR_10 & VAR_1)
  *VAR_6 = 1;
}
