
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {scalar_t__ id; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


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
 int FUNC_0 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct ixgbe_hw*,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_18 (int) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int FUNC_19 (struct ixgbe_hw*) ;
 int FUNC_20 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_21 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_22 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_23 (struct ixgbe_hw*,int ,int ,int*) ;

s32 FUNC_24(struct ixgbe_hw *VAR_55)
{
 u16 VAR_56 = 0;

 FUNC_17(VAR_55, VAR_2);
 FUNC_17(VAR_55, VAR_10);
 FUNC_17(VAR_55, VAR_3);
 FUNC_17(VAR_55, VAR_26);
 for (VAR_56 = 0; VAR_56 < 8; VAR_56++)
  FUNC_17(VAR_55, FUNC_0(VAR_56));

 FUNC_17(VAR_55, VAR_19);
 FUNC_17(VAR_55, VAR_25);
 FUNC_17(VAR_55, VAR_43);
 FUNC_17(VAR_55, VAR_18);
 FUNC_17(VAR_55, VAR_15);
 if (VAR_55->mac.type >= VAR_52) {
  FUNC_17(VAR_55, VAR_17);
  FUNC_17(VAR_55, VAR_14);
 } else {
  FUNC_17(VAR_55, VAR_16);
  FUNC_17(VAR_55, VAR_13);
 }

 for (VAR_56 = 0; VAR_56 < 8; VAR_56++) {
  FUNC_17(VAR_55, FUNC_7(VAR_56));
  FUNC_17(VAR_55, FUNC_3(VAR_56));
  if (VAR_55->mac.type >= VAR_52) {
   FUNC_17(VAR_55, FUNC_6(VAR_56));
   FUNC_17(VAR_55, FUNC_2(VAR_56));
  } else {
   FUNC_17(VAR_55, FUNC_5(VAR_56));
   FUNC_17(VAR_55, FUNC_1(VAR_56));
  }
 }
 if (VAR_55->mac.type >= VAR_52)
  for (VAR_56 = 0; VAR_56 < 8; VAR_56++)
   FUNC_17(VAR_55, FUNC_4(VAR_56));
 FUNC_17(VAR_55, VAR_34);
 FUNC_17(VAR_55, VAR_30);
 FUNC_17(VAR_55, VAR_32);
 FUNC_17(VAR_55, VAR_33);
 FUNC_17(VAR_55, VAR_29);
 FUNC_17(VAR_55, VAR_31);
 FUNC_17(VAR_55, VAR_8);
 FUNC_17(VAR_55, VAR_0);
 FUNC_17(VAR_55, VAR_23);
 FUNC_17(VAR_55, VAR_9);
 FUNC_17(VAR_55, VAR_5);
 FUNC_17(VAR_55, VAR_4);
 FUNC_17(VAR_55, VAR_7);
 FUNC_17(VAR_55, VAR_6);
 if (VAR_55->mac.type == VAR_51)
  for (VAR_56 = 0; VAR_56 < 8; VAR_56++)
   FUNC_17(VAR_55, FUNC_18(VAR_56));
 FUNC_17(VAR_55, VAR_45);
 FUNC_17(VAR_55, VAR_41);
 FUNC_17(VAR_55, VAR_44);
 FUNC_17(VAR_55, VAR_42);
 FUNC_17(VAR_55, VAR_21);
 FUNC_17(VAR_55, VAR_20);
 FUNC_17(VAR_55, VAR_22);
 FUNC_17(VAR_55, VAR_47);
 FUNC_17(VAR_55, VAR_46);
 FUNC_17(VAR_55, VAR_48);
 FUNC_17(VAR_55, VAR_49);
 FUNC_17(VAR_55, VAR_40);
 FUNC_17(VAR_55, VAR_36);
 FUNC_17(VAR_55, VAR_38);
 FUNC_17(VAR_55, VAR_39);
 FUNC_17(VAR_55, VAR_35);
 FUNC_17(VAR_55, VAR_37);
 FUNC_17(VAR_55, VAR_24);
 FUNC_17(VAR_55, VAR_1);
 for (VAR_56 = 0; VAR_56 < 16; VAR_56++) {
  FUNC_17(VAR_55, FUNC_14(VAR_56));
  FUNC_17(VAR_55, FUNC_16(VAR_56));
  if (VAR_55->mac.type >= VAR_52) {
   FUNC_17(VAR_55, FUNC_10(VAR_56));
   FUNC_17(VAR_55, FUNC_9(VAR_56));
   FUNC_17(VAR_55, FUNC_13(VAR_56));
   FUNC_17(VAR_55, FUNC_12(VAR_56));
   FUNC_17(VAR_55, FUNC_15(VAR_56));
  } else {
   FUNC_17(VAR_55, FUNC_8(VAR_56));
   FUNC_17(VAR_55, FUNC_11(VAR_56));
  }
 }

 if (VAR_55->mac.type == VAR_54 || VAR_55->mac.type == VAR_53) {
  if (VAR_55->phy.id == 0)
   VAR_55->phy.ops.identify(VAR_55);
  VAR_55->phy.ops.read_reg(VAR_55, VAR_28, VAR_50, &VAR_56);
  VAR_55->phy.ops.read_reg(VAR_55, VAR_27, VAR_50, &VAR_56);
  VAR_55->phy.ops.read_reg(VAR_55, VAR_12, VAR_50, &VAR_56);
  VAR_55->phy.ops.read_reg(VAR_55, VAR_11, VAR_50, &VAR_56);
 }

 return 0;
}
