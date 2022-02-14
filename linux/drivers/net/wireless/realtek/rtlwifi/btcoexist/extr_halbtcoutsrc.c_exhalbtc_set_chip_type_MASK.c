
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bt_chip_type; } ;
struct btc_coexist {TYPE_1__ board_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
void FUNC_0(struct btc_coexist *VAR_6, u8 VAR_7)
{
 switch (VAR_7) {
 default:
 case 136:
 case 132:
 case 135:
 case 129:
  VAR_6->board_info.bt_chip_type = VAR_5;
  break;
 case 134:
  VAR_6->board_info.bt_chip_type = VAR_0;
  break;
 case 133:
  VAR_6->board_info.bt_chip_type = VAR_1;
  break;
 case 131:
  VAR_6->board_info.bt_chip_type = VAR_2;
  break;
 case 128:
  VAR_6->board_info.bt_chip_type = VAR_4;
  break;
 case 130:
  VAR_6->board_info.bt_chip_type = VAR_3;
  break;
 }
}
