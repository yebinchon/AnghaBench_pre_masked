
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

 switch (VAR_5->phy.type) {
 case 129:
 case 128:
  return VAR_1;

 default:
  break;
 }


 switch (VAR_5->device_id) {
 case 141:
 case 133:

  return VAR_0;

 case 140:
 case 139:
 case 131:
 case 130:
 case 134:
 case 135:
  return VAR_3;

 case 136:
 case 132:
  return VAR_2;

 case 138:
 case 137:
  return VAR_1;

 default:
  return VAR_4;
 }
}
