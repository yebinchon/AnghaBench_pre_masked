
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct bdisp_dev* private; } ;
struct bdisp_dev {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
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
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ VAR_59 ;
 int VAR_60 ;
 scalar_t__ VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 scalar_t__ VAR_65 ;
 int VAR_66 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct seq_file*,char*,unsigned int,...) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_67, void *VAR_68)
{
 struct bdisp_dev *VAR_69 = VAR_67->private;
 int VAR_70;
 unsigned int VAR_71;

 VAR_70 = FUNC_1(VAR_69->dev);
 if (VAR_70 < 0) {
  FUNC_5(VAR_67, "Cannot wake up IP\n");
  return 0;
 }

 FUNC_4(VAR_67, "Reg @ = 0x%p\n", VAR_69->regs);

 FUNC_5(VAR_67, "\nStatic:\n");
 FUNC_0(VAR_6);
 FUNC_0(VAR_13);
 FUNC_0(VAR_54);
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 FUNC_0(VAR_12);

 FUNC_5(VAR_67, "\nPlugs:\n");
 FUNC_0(VAR_27);
 FUNC_0(VAR_25);
 FUNC_0(VAR_26);
 FUNC_0(VAR_28);
 FUNC_0(VAR_31);
 FUNC_0(VAR_29);
 FUNC_0(VAR_30);
 FUNC_0(VAR_32);
 FUNC_0(VAR_35);
 FUNC_0(VAR_33);
 FUNC_0(VAR_34);
 FUNC_0(VAR_36);
 FUNC_0(VAR_39);
 FUNC_0(VAR_37);
 FUNC_0(VAR_38);
 FUNC_0(VAR_40);

 FUNC_5(VAR_67, "\nNode:\n");
 FUNC_0(VAR_20);
 FUNC_0(VAR_5);
 FUNC_0(VAR_11);
 FUNC_0(VAR_0);
 FUNC_0(VAR_55);
 FUNC_0(VAR_57);
 FUNC_0(VAR_58);
 FUNC_0(VAR_56);
 FUNC_0(VAR_43);
 FUNC_0(VAR_44);
 FUNC_0(VAR_45);
 FUNC_0(VAR_46);
 FUNC_0(VAR_48);
 FUNC_0(VAR_49);
 FUNC_0(VAR_47);
 FUNC_0(VAR_50);
 FUNC_0(VAR_52);
 FUNC_0(VAR_53);
 FUNC_0(VAR_51);
 FUNC_0(VAR_8);
 FUNC_0(VAR_41);
 FUNC_0(VAR_42);
 FUNC_0(VAR_10);
 FUNC_0(VAR_60);
 FUNC_0(VAR_63);
 FUNC_0(VAR_64);
 FUNC_0(VAR_62);
 FUNC_0(VAR_66);
 FUNC_0(VAR_14);
 FUNC_0(VAR_15);
 FUNC_0(VAR_16);
 FUNC_0(VAR_17);
 FUNC_0(VAR_21);
 FUNC_0(VAR_22);
 FUNC_0(VAR_23);
 FUNC_0(VAR_24);
 FUNC_0(VAR_7);

 FUNC_5(VAR_67, "\nFilter:\n");
 for (VAR_71 = 0; VAR_71 < VAR_18; VAR_71++) {
  FUNC_4(VAR_67, "BLT_HFC%d \t0x%08X\n", VAR_71,
      FUNC_3(VAR_69->regs + VAR_9 + VAR_71 * 4));
 }
 for (VAR_71 = 0; VAR_71 < VAR_19; VAR_71++) {
  FUNC_4(VAR_67, "BLT_VFC%d \t0x%08X\n", VAR_71,
      FUNC_3(VAR_69->regs + VAR_59 + VAR_71 * 4));
 }

 FUNC_5(VAR_67, "\nLuma filter:\n");
 for (VAR_71 = 0; VAR_71 < VAR_18; VAR_71++) {
  FUNC_4(VAR_67, "BLT_Y_HFC%d \t0x%08X\n", VAR_71,
      FUNC_3(VAR_69->regs + VAR_61 + VAR_71 * 4));
 }
 for (VAR_71 = 0; VAR_71 < VAR_19; VAR_71++) {
  FUNC_4(VAR_67, "BLT_Y_VFC%d \t0x%08X\n", VAR_71,
      FUNC_3(VAR_69->regs + VAR_65 + VAR_71 * 4));
 }

 FUNC_2(VAR_69->dev);

 return 0;
}
