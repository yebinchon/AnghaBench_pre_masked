
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cas {int phy_type; int phy_id; int cas_flags; scalar_t__ regs; int dev; } ;


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
 scalar_t__ FUNC_0 (int) ;
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
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (struct cas*,int ) ;
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (struct cas*,int ) ;
 int FUNC_4 (struct cas*,int ,int) ;
 int FUNC_5 (struct cas*) ;
 int FUNC_6 (struct cas*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct cas *VAR_42)
{
 u16 VAR_43;


 if (FUNC_0(VAR_42->phy_type)) {
  FUNC_10(VAR_21,
         VAR_42->regs + VAR_34);

  FUNC_1(VAR_42, 0);
  FUNC_5(VAR_42);

  if (VAR_31 == VAR_42->phy_id) {

   FUNC_4(VAR_42, VAR_17, 0x8000);
   FUNC_4(VAR_42, VAR_19, 0x00f1);
   FUNC_4(VAR_42, VAR_17, 0x0);

  } else if (VAR_30 == (VAR_42->phy_id & 0xFFFFFFFC)) {

   FUNC_4(VAR_42, VAR_8, 0x0C20);
   FUNC_4(VAR_42, VAR_7, 0x0012);
   FUNC_4(VAR_42, VAR_6, 0x1804);
   FUNC_4(VAR_42, VAR_7, 0x0013);
   FUNC_4(VAR_42, VAR_6, 0x1204);
   FUNC_4(VAR_42, VAR_7, 0x8006);
   FUNC_4(VAR_42, VAR_6, 0x0132);
   FUNC_4(VAR_42, VAR_7, 0x8006);
   FUNC_4(VAR_42, VAR_6, 0x0232);
   FUNC_4(VAR_42, VAR_7, 0x201F);
   FUNC_4(VAR_42, VAR_6, 0x0A20);

  } else if (VAR_29 == VAR_42->phy_id) {
   VAR_43 = FUNC_3(VAR_42, VAR_5);
   VAR_43 = FUNC_3(VAR_42, VAR_5);
   if (VAR_43 & 0x0080) {

    FUNC_4(VAR_42, VAR_5,
           VAR_43 & ~0x0080);
   }

  } else if (VAR_42->cas_flags & VAR_14) {
   FUNC_10((VAR_42->phy_type & VAR_16) ?
          VAR_40 : 0x0,
          VAR_42->regs + VAR_39);





   if (VAR_32 == VAR_42->phy_id) {
    FUNC_6(VAR_42);
   }
   FUNC_2(VAR_42);
  }


  VAR_43 = FUNC_3(VAR_42, VAR_19);
  VAR_43 &= ~VAR_4;
  FUNC_4(VAR_42, VAR_19, VAR_43);
  FUNC_9(10);

  FUNC_4(VAR_42, VAR_18,
         FUNC_3(VAR_42, VAR_18) |
         (VAR_3 | VAR_2 |
          VAR_1 | VAR_0 |
          VAR_12 |
          VAR_11));

  if (VAR_42->cas_flags & VAR_13) {



   VAR_43 = FUNC_3(VAR_42, VAR_15);
   VAR_43 &= ~VAR_10;
   VAR_43 |= VAR_9;
   FUNC_4(VAR_42, VAR_15, VAR_43);
  }

 } else {

  u32 VAR_44;
  int VAR_45;

  FUNC_10(VAR_22,
         VAR_42->regs + VAR_34);


  if (VAR_42->cas_flags & VAR_14)
   FUNC_10(0, VAR_42->regs + VAR_39);


  VAR_44 = FUNC_8(VAR_42->regs + VAR_36);
  VAR_44 |= VAR_27;
  FUNC_10(VAR_44, VAR_42->regs + VAR_36);

  VAR_45 = VAR_41;
  while (--VAR_45 > 0) {
   FUNC_9(10);
   if ((FUNC_8(VAR_42->regs + VAR_36) &
        VAR_27) == 0)
    break;
  }
  if (VAR_45 <= 0)
   FUNC_7(VAR_42->dev, "PCS reset bit would not clear [%08x]\n",
        FUNC_8(VAR_42->regs + VAR_38));




  FUNC_10(0x0, VAR_42->regs + VAR_33);


  VAR_44 = FUNC_8(VAR_42->regs + VAR_35);
  VAR_44 &= ~VAR_25;
  VAR_44 |= (VAR_24 | VAR_26 |
   VAR_23);
  FUNC_10(VAR_44, VAR_42->regs + VAR_35);


  FUNC_10(VAR_20, VAR_42->regs + VAR_33);


  FUNC_10(VAR_28,
         VAR_42->regs + VAR_37);
 }
}
