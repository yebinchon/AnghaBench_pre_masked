
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_10__ {int confirm_wait; int snooze_guard; } ;
struct TYPE_9__ {int operation_mode; int fragment; int rts; int scan_type; } ;
struct TYPE_8__ {int ielen; int * ie; int wps_enabled; } ;
struct TYPE_6__ {int failure; int stop; int counter; } ;
struct TYPE_7__ {TYPE_1__ mic_failure; } ;
struct ks_wlan_private {int region; int confirm_wait; int dev_state; TYPE_5__ psstatus; TYPE_4__ reg; int eeprom_checksum; int gain; TYPE_3__ wps; TYPE_2__ wpa; int net_dev; int scan_ssid_len; int scan_ssid; int * eth_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ks_wlan_private*,int ,int ,int ) ;
 int FUNC_3 (struct ks_wlan_private*,int ) ;
 int FUNC_4 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_5 (struct ks_wlan_private*,int ,int *,int) ;
 int FUNC_6 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_7 (struct ks_wlan_private*) ;
 int FUNC_8 (struct ks_wlan_private*) ;
 int FUNC_9 (struct ks_wlan_private*) ;
 int FUNC_10 (struct ks_wlan_private*) ;
 int FUNC_11 (struct ks_wlan_private*,int) ;
 int FUNC_12 (struct ks_wlan_private*) ;
 int FUNC_13 (struct ks_wlan_private*,int) ;
 int FUNC_14 (struct ks_wlan_private*,int) ;
 int FUNC_15 (struct ks_wlan_private*) ;
 int FUNC_16 (struct ks_wlan_private*,int ) ;
 int FUNC_17 (struct ks_wlan_private*) ;
 int FUNC_18 (int ,char*,int) ;

__attribute__((used)) static void FUNC_19(struct ks_wlan_private *VAR_15, int VAR_16)
{
 u16 VAR_17;

 switch (VAR_16) {
 case 147:
  if (VAR_15->dev_state == VAR_0)
   FUNC_3(VAR_15, VAR_4);
  break;
 case 177:
  FUNC_9(VAR_15);
  break;
 case 183:
  FUNC_5(VAR_15, VAR_9,
            &VAR_15->eth_addr[0], VAR_8);
  break;
 case 190:
  FUNC_2(VAR_15, VAR_15->reg.scan_type,
     VAR_15->scan_ssid, VAR_15->scan_ssid_len);
  break;
 case 173:
  FUNC_10(VAR_15);
  break;
 case 175:
  FUNC_7(VAR_15);
  break;
 case 181:
  VAR_17 = VAR_15->wpa.mic_failure.failure;
  if (VAR_17 != 1 && VAR_17 != 2) {
   FUNC_18(VAR_15->net_dev,
       "SME_MIC_FAILURE_REQUEST: failure count=%u error?\n",
       VAR_17);
   return;
  }
  FUNC_6(VAR_15, VAR_17 - 1, (VAR_17 == 1) ?
         0 : VAR_15->wpa.mic_failure.counter);
  break;
 case 182:
  if (VAR_15->wpa.mic_failure.failure == 2) {
   if (VAR_15->wpa.mic_failure.stop)
    VAR_15->wpa.mic_failure.stop = 0;
   VAR_15->wpa.mic_failure.failure = 0;
   FUNC_16(VAR_15, VAR_15->reg.operation_mode);
  }
  break;
 case 185:
  if (VAR_15->dev_state == VAR_0)
   FUNC_3(VAR_15, VAR_5);
  break;
 case 184:
  if (VAR_15->dev_state == VAR_0)
   VAR_15->dev_state = VAR_2;
  break;
 case 143:
  FUNC_17(VAR_15);
  break;
 case 161:
  FUNC_4(VAR_15, VAR_6,
        VAR_15->reg.rts);
  break;
 case 188:
  FUNC_4(VAR_15, VAR_3,
        VAR_15->reg.fragment);
  break;
 case 138:
 case 136:
 case 134:
 case 132:
 case 130:
 case 140:
  FUNC_14(VAR_15, VAR_16);
  break;
 case 163:
 case 167:
 case 171:
 case 169:
 case 165:
  FUNC_13(VAR_15, VAR_16);
  break;
 case 160:
 case 149:
 case 156:
 case 155:
 case 154:
 case 153:
 case 151:
 case 158:
 case 157:
  FUNC_11(VAR_15, VAR_16);
  break;
 case 152:
  FUNC_12(VAR_15);
  break;
 case 129:
  FUNC_4(VAR_15, VAR_13,
        VAR_15->wps.wps_enabled);
  break;
 case 128:
  FUNC_5(VAR_15, VAR_14,
            VAR_15->wps.ie, VAR_15->wps.ielen);
  break;
 case 179:
  FUNC_8(VAR_15);
  break;
 case 159:
  FUNC_5(VAR_15, VAR_11,
            &VAR_15->gain, sizeof(VAR_15->gain));
  break;
 case 186:
  FUNC_3(VAR_15, VAR_11);
  break;
 case 187:
  VAR_15->eeprom_checksum = VAR_7;
  FUNC_3(VAR_15, VAR_10);
  break;
 case 145:
  FUNC_16(VAR_15, VAR_15->reg.operation_mode);
  break;
 case 146:

  FUNC_0(&VAR_15->psstatus.snooze_guard, 0);
  FUNC_0(&VAR_15->psstatus.confirm_wait, 0);
  if (VAR_15->dev_state == VAR_2)
   VAR_15->dev_state = VAR_1;

  FUNC_1(&VAR_15->confirm_wait);
  break;
 case 148:
  FUNC_15(VAR_15);
  break;
 case 150:
  FUNC_4(VAR_15, VAR_12, VAR_15->region);
  break;
 case 178:
 case 191:
 case 174:
 case 176:
 case 144:
 case 162:
 case 189:
 case 139:
 case 137:
 case 135:
 case 133:
 case 131:
 case 141:
 case 164:
 case 168:
 case 172:
 case 170:
 case 166:
 case 180:
 case 142:
 default:
  break;
 }
}
