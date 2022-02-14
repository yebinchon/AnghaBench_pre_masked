
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_fw_phy_action {size_t size; int * code; } ;
struct rtl_fw {int (* phy_read ) (struct rtl8169_private*,int) ;int (* mac_mcu_read ) (struct rtl8169_private*,int) ;int (* mac_mcu_write ) (struct rtl8169_private*,int,int) ;int (* phy_write ) (struct rtl8169_private*,int,int) ;struct rtl_fw_phy_action phy_action; } ;
struct rtl8169_private {int dummy; } ;
typedef int (* rtl_fw_write_t ) (struct rtl8169_private*,int,int) ;
typedef int (* rtl_fw_read_t ) (struct rtl8169_private*,int) ;
typedef enum rtl_fw_opcode { ____Placeholder_rtl_fw_opcode } rtl_fw_opcode ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct rtl8169_private *VAR_0, struct rtl_fw *VAR_1)
{
 struct rtl_fw_phy_action *VAR_2 = &VAR_1->phy_action;
 rtl_fw_write_t VAR_3 = VAR_1->phy_write;
 rtl_fw_read_t VAR_4 = VAR_1->phy_read;
 int VAR_5 = 0, VAR_6 = 0;
 size_t VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7++) {
  u32 VAR_8 = FUNC_0(VAR_2->code[VAR_7]);
  u32 VAR_9 = VAR_8 & 0x0000ffff;
  u32 VAR_10 = (VAR_8 & 0x0fff0000) >> 16;
  enum rtl_fw_opcode VAR_11 = VAR_8 >> 28;

  if (!VAR_8)
   break;

  switch (VAR_11) {
  case 132:
   VAR_5 = VAR_4(VAR_0, VAR_10);
   VAR_6++;
   break;
  case 135:
   VAR_5 |= VAR_9;
   break;
  case 136:
   VAR_5 &= VAR_9;
   break;
  case 140:
   VAR_7 -= (VAR_10 + 1);
   break;
  case 133:
   if (VAR_9 == 0) {
    VAR_3 = VAR_1->phy_write;
    VAR_4 = VAR_1->phy_read;
   } else if (VAR_9 == 1) {
    VAR_3 = VAR_1->mac_mcu_write;
    VAR_4 = VAR_1->mac_mcu_read;
   }

   break;
  case 139:
   VAR_6 = 0;
   break;
  case 129:
   VAR_3(VAR_0, VAR_10, VAR_9);
   break;
  case 131:
   if (VAR_6 == VAR_9)
    VAR_7++;
   break;
  case 138:
   if (VAR_5 == VAR_9)
    VAR_7 += VAR_10;
   break;
  case 137:
   if (VAR_5 != VAR_9)
    VAR_7 += VAR_10;
   break;
  case 128:
   VAR_3(VAR_0, VAR_10, VAR_5);
   break;
  case 130:
   VAR_7 += VAR_10;
   break;
  case 134:
   FUNC_1(VAR_9);
   break;
  }
 }
}
