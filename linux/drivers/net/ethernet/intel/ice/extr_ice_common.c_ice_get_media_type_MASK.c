
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_link_status {int phy_type_low; int phy_type_high; } ;
struct TYPE_2__ {struct ice_link_status link_info; } ;
struct ice_port_info {TYPE_1__ phy; } ;
typedef enum ice_media_type { ____Placeholder_ice_media_type } ice_media_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
__attribute__((used)) static enum ice_media_type FUNC_0(struct ice_port_info *VAR_5)
{
 struct ice_link_status *VAR_6;

 if (!VAR_5)
  return VAR_4;

 VAR_6 = &VAR_5->phy.link_info;
 if (VAR_6->phy_type_low && VAR_6->phy_type_high)

  return VAR_4;

 if (VAR_6->phy_type_low) {
  switch (VAR_6->phy_type_low) {
  case 173:
  case 174:
  case 159:
  case 160:
  case 157:
  case 145:
  case 146:
  case 143:
  case 139:
  case 140:
  case 130:
  case 132:
  case 131:
  case 136:
  case 133:
  case 162:
  case 164:
  case 163:
  case 167:
   return VAR_3;
  case 171:
  case 172:
  case 154:
  case 128:
  case 158:
  case 144:
   return VAR_1;
  case 156:
  case 152:
  case 150:
  case 151:
  case 142:
  case 137:
  case 138:
  case 169:
  case 168:
  case 170:
   return VAR_2;
  case 175:
  case 155:
  case 153:
  case 129:
  case 161:
  case 149:
  case 148:
  case 147:
  case 141:
  case 134:
  case 135:
  case 166:
  case 165:
   return VAR_0;
  }
 } else {
  switch (VAR_6->phy_type_high) {
  case 176:
   return VAR_0;
  }
 }
 return VAR_4;
}
