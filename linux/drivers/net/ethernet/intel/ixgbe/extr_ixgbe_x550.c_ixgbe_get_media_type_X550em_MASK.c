
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
typedef enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum ixgbe_media_type FUNC_0(struct ixgbe_hw *VAR_5)
{
 enum ixgbe_media_type VAR_6;


 switch (VAR_5->device_id) {
 case 135:
 case 134:
  VAR_5->phy.type = VAR_4;

 case 131:
 case 130:
 case 128:
 case 139:
 case 138:
  VAR_6 = VAR_0;
  break;
 case 129:
 case 137:
 case 136:
  VAR_6 = VAR_2;
  break;
 case 132:
 case 133:
 case 142:
 case 141:
 case 140:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_3;
  break;
 }
 return VAR_6;
}
