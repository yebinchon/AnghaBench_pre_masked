
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
typedef int u16 ;
struct TYPE_13__ {scalar_t__ ulp_state; } ;
struct TYPE_14__ {TYPE_6__ ich8lan; } ;
struct TYPE_11__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;} ;
struct TYPE_12__ {TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_7__ dev_spec; TYPE_5__ phy; TYPE_3__* adapter; TYPE_1__ mac; } ;
typedef int s32 ;
struct TYPE_10__ {TYPE_2__* pdev; } ;
struct TYPE_9__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_30 ;
 int FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static s32 FUNC_11(struct e1000_hw *VAR_31, bool VAR_32)
{
 s32 VAR_33 = 0;
 u32 VAR_34;
 u16 VAR_35;
 int VAR_36 = 0;

 if ((VAR_31->mac.type < VAR_29) ||
     (VAR_31->adapter->pdev->device == VAR_6) ||
     (VAR_31->adapter->pdev->device == VAR_7) ||
     (VAR_31->adapter->pdev->device == VAR_4) ||
     (VAR_31->adapter->pdev->device == VAR_5) ||
     (VAR_31->dev_spec.ich8lan.ulp_state == VAR_30))
  return 0;

 if (FUNC_5(VAR_15) & VAR_13) {
  if (VAR_32) {

   VAR_34 = FUNC_5(VAR_16);
   VAR_34 &= ~VAR_12;
   VAR_34 |= VAR_11;
   FUNC_6(VAR_16, VAR_34);
  }


  while (FUNC_5(VAR_15) & VAR_10) {
   if (VAR_36++ == 30) {
    VAR_33 = -VAR_8;
    goto out;
   }

   FUNC_10(10000, 11000);
  }
  FUNC_4("ULP_CONFIG_DONE cleared after %dmsec\n", VAR_36 * 10);

  if (VAR_32) {
   VAR_34 = FUNC_5(VAR_16);
   VAR_34 &= ~VAR_11;
   FUNC_6(VAR_16, VAR_34);
  } else {

   VAR_34 = FUNC_5(VAR_16);
   VAR_34 &= ~VAR_12;
   FUNC_6(VAR_16, VAR_34);
  }

  goto out;
 }

 VAR_33 = VAR_31->phy.ops.acquire(VAR_31);
 if (VAR_33)
  goto out;

 if (VAR_32)

  FUNC_2(VAR_31);


 VAR_33 = FUNC_1(VAR_31, VAR_1, &VAR_35);
 if (VAR_33) {



  VAR_34 = FUNC_5(VAR_0);
  VAR_34 |= VAR_3;
  FUNC_6(VAR_0, VAR_34);

  FUNC_7(50);

  VAR_33 = FUNC_1(VAR_31, VAR_1,
             &VAR_35);
  if (VAR_33)
   goto release;
 }
 VAR_35 &= ~VAR_2;
 FUNC_3(VAR_31, VAR_1, VAR_35);


 VAR_34 = FUNC_5(VAR_0);
 VAR_34 &= ~VAR_3;
 FUNC_6(VAR_0, VAR_34);




 VAR_33 = FUNC_1(VAR_31, VAR_17, &VAR_35);
 if (VAR_33)
  goto release;
 VAR_35 |= VAR_18;
 FUNC_3(VAR_31, VAR_17, VAR_35);


 VAR_33 = FUNC_1(VAR_31, VAR_19, &VAR_35);
 if (VAR_33)
  goto release;
 VAR_35 &= ~(VAR_24 |
       VAR_27 |
       VAR_25 |
       VAR_28 |
       VAR_23 |
       VAR_22 |
       VAR_21 |
       VAR_20);
 FUNC_3(VAR_31, VAR_19, VAR_35);


 VAR_35 |= VAR_26;
 FUNC_3(VAR_31, VAR_19, VAR_35);


 VAR_34 = FUNC_5(VAR_14);
 VAR_34 &= ~VAR_9;
 FUNC_6(VAR_14, VAR_34);

release:
 VAR_31->phy.ops.release(VAR_31);
 if (VAR_32) {
  FUNC_0(VAR_31);
  FUNC_7(50);
 }
out:
 if (VAR_33)
  FUNC_4("Error in ULP disable flow: %d\n", VAR_33);
 else
  VAR_31->dev_spec.ich8lan.ulp_state = VAR_30;

 return VAR_33;
}
