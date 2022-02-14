
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sky2_port {int phy_lock; } ;
struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; int flags; TYPE_1__** dev; } ;
struct TYPE_2__ {scalar_t__ mtu; int * dev_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
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
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_1 (int ) ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_4 (int ) ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int FUNC_5 (int ) ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_6 (int ) ;
 int VAR_63 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sky2_hw*,int,int ) ;
 int FUNC_9 (struct sky2_hw*,unsigned int,int) ;
 int FUNC_10 (struct sky2_hw*,unsigned int,int ,int const*) ;
 int FUNC_11 (struct sky2_hw*,unsigned int,int,int) ;
 struct sky2_port* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct sky2_hw*,unsigned int) ;
 int FUNC_14 (struct sky2_hw*,unsigned int) ;
 int FUNC_15 (struct sky2_hw*,int ) ;
 int FUNC_16 (struct sky2_hw*,unsigned int) ;
 int FUNC_17 (struct sky2_hw*,int ,int) ;
 int FUNC_18 (struct sky2_hw*,int ,int) ;
 int FUNC_19 (struct sky2_hw*,int ,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void FUNC_22(struct sky2_hw *VAR_64, unsigned VAR_65)
{
 struct sky2_port *VAR_66 = FUNC_12(VAR_64->dev[VAR_65]);
 u16 VAR_67;
 u32 VAR_68;
 int VAR_69;
 const u8 *VAR_70 = VAR_64->dev[VAR_65]->dev_addr;

 FUNC_19(VAR_64, FUNC_2(VAR_65, VAR_42), VAR_41);
 FUNC_19(VAR_64, FUNC_2(VAR_65, VAR_42), VAR_40);

 FUNC_19(VAR_64, FUNC_2(VAR_65, VAR_9), VAR_13);

 if (VAR_64->chip_id == VAR_3 &&
     VAR_64->chip_rev == VAR_6 &&
     VAR_65 == 1) {


  FUNC_19(VAR_64, FUNC_2(0, VAR_9), VAR_13);
  do {
   FUNC_19(VAR_64, FUNC_2(1, VAR_9), VAR_14);
   FUNC_19(VAR_64, FUNC_2(1, VAR_9), VAR_13);
  } while (FUNC_8(VAR_64, 1, VAR_44) != VAR_45 ||
    FUNC_8(VAR_64, 1, VAR_46) != VAR_47 ||
    FUNC_8(VAR_64, 1, VAR_48) != 0);
 }

 FUNC_15(VAR_64, FUNC_2(VAR_65, VAR_12));


 FUNC_19(VAR_64, FUNC_2(VAR_65, VAR_11), VAR_10);

 FUNC_20(&VAR_66->phy_lock);
 FUNC_14(VAR_64, VAR_65);
 FUNC_13(VAR_64, VAR_65);
 FUNC_21(&VAR_66->phy_lock);


 VAR_67 = FUNC_9(VAR_64, VAR_65, VAR_24);
 FUNC_11(VAR_64, VAR_65, VAR_24, VAR_67 | VAR_23);

 for (VAR_69 = VAR_20; VAR_69 <= VAR_21; VAR_69 += 4)
  FUNC_9(VAR_64, VAR_65, VAR_69);
 FUNC_11(VAR_64, VAR_65, VAR_24, VAR_67);


 FUNC_11(VAR_64, VAR_65, VAR_36, FUNC_4(VAR_57));


 FUNC_11(VAR_64, VAR_65, VAR_28,
      VAR_27 | VAR_25 | VAR_26);


 FUNC_11(VAR_64, VAR_65, VAR_37, 0xffff);


 FUNC_11(VAR_64, VAR_65, VAR_39,
      FUNC_7(VAR_63) |
      FUNC_6(VAR_62) |
      FUNC_5(VAR_61) |
      FUNC_3(VAR_56));


 VAR_67 = FUNC_0(VAR_7) |
  VAR_32 | FUNC_1(VAR_43);

 if (VAR_64->dev[VAR_65]->mtu > VAR_8)
  VAR_67 |= VAR_31;

 if (VAR_64->chip_id == VAR_0 &&
     VAR_64->chip_rev == VAR_4)
  VAR_67 |= VAR_22;

 FUNC_11(VAR_64, VAR_65, VAR_30, VAR_67);


 FUNC_10(VAR_64, VAR_65, VAR_34, VAR_70);


 FUNC_10(VAR_64, VAR_65, VAR_33, VAR_70);


 FUNC_11(VAR_64, VAR_65, VAR_38, 0);
 FUNC_11(VAR_64, VAR_65, VAR_29, 0);
 FUNC_11(VAR_64, VAR_65, VAR_35, 0);


 FUNC_19(VAR_64, FUNC_2(VAR_65, VAR_49), VAR_16);
 VAR_68 = VAR_15 | VAR_17;
 if (VAR_64->chip_id == VAR_1 ||
     VAR_64->chip_id == VAR_2)
  VAR_68 |= VAR_18;

 FUNC_18(VAR_64, FUNC_2(VAR_65, VAR_49), VAR_68);

 if (VAR_64->chip_id == VAR_3) {

  FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_50), 0);
 } else {

  FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_50), VAR_19);
 }


 VAR_67 = VAR_52 + 1;

 if (VAR_64->chip_id == VAR_2 &&
     VAR_64->chip_rev == VAR_5)
  VAR_67 = 0x178;
 FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_51), VAR_67);


 FUNC_19(VAR_64, FUNC_2(VAR_65, VAR_59), VAR_16);
 FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_59), VAR_15);


 if (!(VAR_64->flags & VAR_55)) {

  if (VAR_64->chip_id == VAR_2 &&
      VAR_64->chip_rev == VAR_5)
   VAR_67 = 1568 / 8;
  else
   VAR_67 = 1024 / 8;
  FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_54), VAR_67);
  FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_53), 768 / 8);

  FUNC_16(VAR_64, VAR_65);
 }

 if (VAR_64->chip_id == VAR_2 &&
     VAR_64->chip_rev == VAR_5) {

  VAR_67 = FUNC_15(VAR_64, FUNC_2(VAR_65, VAR_60));
  VAR_67 &= ~VAR_58;
  FUNC_17(VAR_64, FUNC_2(VAR_65, VAR_60), VAR_67);
 }
}
