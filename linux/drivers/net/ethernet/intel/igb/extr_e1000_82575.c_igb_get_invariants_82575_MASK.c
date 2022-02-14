
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct e1000_mac_info {int type; } ;
struct TYPE_6__ {void* media_type; } ;
struct TYPE_5__ {int e100_base_fx; } ;
struct e1000_dev_spec_82575 {int sgmii_active; int module_plugged; TYPE_2__ eth_flags; } ;
struct TYPE_4__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {int device_id; struct e1000_mac_info mac; TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;



 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_9)
{
 struct e1000_mac_info *VAR_10 = &VAR_9->mac;
 struct e1000_dev_spec_82575 *VAR_11 = &VAR_9->dev_spec._82575;
 s32 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;

 switch (VAR_9->device_id) {
 case 166:
 case 165:
 case 164:
  VAR_10->type = VAR_3;
  break;
 case 163:
 case 161:
 case 160:
 case 162:
 case 157:
 case 159:
 case 158:
 case 156:
  VAR_10->type = 131;
  break;
 case 155:
 case 153:
 case 152:
 case 151:
 case 150:
 case 154:
 case 146:
 case 148:
 case 149:
 case 147:
  VAR_10->type = VAR_4;
  break;
 case 138:
 case 137:
 case 136:
 case 135:
  VAR_10->type = 128;
  break;
 case 145:
 case 143:
 case 142:
 case 140:
 case 144:
 case 141:
  VAR_10->type = 130;
  break;
 case 139:
  VAR_10->type = 129;
  break;
 case 134:
 case 132:
 case 133:
  VAR_10->type = VAR_5;
  break;
 default:
  return -VAR_2;
 }
 VAR_9->phy.media_type = VAR_6;
 VAR_11->sgmii_active = 0;
 VAR_11->module_plugged = 0;

 VAR_13 = FUNC_7(VAR_0);

 VAR_14 = VAR_13 & VAR_1;
 switch (VAR_14) {
 case 169:
  VAR_9->phy.media_type = VAR_7;
  break;
 case 167:

  if (FUNC_6(VAR_9)) {
   VAR_9->phy.media_type = VAR_6;
   VAR_11->sgmii_active = 1;
   break;
  }

 case 168:

  VAR_12 = FUNC_5(VAR_9);
  if ((VAR_12 != 0) ||
      (VAR_9->phy.media_type == VAR_8)) {



   VAR_9->phy.media_type = VAR_7;

   if (VAR_14 == 167) {
    VAR_9->phy.media_type = VAR_6;
    VAR_11->sgmii_active = 1;
   }

   break;
  }


  if (VAR_11->eth_flags.e100_base_fx)
   break;


  VAR_13 &= ~VAR_1;

  if (VAR_9->phy.media_type == VAR_6)
   VAR_13 |= 167;
  else
   VAR_13 |= 168;

  FUNC_8(VAR_0, VAR_13);

  break;
 default:
  break;
 }


 VAR_12 = FUNC_0(VAR_9);
 if (VAR_12)
  goto out;


 VAR_12 = FUNC_2(VAR_9);
 switch (VAR_9->mac.type) {
 case 130:
 case 129:
  VAR_12 = FUNC_3(VAR_9);
  break;
 default:
  break;
 }

 if (VAR_12)
  goto out;


 switch (VAR_10->type) {
 case 131:
 case 128:
  FUNC_1(VAR_9);
  break;
 default:
  break;
 }


 VAR_12 = FUNC_4(VAR_9);

out:
 return VAR_12;
}
