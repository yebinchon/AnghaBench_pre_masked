
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_eeprom {int len; scalar_t__ offset; } ;
struct ef4_nic {scalar_t__ phy_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ef4_nic*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ef4_nic *VAR_3,
     struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_3->phy_type == VAR_2) {
  VAR_6 = VAR_0;
  VAR_7 = 0xd000;
 } else {
  VAR_6 = VAR_1;
  VAR_7 = 0x8007;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->len; VAR_9++) {
  VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_7 + VAR_4->offset + VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_5[VAR_9] = VAR_8;
 }

 return 0;
}
