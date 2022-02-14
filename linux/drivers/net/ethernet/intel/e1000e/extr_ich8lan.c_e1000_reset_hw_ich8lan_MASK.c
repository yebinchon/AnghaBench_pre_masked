
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_8__ {scalar_t__ (* get_cfg_done ) (struct e1000_hw*) ;int (* check_reset_block ) (struct e1000_hw*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct e1000_dev_spec_ich8lan {int nvm_k1_enabled; } ;
struct TYPE_6__ {struct e1000_dev_spec_ich8lan ich8lan; } ;
struct e1000_hw {TYPE_5__ mac; TYPE_4__ phy; TYPE_2__* adapter; TYPE_1__ dev_spec; } ;
typedef scalar_t__ s32 ;
struct TYPE_7__ {int state; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct e1000_hw*) ;
 scalar_t__ FUNC_12 (struct e1000_hw*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static s32 FUNC_14(struct e1000_hw *VAR_26)
{
 struct e1000_dev_spec_ich8lan *VAR_27 = &VAR_26->dev_spec.ich8lan;
 u16 VAR_28;
 u32 VAR_29, VAR_30;
 s32 VAR_31;




 VAR_31 = FUNC_5(VAR_26);
 if (VAR_31)
  FUNC_7("PCI-E Master disable polling has failed.\n");

 FUNC_7("Masking off all interrupts\n");
 FUNC_9(VAR_16, 0xffffffff);





 FUNC_9(VAR_20, 0);
 FUNC_9(VAR_21, VAR_12);
 FUNC_6();

 FUNC_13(10000, 11000);


 if (VAR_26->mac.type == VAR_23) {

  FUNC_9(VAR_18, VAR_10);

  FUNC_9(VAR_19, VAR_11);
 }

 if (VAR_26->mac.type == VAR_25) {

  VAR_31 = FUNC_4(VAR_26, VAR_8, 1, &VAR_28);
  if (VAR_31)
   return VAR_31;

  if (VAR_28 & VAR_9)
   VAR_27->nvm_k1_enabled = 1;
  else
   VAR_27->nvm_k1_enabled = 0;
 }

 VAR_29 = FUNC_8(VAR_1);

 if (!VAR_26->phy.ops.check_reset_block(VAR_26)) {




  VAR_29 |= VAR_2;




  if ((VAR_26->mac.type == VAR_24) &&
      !(FUNC_8(VAR_14) & VAR_6))
   FUNC_2(VAR_26, 1);
 }
 VAR_31 = FUNC_1(VAR_26);
 FUNC_7("Issuing a global reset to ich8lan\n");
 FUNC_9(VAR_1, (VAR_29 | VAR_3));

 FUNC_10(20);


 if (VAR_26->mac.type == VAR_24) {
  VAR_30 = FUNC_8(VAR_13);
  VAR_30 &= ~VAR_5;
  VAR_30 |= VAR_4;
  FUNC_9(VAR_13, VAR_30);
 }

 if (!VAR_31)
  FUNC_0(VAR_22, &VAR_26->adapter->state);

 if (VAR_29 & VAR_2) {
  VAR_31 = VAR_26->phy.ops.get_cfg_done(VAR_26);
  if (VAR_31)
   return VAR_31;

  VAR_31 = FUNC_3(VAR_26);
  if (VAR_31)
   return VAR_31;
 }





 if (VAR_26->mac.type == VAR_25)
  FUNC_9(VAR_0, 0x65656565);

 FUNC_9(VAR_16, 0xffffffff);
 FUNC_8(VAR_15);

 VAR_30 = FUNC_8(VAR_17);
 VAR_30 |= VAR_7;
 FUNC_9(VAR_17, VAR_30);

 return 0;
}
