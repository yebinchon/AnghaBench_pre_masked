
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int speeds_supported; scalar_t__ media_type; scalar_t__ sfp_type; int nw_mng_if_sel; scalar_t__ multispeed_fiber; } ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_2__ phy; TYPE_1__ mac; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

 int VAR_7 ;




 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static s32 FUNC_0(struct ixgbe_hw *VAR_12,
           ixgbe_link_speed *VAR_13,
           bool *VAR_14)
{
 if (VAR_12->phy.type == VAR_7) {
  *VAR_14 = 1;
  *VAR_13 = VAR_12->phy.speeds_supported;
  return 0;
 }


 if (VAR_12->phy.media_type == VAR_6) {

  *VAR_14 = 0;

  if (VAR_12->phy.sfp_type == VAR_10 ||
      VAR_12->phy.sfp_type == VAR_11 ||
      VAR_12->phy.sfp_type == VAR_8 ||
      VAR_12->phy.sfp_type == VAR_9) {
   *VAR_13 = VAR_2;
   return 0;
  }


  if (VAR_12->phy.multispeed_fiber)
   *VAR_13 = VAR_1 |
     VAR_2;
  else
   *VAR_13 = VAR_1;
 } else {
  switch (VAR_12->phy.type) {
  case 129:
   *VAR_13 = VAR_2 |
     VAR_3 |
     VAR_1;
   break;
  case 128:
   *VAR_13 = VAR_2 |
     VAR_1;
   break;
  case 132:
  case 131:
   *VAR_13 = VAR_2;
   break;
  case 130:
   if (VAR_12->mac.type == VAR_5) {

    if (VAR_12->phy.nw_mng_if_sel &
        VAR_4) {
     *VAR_13 = VAR_3;
     break;
    } else if (VAR_12->device_id ==
        VAR_0) {
     *VAR_13 = VAR_2;
     break;
    }
   }

  default:
   *VAR_13 = VAR_1 |
     VAR_2;
   break;
  }
  *VAR_14 = 1;
 }
 return 0;
}
