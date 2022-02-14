
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct i40e_hw {scalar_t__ vendor_id; int device_id; TYPE_1__ mac; } ;
typedef int i40e_status ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct i40e_hw*,char*,int ,int ) ;

i40e_status FUNC_1(struct i40e_hw *VAR_5)
{
 i40e_status VAR_6 = 0;

 if (VAR_5->vendor_id == VAR_4) {
  switch (VAR_5->device_id) {
  case 130:
  case 137:
  case 140:
  case 139:
  case 136:
  case 135:
  case 134:
  case 149:
  case 148:
  case 150:
  case 146:
  case 144:
  case 143:
  case 142:
  case 141:
  case 129:
  case 128:
   VAR_5->mac.type = VAR_3;
   break;
  case 138:
  case 133:
  case 131:
  case 145:
  case 147:
  case 132:
   VAR_5->mac.type = VAR_2;
   break;
  default:
   VAR_5->mac.type = VAR_1;
   break;
  }
 } else {
  VAR_6 = VAR_0;
 }

 FUNC_0(VAR_5, "i40e_set_mac_type found mac: %d, returns: %d\n",
    VAR_5->mac.type, VAR_6);
 return VAR_6;
}
