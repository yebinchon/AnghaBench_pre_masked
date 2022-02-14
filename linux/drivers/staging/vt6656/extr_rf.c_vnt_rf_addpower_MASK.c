
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {int current_rssi; scalar_t__ rf_type; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct vnt_private *VAR_1)
{
 s32 VAR_2 = -VAR_1->current_rssi;

 if (!VAR_2)
  return 7;

 if (VAR_1->rf_type == VAR_0) {
  if (VAR_2 < -70)
   return 9;
  else if (VAR_2 < -65)
   return 7;
  else if (VAR_2 < -60)
   return 5;
 } else {
  if (VAR_2 < -80)
   return 9;
  else if (VAR_2 < -75)
   return 7;
  else if (VAR_2 < -70)
   return 5;
 }

 return 0;
}
