
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int get_link_status; int type; TYPE_3__ ops; int autoneg; } ;
struct TYPE_11__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;int (* write_reg_locked ) (struct e1000_hw*,int ,scalar_t__) ;int (* read_reg_locked ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_12__ {scalar_t__ type; TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ eee_lp_ability; } ;
struct TYPE_9__ {TYPE_1__ ich8lan; } ;
struct e1000_hw {TYPE_5__ phy; struct e1000_mac_info mac; TYPE_2__ dev_spec; TYPE_7__* adapter; } ;
typedef int s32 ;
struct TYPE_14__ {TYPE_6__* pdev; } ;
struct TYPE_13__ {scalar_t__ device; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (struct e1000_hw*,int) ;
 int FUNC_3 (struct e1000_hw*,int) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;

 int VAR_29 ;
 int VAR_30 ;

 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_6 (struct e1000_hw*,int) ;
 int FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 int FUNC_11 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_13 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_14 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_15 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_16 (struct e1000_hw*,int ,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (struct e1000_hw*) ;
 int FUNC_21 (struct e1000_hw*) ;
 int FUNC_22 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_23 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_24 (struct e1000_hw*) ;
 int FUNC_25 (struct e1000_hw*) ;
 int FUNC_26 (struct e1000_hw*) ;
 int FUNC_27 (struct e1000_hw*) ;
 int FUNC_28 (struct e1000_hw*) ;
 int FUNC_29 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_30(struct e1000_hw *VAR_33)
{
 struct e1000_mac_info *VAR_34 = &VAR_33->mac;
 s32 VAR_35, VAR_36 = 0;
 u16 VAR_37, VAR_38 = 0;
 bool VAR_39;
 u16 VAR_40;






 if (!VAR_34->get_link_status)
  return 0;
 VAR_34->get_link_status = 0;





 VAR_35 = FUNC_12(VAR_33, 1, 0, &VAR_39);
 if (VAR_35)
  goto out;

 if (VAR_33->mac.type == 128) {
  VAR_35 = FUNC_2(VAR_33, VAR_39);
  if (VAR_35)
   goto out;
 }





 if ((VAR_33->mac.type >= 129) && VAR_39) {
  u16 VAR_41, VAR_42;

  FUNC_11(VAR_33, &VAR_41, &VAR_42);
  VAR_36 = FUNC_18(VAR_28);
  VAR_36 &= ~VAR_9;

  if (VAR_42 == VAR_13 && VAR_41 == VAR_24) {
   VAR_36 |= 0xFF;

   VAR_38 = 0;
  } else if (VAR_33->mac.type >= VAR_30 &&
      VAR_42 == VAR_12 && VAR_41 != VAR_26) {
   VAR_36 |= 0xC;
   VAR_38 = 1;
  } else {


   VAR_36 |= 0x08;
   VAR_38 = 1;
  }

  FUNC_19(VAR_28, VAR_36);

  VAR_35 = VAR_33->phy.ops.acquire(VAR_33);
  if (VAR_35)
   goto out;

  if (VAR_33->mac.type == 129)
   VAR_37 = VAR_22;
  else
   VAR_37 = VAR_21;
  VAR_35 = FUNC_8(VAR_33, VAR_37, VAR_38);

  if (VAR_33->mac.type >= VAR_29) {
   u16 VAR_43;

   FUNC_14(VAR_33, VAR_20, &VAR_43);
   VAR_43 &= ~VAR_19;
   if (VAR_41 == VAR_25 || VAR_41 == VAR_24)
    VAR_43 |= 0x3E8;
   else
    VAR_43 |= 0xFA;
   FUNC_16(VAR_33, VAR_20, VAR_43);

   if (VAR_41 == VAR_26) {
    VAR_33->phy.ops.read_reg_locked(VAR_33, VAR_17,
           &VAR_43);

    VAR_43 |= VAR_18;

    VAR_33->phy.ops.write_reg_locked(VAR_33, VAR_17,
            VAR_43);
   }
  }
  VAR_33->phy.ops.release(VAR_33);

  if (VAR_35)
   goto out;

  if (VAR_33->mac.type >= VAR_30) {
   u16 VAR_44;
   u16 VAR_45;

   if (VAR_41 == VAR_26) {
    VAR_35 = VAR_33->phy.ops.acquire(VAR_33);
    if (VAR_35)
     goto out;

    VAR_35 = FUNC_14(VAR_33,
         FUNC_1(776, 20),
         &VAR_44);
    if (VAR_35) {
     VAR_33->phy.ops.release(VAR_33);
     goto out;
    }

    VAR_45 = (VAR_44 & (0x3FF << 2)) >> 2;
    if (VAR_45 < 0x18) {
     VAR_44 &= ~(0x3FF << 2);
     VAR_44 |= (0x18 << 2);
     VAR_35 =
         FUNC_16(VAR_33,
           FUNC_1(776, 20),
           VAR_44);
    }
    VAR_33->phy.ops.release(VAR_33);
    if (VAR_35)
     goto out;
   } else {
    VAR_35 = VAR_33->phy.ops.acquire(VAR_33);
    if (VAR_35)
     goto out;

    VAR_35 = FUNC_16(VAR_33,
         FUNC_1(776, 20),
         0xC023);
    VAR_33->phy.ops.release(VAR_33);
    if (VAR_35)
     goto out;

   }
  }
 }






 if (VAR_33->mac.type >= VAR_29) {
  u32 VAR_46;

  VAR_46 = FUNC_18(VAR_10);
  VAR_46 &= ~VAR_6;
  VAR_46 |= VAR_5;
  FUNC_19(VAR_10, VAR_46);
 }


 if ((VAR_33->adapter->pdev->device == VAR_2) ||
     (VAR_33->adapter->pdev->device == VAR_3) ||
     (VAR_33->adapter->pdev->device == VAR_0) ||
     (VAR_33->adapter->pdev->device == VAR_1)) {
  VAR_35 = FUNC_3(VAR_33, VAR_39);
  if (VAR_35)
   goto out;
 }
 if (VAR_33->mac.type >= VAR_29) {



  VAR_35 = FUNC_6(VAR_33, VAR_39);
  if (VAR_35)
   goto out;
 }


 VAR_33->dev_spec.ich8lan.eee_lp_ability = 0;

 if (VAR_33->mac.type >= VAR_29) {
  u32 VAR_47 = FUNC_18(VAR_11);

  if (VAR_33->mac.type == VAR_30) {

   u32 VAR_48 = FUNC_18(VAR_23);

   if (VAR_48 & VAR_7)
    VAR_47 |= VAR_7;
   else
    VAR_47 &= ~VAR_7;
  }

  FUNC_19(VAR_11, VAR_47);
 }

 if (!VAR_39)
  goto out;

 switch (VAR_33->mac.type) {
 case 129:
  VAR_35 = FUNC_4(VAR_33);
  if (VAR_35)
   return VAR_35;

 case 128:
  if (VAR_33->phy.type == VAR_31) {
   VAR_35 = FUNC_5(VAR_33);
   if (VAR_35)
    return VAR_35;
  }






  FUNC_13(VAR_33, VAR_14, &VAR_40);
  VAR_40 &= ~VAR_15;

  if ((FUNC_18(VAR_27) & VAR_8) != VAR_8)
   VAR_40 |= FUNC_0(VAR_16);

  FUNC_15(VAR_33, VAR_14, VAR_40);
  break;
 default:
  break;
 }




 FUNC_9(VAR_33);


 if (VAR_33->phy.type > VAR_32) {
  VAR_35 = FUNC_7(VAR_33);
  if (VAR_35)
   return VAR_35;
 }




 if (!VAR_34->autoneg)
  return -VAR_4;





 VAR_34->ops.config_collision_dist(VAR_33);






 VAR_35 = FUNC_10(VAR_33);
 if (VAR_35)
  FUNC_17("Error configuring flow control\n");

 return VAR_35;

out:
 VAR_34->get_link_status = 1;
 return VAR_35;
}
