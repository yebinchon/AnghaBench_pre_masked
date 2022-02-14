
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,int) ;scalar_t__ (* get_link_capabilities ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_6__ {int orig_autoc; TYPE_2__ ops; scalar_t__ orig_link_settings_stored; } ;
struct TYPE_4__ {int smart_speed_active; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_25,
          ixgbe_link_speed VAR_26,
          bool VAR_27)
{
 bool VAR_28 = 0;
 s32 VAR_29;
 u32 VAR_30, VAR_31, VAR_32, VAR_33;
 u32 VAR_34 = FUNC_0(VAR_25, VAR_1);
 u32 VAR_35 = VAR_34 & VAR_2;
 ixgbe_link_speed VAR_36 = VAR_24;


 u32 VAR_37 = FUNC_0(VAR_25, VAR_0);

 u32 VAR_38 = 0;

 u32 VAR_39 = VAR_37;


 VAR_29 = VAR_25->mac.ops.get_link_capabilities(VAR_25, &VAR_36,
         &VAR_28);
 if (VAR_29)
  return VAR_29;

 VAR_26 &= VAR_36;

 if (VAR_26 == VAR_24)
  return VAR_19;


 if (VAR_25->mac.orig_link_settings_stored)
  VAR_38 = VAR_25->mac.orig_autoc;
 else
  VAR_38 = VAR_39;

 VAR_31 = VAR_39 & VAR_16;
 VAR_30 = VAR_39 & VAR_4;

 if (VAR_31 == VAR_13 ||
     VAR_31 == VAR_14 ||
     VAR_31 == VAR_15) {

  VAR_39 &= ~(VAR_7 | VAR_6);
  if (VAR_26 & VAR_22) {
   if (VAR_38 & VAR_8)
    VAR_39 |= VAR_8;
   if ((VAR_38 & VAR_6) &&
       (VAR_25->phy.smart_speed_active == 0))
    VAR_39 |= VAR_6;
  }
  if (VAR_26 & VAR_23)
   VAR_39 |= VAR_9;
 } else if ((VAR_30 == VAR_5) &&
     (VAR_31 == VAR_12 ||
      VAR_31 == VAR_11)) {

  if ((VAR_26 == VAR_22) &&
      (VAR_35 == VAR_3)) {
   VAR_39 &= ~VAR_16;
   VAR_39 |= VAR_10;
  }
 } else if ((VAR_35 == VAR_3) &&
     (VAR_31 == VAR_10)) {

  if ((VAR_26 == VAR_23) &&
      (VAR_30 == VAR_5)) {
   VAR_39 &= ~VAR_16;
   if (VAR_28)
    VAR_39 |= VAR_11;
   else
    VAR_39 |= VAR_12;
  }
 }

 if (VAR_39 != VAR_37) {

  VAR_29 = VAR_25->mac.ops.prot_autoc_write(VAR_25, VAR_39, 0);
  if (VAR_29)
   return VAR_29;


  if (VAR_27) {
   if (VAR_31 == VAR_13 ||
       VAR_31 == VAR_14 ||
       VAR_31 == VAR_15) {
    VAR_32 = 0;
    for (VAR_33 = 0; VAR_33 < VAR_17; VAR_33++) {
     VAR_32 =
            FUNC_0(VAR_25, VAR_20);
     if (VAR_32 & VAR_21)
      break;
     FUNC_2(100);
    }
    if (!(VAR_32 & VAR_21)) {
     VAR_29 =
      VAR_18;
     FUNC_1(VAR_25, "Autoneg did not complete.\n");
    }
   }
  }


  FUNC_2(50);
 }

 return VAR_29;
}
