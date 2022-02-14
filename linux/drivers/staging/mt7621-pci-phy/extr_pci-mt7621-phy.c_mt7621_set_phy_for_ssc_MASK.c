
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7621_pci_phy_instance {int index; } ;
struct mt7621_pci_phy {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int) ;
 int VAR_17 ;
 int FUNC_7 (int) ;
 int VAR_18 ;
 int FUNC_8 (int) ;
 int VAR_19 ;
 int FUNC_9 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_11 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_12 (int) ;
 int VAR_28 ;
 int FUNC_13 (struct device*,char*) ;
 int FUNC_14 (struct mt7621_pci_phy*,int) ;
 int FUNC_15 (struct mt7621_pci_phy*,int,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct mt7621_pci_phy *VAR_29,
       struct mt7621_pci_phy_instance *VAR_30)
{
 struct device *VAR_31 = VAR_29->dev;
 u32 VAR_32 = FUNC_16(VAR_28);
 u32 VAR_33;
 u32 VAR_34;

 VAR_32 = (VAR_32 >> 6) & 0x7;


 VAR_34 = FUNC_14(VAR_29, VAR_1);
 VAR_34 &= ~(VAR_2 | VAR_21);
 VAR_34 |= VAR_2;
 VAR_34 |= FUNC_10(0x00);
 FUNC_15(VAR_29, VAR_34, VAR_1);


 VAR_33 = (VAR_30->index != 1) ?
  VAR_5 : VAR_5 + VAR_0;
 VAR_34 = FUNC_14(VAR_29, VAR_33);
 VAR_34 &= ~(VAR_4 | VAR_26);
 VAR_34 |= VAR_4;
 FUNC_15(VAR_29, VAR_34, VAR_33);


 VAR_34 = FUNC_14(VAR_29, VAR_20);
 VAR_34 &= ~(VAR_19);

 if (VAR_32 <= 5 && VAR_32 >= 3) {
  VAR_34 |= FUNC_9(0x01);
  FUNC_15(VAR_29, VAR_34, VAR_20);
  FUNC_13(VAR_31, "Xtal is 40MHz\n");
 } else {
  VAR_34 |= FUNC_9(0x00);
  FUNC_15(VAR_29, VAR_34, VAR_20);
  if (VAR_32 >= 6) {
   FUNC_13(VAR_31, "Xtal is 25MHz\n");


   VAR_34 = FUNC_14(VAR_29, VAR_16);
   VAR_34 &= ~(VAR_15);
   VAR_34 |= FUNC_6(0x01);
   FUNC_15(VAR_29, VAR_34, VAR_16);


   VAR_34 = FUNC_14(VAR_29, VAR_10);
   VAR_34 &= ~(VAR_9);
   VAR_34 |= FUNC_2(0x18000000);
   FUNC_15(VAR_29, VAR_34, VAR_10);


   VAR_34 = FUNC_14(VAR_29, VAR_10);
   VAR_34 &= ~(VAR_9);
   VAR_34 |= FUNC_2(0x18d);
   FUNC_15(VAR_29, VAR_34, VAR_10);


   VAR_34 = FUNC_14(VAR_29, VAR_8);
   VAR_34 &= ~(VAR_6 |
     VAR_7);
   VAR_34 |= FUNC_1(0x4a);
   VAR_34 |= FUNC_0(0x4a);
   FUNC_15(VAR_29, VAR_34, VAR_8);
  } else {
   FUNC_13(VAR_31, "Xtal is 20MHz\n");
  }
 }


 VAR_34 = FUNC_14(VAR_29, VAR_23);
 VAR_34 &= ~(VAR_22);
 VAR_34 |= VAR_22;
 FUNC_15(VAR_29, VAR_34, VAR_23);


 VAR_34 = FUNC_14(VAR_29, VAR_20);
 VAR_34 &= ~(VAR_11 | VAR_12 | VAR_18 |
   VAR_17 | VAR_27);
 VAR_34 |= FUNC_3(0x02);
 VAR_34 |= FUNC_4(0x06);
 VAR_34 |= FUNC_8(0x02);
 VAR_34 |= FUNC_7(0x01);
 VAR_34 |= FUNC_12(0x02);
 FUNC_15(VAR_29, VAR_34, VAR_20);

 VAR_34 = FUNC_14(VAR_29, VAR_14);
 VAR_34 &= ~(VAR_13);
 VAR_34 |= FUNC_5(0x00);
 FUNC_15(VAR_29, VAR_34, VAR_14);

 if (VAR_32 <= 5 && VAR_32 >= 3) {

  VAR_34 = FUNC_14(VAR_29, VAR_25);
  VAR_34 &= ~(VAR_24 | VAR_3);
  VAR_34 |= (FUNC_11(0x01) | VAR_3);
  FUNC_15(VAR_29, VAR_34, VAR_25);
 }
}
