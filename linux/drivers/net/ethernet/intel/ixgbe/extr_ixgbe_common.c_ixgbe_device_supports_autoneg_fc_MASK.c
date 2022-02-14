
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int media_type; } ;
struct ixgbe_hw {int device_id; TYPE_3__ mac; TYPE_1__ phy; } ;
typedef int ixgbe_link_speed ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,char*,int ) ;



 int FUNC_1 (struct ixgbe_hw*,int *,int*,int) ;

bool FUNC_2(struct ixgbe_hw *VAR_2)
{
 bool VAR_3 = 0;
 ixgbe_link_speed VAR_4;
 bool VAR_5;

 switch (VAR_2->phy.media_type) {
 case 128:

  switch (VAR_2->device_id) {
  case 135:
  case 134:
   VAR_3 = 0;
   break;
  default:
   VAR_2->mac.ops.check_link(VAR_2, &VAR_4, &VAR_5, 0);

   if (VAR_5)
    VAR_3 = VAR_4 == VAR_1 ?
    1 : 0;
   else
    VAR_3 = 1;
  }

  break;
 case 130:
  if (VAR_2->device_id == VAR_0)
   VAR_3 = 0;
  else
   VAR_3 = 1;
  break;
 case 129:

  switch (VAR_2->device_id) {
  case 141:
  case 140:
  case 139:
  case 132:
  case 131:
  case 133:
  case 138:
  case 137:
  case 136:
   VAR_3 = 1;
   break;
  default:
   break;
  }
 default:
  break;
 }

 if (!VAR_3)
  FUNC_0(VAR_2, "Device %x does not support flow control autoneg\n",
         VAR_2->device_id);

 return VAR_3;
}
