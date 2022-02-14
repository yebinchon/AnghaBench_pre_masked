
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sky2_status_le {int dummy; } ;
struct sky2_hw {scalar_t__ chip_id; int ports; scalar_t__ chip_rev; int st_size; int st_dma; scalar_t__ st_idx; int st_le; struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ pcie_cap; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 int VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_69 ;
 scalar_t__ VAR_70 ;
 scalar_t__ VAR_71 ;
 scalar_t__ VAR_72 ;
 scalar_t__ VAR_73 ;
 scalar_t__ VAR_74 ;
 scalar_t__ VAR_75 ;
 scalar_t__ VAR_76 ;
 scalar_t__ VAR_77 ;
 scalar_t__ VAR_78 ;
 scalar_t__ VAR_79 ;
 scalar_t__ VAR_80 ;
 scalar_t__ VAR_81 ;
 scalar_t__ VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 scalar_t__ VAR_92 ;
 scalar_t__ VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 scalar_t__ VAR_96 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct sky2_hw*,int) ;
 int FUNC_6 (struct sky2_hw*,scalar_t__) ;
 int FUNC_7 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_8 (struct sky2_hw*,int ,int ) ;
 int FUNC_9 (struct sky2_hw*) ;
 int FUNC_10 (struct sky2_hw*,scalar_t__) ;
 int FUNC_11 (struct sky2_hw*,int ) ;
 int FUNC_12 (struct sky2_hw*,int) ;
 int FUNC_13 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_14 (struct sky2_hw*,scalar_t__,int) ;
 int FUNC_15 (struct sky2_hw*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_16(struct sky2_hw *VAR_97)
{
 struct pci_dev *VAR_98 = VAR_97->pdev;
 u16 VAR_99;
 int VAR_100;
 u32 VAR_101 = VAR_94;


 if (VAR_97->chip_id == VAR_21
     || VAR_97->chip_id == VAR_25) {
  FUNC_14(VAR_97, VAR_29, 0);
  VAR_99 = FUNC_10(VAR_97, VAR_46);
  VAR_99 &= ~(VAR_47 | VAR_49 |
       VAR_50);





  VAR_99 &= ~VAR_48;
  FUNC_13(VAR_97, VAR_46, VAR_99);
  FUNC_14(VAR_97, VAR_29, 0);
 } else
  FUNC_15(VAR_97, VAR_4, VAR_91);
 FUNC_13(VAR_97, VAR_0, VAR_90);


 FUNC_15(VAR_97, VAR_0, VAR_32);
 FUNC_15(VAR_97, VAR_0, VAR_31);


 FUNC_15(VAR_97, VAR_7, VAR_87);


 VAR_99 = FUNC_6(VAR_97, VAR_56);
 VAR_99 |= VAR_57;
 FUNC_7(VAR_97, VAR_56, VAR_99);

 FUNC_15(VAR_97, VAR_0, VAR_30);

 if (FUNC_4(VAR_98)) {
  FUNC_14(VAR_97, VAR_92 + VAR_52,
        0xfffffffful);


  if (FUNC_11(VAR_97, VAR_2) & VAR_95)
   FUNC_2(&VAR_98->dev, "ignoring stuck error report bit\n");
  else
   VAR_101 |= VAR_95;
 }

 FUNC_9(VAR_97);
 FUNC_15(VAR_97, VAR_7, VAR_86);

 for (VAR_100 = 0; VAR_100 < VAR_97->ports; VAR_100++) {
  FUNC_15(VAR_97, FUNC_1(VAR_100, VAR_35), VAR_41);
  FUNC_15(VAR_97, FUNC_1(VAR_100, VAR_35), VAR_40);

  if (VAR_97->chip_id == VAR_21 ||
      VAR_97->chip_id == VAR_25)
   FUNC_13(VAR_97, FUNC_1(VAR_100, VAR_34),
         VAR_37 | VAR_38
         | VAR_39);

 }

 if (VAR_97->chip_id == VAR_25 && VAR_97->chip_rev > VAR_28) {

  FUNC_8(VAR_97, VAR_51, VAR_64);
 }

 if (VAR_97->chip_id == VAR_22 ||
     VAR_97->chip_id == VAR_24 ||
     VAR_97->chip_id == VAR_23) {
  u16 VAR_102;

  if (VAR_97->chip_id == VAR_22 && VAR_97->chip_rev == 0) {

   FUNC_14(VAR_97, VAR_96, (0x80UL << 16) | (1 << 7));


   VAR_102 = 10;


   FUNC_14(VAR_97, VAR_96, VAR_58 | (0x08UL << 16));
  } else {

   VAR_102 = 3;
  }

  VAR_102 <<= VAR_63;
  VAR_102 |= VAR_62;


  FUNC_15(VAR_97, VAR_7, VAR_87);
  FUNC_7(VAR_97, VAR_61, VAR_102);


  VAR_102 = FUNC_6(VAR_97, VAR_60);
  if (VAR_102 & VAR_54)

   FUNC_7(VAR_97, VAR_98->pcie_cap + VAR_53,
      VAR_102);

  if (VAR_97->chip_id == VAR_24 &&
   VAR_97->chip_rev == VAR_27) {

   VAR_102 = FUNC_10(VAR_97, VAR_45);
   FUNC_13(VAR_97, VAR_45, VAR_102 | VAR_44);


   VAR_102 = FUNC_10(VAR_97, VAR_93 + VAR_55);
   FUNC_13(VAR_97, VAR_93 + VAR_55, VAR_102 | VAR_59);
  }

  FUNC_15(VAR_97, VAR_7, VAR_86);


  FUNC_14(VAR_97, VAR_96, VAR_58 | (0x08UL << 16));
 }


 FUNC_14(VAR_97, VAR_5, 1);


 FUNC_15(VAR_97, VAR_6, VAR_85);
 FUNC_15(VAR_97, VAR_6, VAR_83);


 FUNC_14(VAR_97, VAR_3, VAR_33);


 FUNC_15(VAR_97, VAR_36, VAR_43);
 FUNC_15(VAR_97, VAR_36, VAR_42);


 for (VAR_100 = 0; VAR_100 < VAR_97->ports; VAR_100++)
  FUNC_15(VAR_97, FUNC_1(VAR_100, VAR_88), VAR_89);


 for (VAR_100 = 0; VAR_100 < VAR_97->ports; VAR_100++) {
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_8), VAR_65);

  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_15), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_17), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_19), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_9), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_11), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_13), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_16), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_18), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_20), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_10), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_12), VAR_69);
  FUNC_15(VAR_97, FUNC_0(VAR_100, VAR_14), VAR_69);
 }

 FUNC_14(VAR_97, VAR_1, VAR_101);

 for (VAR_100 = 0; VAR_100 < VAR_97->ports; VAR_100++)
  FUNC_5(VAR_97, VAR_100);

 FUNC_3(VAR_97->st_le, 0, VAR_97->st_size * sizeof(struct sky2_status_le));
 VAR_97->st_idx = 0;

 FUNC_14(VAR_97, VAR_70, VAR_68);
 FUNC_14(VAR_97, VAR_70, VAR_67);

 FUNC_14(VAR_97, VAR_79, VAR_97->st_dma);
 FUNC_14(VAR_97, VAR_78, (u64) VAR_97->st_dma >> 32);


 FUNC_13(VAR_97, VAR_75, VAR_97->st_size - 1);

 FUNC_13(VAR_97, VAR_80, 10);
 FUNC_15(VAR_97, VAR_72, 16);


 if (VAR_97->chip_id == VAR_26 && VAR_97->chip_rev == 0)
  FUNC_15(VAR_97, VAR_71, 4);
 else
  FUNC_15(VAR_97, VAR_71, 16);

 FUNC_14(VAR_97, VAR_82, FUNC_12(VAR_97, 1000));
 FUNC_14(VAR_97, VAR_74, FUNC_12(VAR_97, 20));
 FUNC_14(VAR_97, VAR_77, FUNC_12(VAR_97, 100));


 FUNC_14(VAR_97, VAR_70, VAR_66);

 FUNC_15(VAR_97, VAR_81, VAR_84);
 FUNC_15(VAR_97, VAR_76, VAR_84);
 FUNC_15(VAR_97, VAR_73, VAR_84);
}
