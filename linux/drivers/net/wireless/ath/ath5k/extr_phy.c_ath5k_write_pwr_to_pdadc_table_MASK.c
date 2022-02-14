
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_4__ {size_t* txp_pd_table; } ;
struct ath5k_eeprom_info {size_t** ee_pdc_to_idx; size_t* ee_pd_gains; } ;
struct TYPE_3__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_2__ ah_txpower; TYPE_1__ ah_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 int FUNC_3 (struct ath5k_hw*,int,int ) ;
 int FUNC_4 (size_t*) ;

__attribute__((used)) static void
FUNC_5(struct ath5k_hw *VAR_6, u8 VAR_7)
{
 struct ath5k_eeprom_info *VAR_8 = &VAR_6->ah_capabilities.cap_eeprom;
 u8 *VAR_9 = VAR_6->ah_txpower.txp_pd_table;
 u8 *VAR_10 = VAR_8->ee_pdc_to_idx[VAR_7];
 u8 VAR_11 = VAR_8->ee_pd_gains[VAR_7];
 u32 VAR_12;
 u8 VAR_13;




 VAR_12 = FUNC_2(VAR_6, VAR_1);
 VAR_12 &= ~(VAR_3 |
  VAR_4 |
  VAR_5 |
  VAR_2);
 VAR_12 |= FUNC_1(VAR_11, VAR_2);

 switch (VAR_11) {
 case 3:
  VAR_12 |= FUNC_1(VAR_10[2], VAR_5);

 case 2:
  VAR_12 |= FUNC_1(VAR_10[1], VAR_4);

 case 1:
  VAR_12 |= FUNC_1(VAR_10[0], VAR_3);
  break;
 }
 FUNC_3(VAR_6, VAR_12, VAR_1);




 for (VAR_13 = 0; VAR_13 < (VAR_0 / 2); VAR_13++) {
  u32 VAR_14 = FUNC_4(&VAR_9[4 * VAR_13]);
  FUNC_3(VAR_6, VAR_14, FUNC_0(VAR_13));
 }
}
