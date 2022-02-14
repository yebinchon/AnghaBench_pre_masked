
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct e1000_dev_spec_ich8lan {int eee_lp_ability; int eee_disable; } ;
struct TYPE_4__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;


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


 scalar_t__ FUNC_0 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;

s32 FUNC_6(struct e1000_hw *VAR_16)
{
 struct e1000_dev_spec_ich8lan *VAR_17 = &VAR_16->dev_spec.ich8lan;
 s32 VAR_18;
 u16 VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 switch (VAR_16->phy.type) {
 case 129:
  VAR_19 = VAR_6;
  VAR_20 = VAR_7;
  VAR_22 = VAR_5;
  break;
 case 128:
  VAR_19 = VAR_1;
  VAR_20 = VAR_2;
  VAR_22 = VAR_0;
  break;
 default:
  return 0;
 }

 VAR_18 = VAR_16->phy.ops.acquire(VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_2(VAR_16, VAR_9, &VAR_23);
 if (VAR_18)
  goto release;


 VAR_23 &= ~VAR_12;


 if (!VAR_17->eee_disable) {

  VAR_18 = FUNC_0(VAR_16, VAR_19,
          &VAR_17->eee_lp_ability);
  if (VAR_18)
   goto release;


  VAR_18 = FUNC_0(VAR_16, VAR_22, &VAR_21);
  if (VAR_18)
   goto release;




  if (VAR_21 & VAR_17->eee_lp_ability & VAR_3)
   VAR_23 |= VAR_10;

  if (VAR_21 & VAR_17->eee_lp_ability & VAR_4) {
   FUNC_2(VAR_16, VAR_15, &VAR_24);
   if (VAR_24 & VAR_14)
    VAR_23 |= VAR_11;
   else




    VAR_17->eee_lp_ability &=
        ~VAR_4;
  }
 }

 if (VAR_16->phy.type == 129) {
  VAR_18 = FUNC_0(VAR_16, VAR_13,
          &VAR_24);
  if (VAR_18)
   goto release;

  VAR_24 &= ~VAR_8;
  VAR_18 = FUNC_1(VAR_16, VAR_13,
           VAR_24);
 }


 VAR_18 = FUNC_0(VAR_16, VAR_20, &VAR_24);
 if (VAR_18)
  goto release;

 VAR_18 = FUNC_3(VAR_16, VAR_9, VAR_23);
release:
 VAR_16->phy.ops.release(VAR_16);

 return VAR_18;
}
