
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath5k_eeprom_info {int* ee_switch_settling; int* ee_atn_tx_rx; int** ee_ant_control; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {int** ah_ant_ctl; TYPE_1__ ah_capabilities; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct ath5k_hw *VAR_3, u32 *VAR_4,
  unsigned int VAR_5)
{
 struct ath5k_eeprom_info *VAR_6 = &VAR_3->ah_capabilities.cap_eeprom;
 u32 VAR_7 = *VAR_4;
 u16 VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_7++, VAR_8);
 VAR_6->ee_switch_settling[VAR_5] = (VAR_8 >> 8) & 0x7f;
 VAR_6->ee_atn_tx_rx[VAR_5] = (VAR_8 >> 2) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9] = (VAR_8 << 4) & 0x3f;

 FUNC_0(VAR_7++, VAR_8);
 VAR_6->ee_ant_control[VAR_5][VAR_9++] |= (VAR_8 >> 12) & 0xf;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = (VAR_8 >> 6) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = VAR_8 & 0x3f;

 FUNC_0(VAR_7++, VAR_8);
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = (VAR_8 >> 10) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = (VAR_8 >> 4) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9] = (VAR_8 << 2) & 0x3f;

 FUNC_0(VAR_7++, VAR_8);
 VAR_6->ee_ant_control[VAR_5][VAR_9++] |= (VAR_8 >> 14) & 0x3;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = (VAR_8 >> 8) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = (VAR_8 >> 2) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9] = (VAR_8 << 4) & 0x3f;

 FUNC_0(VAR_7++, VAR_8);
 VAR_6->ee_ant_control[VAR_5][VAR_9++] |= (VAR_8 >> 12) & 0xf;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = (VAR_8 >> 6) & 0x3f;
 VAR_6->ee_ant_control[VAR_5][VAR_9++] = VAR_8 & 0x3f;


 VAR_3->ah_ant_ctl[VAR_5][VAR_0] =
     (VAR_6->ee_ant_control[VAR_5][0] << 4);
 VAR_3->ah_ant_ctl[VAR_5][VAR_1] =
      VAR_6->ee_ant_control[VAR_5][1] |
     (VAR_6->ee_ant_control[VAR_5][2] << 6) |
     (VAR_6->ee_ant_control[VAR_5][3] << 12) |
     (VAR_6->ee_ant_control[VAR_5][4] << 18) |
     (VAR_6->ee_ant_control[VAR_5][5] << 24);
 VAR_3->ah_ant_ctl[VAR_5][VAR_2] =
      VAR_6->ee_ant_control[VAR_5][6] |
     (VAR_6->ee_ant_control[VAR_5][7] << 6) |
     (VAR_6->ee_ant_control[VAR_5][8] << 12) |
     (VAR_6->ee_ant_control[VAR_5][9] << 18) |
     (VAR_6->ee_ant_control[VAR_5][10] << 24);


 *VAR_4 = VAR_7;

 return 0;
}
