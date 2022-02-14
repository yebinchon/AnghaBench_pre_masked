
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eeprom_priv {int* mac_addr; } ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct eeprom_priv* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,int*,int ) ;

__attribute__((used)) static void FUNC_3(
 struct adapter *VAR_4, u8 *VAR_5, bool VAR_6
)
{
 u16 VAR_7;
 u8 VAR_8[6] = {0x00, 0xE0, 0x4C, 0xb7, 0x23, 0x00};
 struct eeprom_priv *VAR_9 = FUNC_0(VAR_4);

 if (VAR_6) {

  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   VAR_9->mac_addr[VAR_7] = VAR_8[VAR_7];
 } else {

  FUNC_2(VAR_9->mac_addr, &VAR_5[VAR_0], VAR_1);
 }


 FUNC_1(
  VAR_3,
  VAR_2,
  (
   "Hal_EfuseParseMACAddr_8723BS: Permanent Address = %02x-%02x-%02x-%02x-%02x-%02x\n",
   VAR_9->mac_addr[0],
   VAR_9->mac_addr[1],
   VAR_9->mac_addr[2],
   VAR_9->mac_addr[3],
   VAR_9->mac_addr[4],
   VAR_9->mac_addr[5]
  )
 );
}
