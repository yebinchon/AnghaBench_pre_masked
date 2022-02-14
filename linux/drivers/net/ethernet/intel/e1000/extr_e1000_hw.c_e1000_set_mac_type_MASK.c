
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int device_id; int mac_type; int asf_firmware_present; int bad_tx_carr_stats_fd; int has_smbus; int revision_id; } ;
typedef int s32 ;
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

s32 FUNC_0(struct e1000_hw *VAR_12)
{
 switch (VAR_12->device_id) {
 case 156:
  switch (VAR_12->revision_id) {
  case 170:
   VAR_12->mac_type = VAR_3;
   break;
  case 169:
   VAR_12->mac_type = VAR_4;
   break;
  default:

   return -VAR_0;
  }
  break;
 case 154:
 case 155:
  VAR_12->mac_type = VAR_5;
  break;
 case 153:
 case 152:
 case 151:
 case 150:
  VAR_12->mac_type = VAR_6;
  break;
 case 168:
 case 167:
 case 166:
 case 165:
 case 164:
  VAR_12->mac_type = VAR_2;
  break;
 case 149:
 case 148:
  VAR_12->mac_type = VAR_7;
  break;
 case 147:
 case 146:
 case 145:
  VAR_12->mac_type = VAR_8;
  break;
 case 144:
 case 143:
 case 142:
  VAR_12->mac_type = VAR_9;
  break;
 case 141:
 case 140:
 case 136:
 case 139:
 case 138:
 case 137:
  VAR_12->mac_type = VAR_10;
  break;
 case 163:
 case 162:
 case 160:
  VAR_12->mac_type = 131;
  break;
 case 161:
 case 159:
 case 158:
 case 157:
  VAR_12->mac_type = 130;
  break;
 case 135:
 case 134:
  VAR_12->mac_type = 129;
  break;
 case 133:
  VAR_12->mac_type = 128;
  break;
 case 132:
  VAR_12->mac_type = VAR_11;
  break;
 default:

  return -VAR_0;
 }

 switch (VAR_12->mac_type) {
 case 131:
 case 129:
 case 130:
 case 128:
  VAR_12->asf_firmware_present = 1;
  break;
 default:
  break;
 }




 if (VAR_12->mac_type == VAR_5)
  VAR_12->bad_tx_carr_stats_fd = 1;

 if (VAR_12->mac_type > VAR_6)
  VAR_12->has_smbus = 1;

 return VAR_1;
}
