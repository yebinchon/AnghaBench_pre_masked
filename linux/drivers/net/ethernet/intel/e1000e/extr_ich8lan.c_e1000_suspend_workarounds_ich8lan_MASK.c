
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_11__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_12__ {scalar_t__ type; int autoneg_advertised; TYPE_5__ ops; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct e1000_dev_spec_ich8lan {scalar_t__ eee_lp_ability; int eee_disable; } ;
struct TYPE_7__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_6__ phy; TYPE_4__ mac; TYPE_3__* adapter; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;
struct TYPE_9__ {TYPE_2__* pdev; } ;
struct TYPE_8__ {scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_6 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (struct e1000_hw*) ;
 scalar_t__ FUNC_11 (struct e1000_hw*) ;
 int FUNC_12 (struct e1000_hw*) ;

void FUNC_13(struct e1000_hw *VAR_29)
{
 struct e1000_dev_spec_ich8lan *VAR_30 = &VAR_29->dev_spec.ich8lan;
 u32 VAR_31;
 s32 VAR_32;

 VAR_31 = FUNC_7(VAR_24);
 VAR_31 |= VAR_8;

 if (VAR_29->phy.type == VAR_28) {
  u16 VAR_33, VAR_34 = VAR_29->adapter->pdev->device;

  if ((VAR_34 == VAR_3) ||
      (VAR_34 == VAR_4) ||
      (VAR_34 == VAR_1) ||
      (VAR_34 == VAR_2) ||
      (VAR_29->mac.type >= VAR_26)) {
   u32 VAR_35 = FUNC_7(VAR_10);

   FUNC_8(VAR_10, VAR_35 & ~VAR_5);
  }

  VAR_32 = VAR_29->phy.ops.acquire(VAR_29);
  if (VAR_32)
   goto out;

  if (!VAR_30->eee_disable) {
   u16 VAR_36;

   VAR_32 =
       FUNC_1(VAR_29,
            VAR_14,
            &VAR_36);
   if (VAR_32)
    goto release;






   if ((VAR_36 & VAR_23) &&
       (VAR_30->eee_lp_ability &
        VAR_23) &&
       (VAR_29->phy.autoneg_advertised & VAR_0)) {
    VAR_31 &= ~(VAR_7 |
           VAR_9);


    FUNC_5(VAR_29,
      VAR_15, &VAR_33);
    VAR_33 |= VAR_16;
    FUNC_6(VAR_29,
      VAR_15, VAR_33);
   }
  }
  if (!(FUNC_7(VAR_11) & VAR_6)) {

   FUNC_5(VAR_29, VAR_19, &VAR_33);
   VAR_33 |= VAR_20;
   FUNC_6(VAR_29, VAR_19, VAR_33);




   FUNC_5(VAR_29, VAR_21, &VAR_33);
   VAR_33 |= VAR_22;
   FUNC_6(VAR_29, VAR_21, VAR_33);


   FUNC_5(VAR_29, VAR_17, &VAR_33);
   VAR_33 &= ~VAR_18;
   FUNC_6(VAR_29, VAR_17, VAR_33);
  }




  FUNC_5(VAR_29, VAR_12, &VAR_33);
  VAR_33 |= VAR_13;
  FUNC_6(VAR_29, VAR_12, VAR_33);

release:
  VAR_29->phy.ops.release(VAR_29);
 }
out:
 FUNC_8(VAR_24, VAR_31);

 if (VAR_29->mac.type == VAR_25)
  FUNC_3(VAR_29);

 if (VAR_29->mac.type >= VAR_27) {
  FUNC_0(VAR_29, 0);


  if (VAR_29->mac.type == VAR_27)
   FUNC_4(VAR_29);

  VAR_32 = VAR_29->phy.ops.acquire(VAR_29);
  if (VAR_32)
   return;
  FUNC_2(VAR_29);
  VAR_29->phy.ops.release(VAR_29);
 }
}
