
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ mac; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*,scalar_t__,scalar_t__) ;

 int VAR_17 ;


 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct ixgbe_hw *VAR_18, ixgbe_link_speed *VAR_19,
     bool *VAR_20, bool VAR_21)
{
 u32 VAR_22, VAR_23;
 u32 VAR_24;




 if (FUNC_2(VAR_18)) {
  u32 VAR_25;

  switch (VAR_18->mac.type) {
  case 130:
   VAR_25 = FUNC_0(VAR_18, VAR_2) &
     VAR_4;
   break;
  case 129:
  case 128:
   VAR_25 = FUNC_0(VAR_18, VAR_2) &
     VAR_3;
   break;
  default:

   VAR_25 = 0;
   break;
  }

  if (!VAR_25) {
   *VAR_20 = 0;
   *VAR_19 = VAR_15;
   return 0;
  }
 }


 VAR_23 = FUNC_0(VAR_18, VAR_5);

 VAR_22 = FUNC_0(VAR_18, VAR_5);

 if (VAR_23 != VAR_22) {
  FUNC_1(VAR_18, "LINKS changed from %08X to %08X\n",
         VAR_23, VAR_22);
 }

 if (VAR_21) {
  for (VAR_24 = 0; VAR_24 < VAR_16; VAR_24++) {
   if (VAR_22 & VAR_8) {
    *VAR_20 = 1;
    break;
   } else {
    *VAR_20 = 0;
   }
   FUNC_3(100);
   VAR_22 = FUNC_0(VAR_18, VAR_5);
  }
 } else {
  if (VAR_22 & VAR_8)
   *VAR_20 = 1;
  else
   *VAR_20 = 0;
 }

 switch (VAR_22 & VAR_6) {
 case 133:
  if ((VAR_18->mac.type >= VAR_17) &&
      (VAR_22 & VAR_7))
   *VAR_19 = VAR_13;
  else
   *VAR_19 = VAR_10;
  break;
 case 131:
  *VAR_19 = VAR_12;
  break;
 case 134:
  if ((VAR_18->mac.type >= VAR_17) &&
      (VAR_22 & VAR_7))
   *VAR_19 = VAR_14;
  else
   *VAR_19 = VAR_9;
  break;
 case 132:
  *VAR_19 = VAR_15;
  if (VAR_18->device_id == VAR_0 ||
      VAR_18->device_id == VAR_1) {
   *VAR_19 = VAR_11;
  }
  break;
 default:
  *VAR_19 = VAR_15;
 }

 return 0;
}
