
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct skge_port {scalar_t__ autoneg; int speed; scalar_t__ duplex; int flow_control; } ;
struct skge_hw {scalar_t__ chip_id; scalar_t__ chip_rev; TYPE_1__** dev; scalar_t__ copper; } ;
struct TYPE_2__ {scalar_t__ mtu; int * dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;




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
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_1 (int ) ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int FUNC_2 (int,int ) ;



 int VAR_62 ;
 int FUNC_3 (int ) ;
 int VAR_63 ;
 int FUNC_4 (int ) ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_5 (int ) ;
 int VAR_66 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct skge_hw*,int,scalar_t__) ;
 int FUNC_8 (struct skge_hw*,int,int ,int const*) ;
 int FUNC_9 (struct skge_hw*,int,scalar_t__,int) ;
 scalar_t__ FUNC_10 (struct skge_hw*) ;
 struct skge_port* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct skge_hw*,int ) ;
 int FUNC_13 (struct skge_hw*,int ) ;
 int FUNC_14 (struct skge_hw*,int ,int) ;
 int FUNC_15 (struct skge_hw*,int ,int) ;
 int FUNC_16 (struct skge_hw*,int ,int ) ;
 int FUNC_17 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_18(struct skge_hw *VAR_67, int VAR_68)
{
 struct skge_port *VAR_69 = FUNC_11(VAR_67->dev[VAR_68]);
 int VAR_70;
 u32 VAR_71;
 const u8 *VAR_72 = VAR_67->dev[VAR_68]->dev_addr;


 if (VAR_67->chip_id == VAR_2 &&
     VAR_67->chip_rev >= VAR_3) {
  VAR_71 = FUNC_13(VAR_67, VAR_1);
  VAR_71 |= VAR_54 | VAR_55;
  FUNC_15(VAR_67, VAR_1, VAR_71);
 }


 FUNC_15(VAR_67, FUNC_2(VAR_68, VAR_53), VAR_52);
 FUNC_15(VAR_67, FUNC_2(VAR_68, VAR_7), VAR_12);


 if (VAR_67->chip_id == VAR_2 &&
     VAR_67->chip_rev >= VAR_3) {
  VAR_71 = FUNC_13(VAR_67, VAR_1);
  VAR_71 |= VAR_54;
  VAR_71 &= ~VAR_55;
  FUNC_15(VAR_67, VAR_1, VAR_71);
 }


 VAR_71 = VAR_50 | VAR_44 | VAR_45 |
  VAR_47 | VAR_43 | VAR_46;
 VAR_71 |= VAR_67->copper ? VAR_48 : VAR_49;


 FUNC_15(VAR_67, FUNC_2(VAR_68, VAR_53), VAR_71 | VAR_52);
 FUNC_15(VAR_67, FUNC_2(VAR_68, VAR_53), VAR_71 | VAR_51);
 FUNC_15(VAR_67, FUNC_2(VAR_68, VAR_7), VAR_10 | VAR_11);

 if (VAR_69->autoneg == VAR_0) {
  VAR_71 = VAR_16;
  FUNC_9(VAR_67, VAR_68, VAR_23,
     FUNC_7(VAR_67, VAR_68, VAR_23) | VAR_71);

  switch (VAR_69->speed) {
  case 128:
   VAR_71 &= ~VAR_21;
   VAR_71 |= VAR_22;
   break;
  case 129:
   VAR_71 &= ~VAR_22;
   VAR_71 |= VAR_21;
   break;
  case 130:
   VAR_71 &= ~(VAR_22 | VAR_21);
   break;
  }

  if (VAR_69->duplex == VAR_5)
   VAR_71 |= VAR_18;
 } else
  VAR_71 = VAR_22 | VAR_21 | VAR_18;

 switch (VAR_69->flow_control) {
 case 133:
  FUNC_15(VAR_67, FUNC_2(VAR_68, VAR_7), VAR_9);
  VAR_71 |= VAR_20 | VAR_19 | VAR_17;
  break;
 case 134:

  VAR_71 |= VAR_19 | VAR_17;
  break;
 case 132:
 case 131:

  break;
 }

 FUNC_9(VAR_67, VAR_68, VAR_23, VAR_71);
 FUNC_12(VAR_67, FUNC_2(VAR_68, VAR_8));

 FUNC_17(VAR_67, VAR_68);


 VAR_71 = FUNC_7(VAR_67, VAR_68, VAR_27);
 FUNC_9(VAR_67, VAR_68, VAR_27, VAR_71 | VAR_26);

 for (VAR_70 = 0; VAR_70 < VAR_25; VAR_70++)
  FUNC_7(VAR_67, VAR_68, VAR_24 + 8*VAR_70);
 FUNC_9(VAR_67, VAR_68, VAR_27, VAR_71);


 FUNC_9(VAR_67, VAR_68, VAR_39, FUNC_3(VAR_62));


 FUNC_9(VAR_67, VAR_68, VAR_31,
    VAR_30 | VAR_28 | VAR_29);


 FUNC_9(VAR_67, VAR_68, VAR_40, 0xffff);


 FUNC_9(VAR_67, VAR_68, VAR_42,
    FUNC_6(VAR_66) |
    FUNC_5(VAR_65) |
    FUNC_4(VAR_64));


 VAR_71 = FUNC_0(VAR_4)
  | VAR_35
  | FUNC_1(VAR_56);

 if (VAR_67->dev[VAR_68]->mtu > VAR_6)
  VAR_71 |= VAR_34;

 FUNC_9(VAR_67, VAR_68, VAR_33, VAR_71);


 FUNC_8(VAR_67, VAR_68, VAR_36, VAR_72);

 FUNC_8(VAR_67, VAR_68, VAR_37, VAR_72);


 FUNC_9(VAR_67, VAR_68, VAR_41, 0);
 FUNC_9(VAR_67, VAR_68, VAR_32, 0);
 FUNC_9(VAR_67, VAR_68, VAR_38, 0);




 FUNC_14(VAR_67, FUNC_2(VAR_68, VAR_59), VAR_57);
 VAR_71 = VAR_13 | VAR_15;


 if (FUNC_10(VAR_67))
  VAR_71 &= ~VAR_15;

 FUNC_16(VAR_67, FUNC_2(VAR_68, VAR_58), VAR_14);
 FUNC_14(VAR_67, FUNC_2(VAR_68, VAR_58), VAR_71);





 FUNC_14(VAR_67, FUNC_2(VAR_68, VAR_60), VAR_61+1);


 FUNC_16(VAR_67, FUNC_2(VAR_68, VAR_63), VAR_14);
 FUNC_14(VAR_67, FUNC_2(VAR_68, VAR_63), VAR_13);
}
