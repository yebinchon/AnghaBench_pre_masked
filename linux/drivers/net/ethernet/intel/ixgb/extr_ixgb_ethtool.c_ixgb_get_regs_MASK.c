
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgb_hw {int revision_id; int device_id; } ;
struct ixgb_adapter {struct ixgb_hw hw; } ;
struct ethtool_regs {int version; int len; } ;


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
 void* FUNC_0 (struct ixgb_adapter*,int ) ;
 void* FUNC_1 (struct ixgb_hw*,int ) ;
 void* FUNC_2 (struct ixgb_hw*,int ,int) ;
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
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 struct ixgb_adapter* FUNC_3 (struct net_device*) ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_107,
     struct ethtool_regs *VAR_108, void *VAR_109)
{
 struct ixgb_adapter *VAR_110 = FUNC_3(VAR_107);
 struct ixgb_hw *VAR_111 = &VAR_110->hw;
 u32 *VAR_112 = VAR_109;
 u32 *VAR_113 = VAR_112;
 u8 VAR_114;




 VAR_108->version = (1<<24) | VAR_111->revision_id << 16 | VAR_111->device_id;


 *VAR_112++ = FUNC_1(VAR_111, VAR_3);
 *VAR_112++ = FUNC_1(VAR_111, VAR_4);
 *VAR_112++ = FUNC_1(VAR_111, VAR_34);
 *VAR_112++ = FUNC_1(VAR_111, VAR_5);
 *VAR_112++ = FUNC_1(VAR_111, VAR_14);


 *VAR_112++ = FUNC_1(VAR_111, VAR_8);
 *VAR_112++ = FUNC_1(VAR_111, VAR_9);
 *VAR_112++ = FUNC_1(VAR_111, VAR_11);
 *VAR_112++ = FUNC_1(VAR_111, VAR_10);


 *VAR_112++ = FUNC_1(VAR_111, VAR_25);
 *VAR_112++ = FUNC_1(VAR_111, VAR_7);
 *VAR_112++ = FUNC_1(VAR_111, VAR_6);
 *VAR_112++ = FUNC_1(VAR_111, VAR_27);
 *VAR_112++ = FUNC_1(VAR_111, VAR_26);
 *VAR_112++ = FUNC_1(VAR_111, VAR_29);
 *VAR_112++ = FUNC_1(VAR_111, VAR_28);
 *VAR_112++ = FUNC_1(VAR_111, VAR_30);
 *VAR_112++ = FUNC_1(VAR_111, VAR_31);
 *VAR_112++ = FUNC_1(VAR_111, VAR_33);
 *VAR_112++ = FUNC_1(VAR_111, VAR_23);
 *VAR_112++ = FUNC_1(VAR_111, VAR_32);


 for (VAR_114 = 0; VAR_114 < VAR_12; VAR_114++) {
  *VAR_112++ = FUNC_2(VAR_111, VAR_24, (VAR_114 << 1));
  *VAR_112++ = FUNC_2(VAR_111, VAR_22, (VAR_114 << 1));
 }


 *VAR_112++ = FUNC_1(VAR_111, VAR_35);
 *VAR_112++ = FUNC_1(VAR_111, VAR_37);
 *VAR_112++ = FUNC_1(VAR_111, VAR_36);
 *VAR_112++ = FUNC_1(VAR_111, VAR_39);
 *VAR_112++ = FUNC_1(VAR_111, VAR_38);
 *VAR_112++ = FUNC_1(VAR_111, VAR_40);
 *VAR_112++ = FUNC_1(VAR_111, VAR_41);
 *VAR_112++ = FUNC_1(VAR_111, VAR_43);
 *VAR_112++ = FUNC_1(VAR_111, VAR_42);
 *VAR_112++ = FUNC_1(VAR_111, VAR_17);


 *VAR_112++ = FUNC_1(VAR_111, VAR_18);
 *VAR_112++ = FUNC_1(VAR_111, VAR_19);
 *VAR_112++ = FUNC_1(VAR_111, VAR_20);
 *VAR_112++ = FUNC_1(VAR_111, VAR_21);
 *VAR_112++ = FUNC_1(VAR_111, VAR_45);
 *VAR_112++ = FUNC_1(VAR_111, VAR_44);
 *VAR_112++ = FUNC_1(VAR_111, VAR_46);
 *VAR_112++ = FUNC_1(VAR_111, VAR_13);
 *VAR_112++ = FUNC_1(VAR_111, VAR_1);
 *VAR_112++ = FUNC_1(VAR_111, VAR_2);
 *VAR_112++ = FUNC_1(VAR_111, VAR_0);
 *VAR_112++ = FUNC_1(VAR_111, VAR_15);
 *VAR_112++ = FUNC_1(VAR_111, VAR_16);


 *VAR_112++ = FUNC_0(VAR_110, VAR_90);
 *VAR_112++ = FUNC_0(VAR_110, VAR_89);
 *VAR_112++ = FUNC_0(VAR_110, VAR_59);
 *VAR_112++ = FUNC_0(VAR_110, VAR_58);
 *VAR_112++ = FUNC_0(VAR_110, VAR_48);
 *VAR_112++ = FUNC_0(VAR_110, VAR_47);
 *VAR_112++ = FUNC_0(VAR_110, VAR_73);
 *VAR_112++ = FUNC_0(VAR_110, VAR_72);
 *VAR_112++ = FUNC_0(VAR_110, VAR_96);
 *VAR_112++ = FUNC_0(VAR_110, VAR_95);
 *VAR_112++ = FUNC_0(VAR_110, VAR_100);
 *VAR_112++ = FUNC_0(VAR_110, VAR_99);
 *VAR_112++ = FUNC_0(VAR_110, VAR_65);
 *VAR_112++ = FUNC_0(VAR_110, VAR_64);
 *VAR_112++ = FUNC_0(VAR_110, VAR_55);
 *VAR_112++ = FUNC_0(VAR_110, VAR_54);
 *VAR_112++ = FUNC_0(VAR_110, VAR_86);
 *VAR_112++ = FUNC_0(VAR_110, VAR_85);
 *VAR_112++ = FUNC_0(VAR_110, VAR_82);
 *VAR_112++ = FUNC_0(VAR_110, VAR_84);
 *VAR_112++ = FUNC_0(VAR_110, VAR_83);
 *VAR_112++ = FUNC_0(VAR_110, VAR_81);
 *VAR_112++ = FUNC_0(VAR_110, VAR_51);
 *VAR_112++ = FUNC_0(VAR_110, VAR_63);
 *VAR_112++ = FUNC_0(VAR_110, VAR_53);
 *VAR_112++ = FUNC_0(VAR_110, VAR_71);
 *VAR_112++ = FUNC_0(VAR_110, VAR_92);
 *VAR_112++ = FUNC_0(VAR_110, VAR_91);
 *VAR_112++ = FUNC_0(VAR_110, VAR_61);
 *VAR_112++ = FUNC_0(VAR_110, VAR_60);
 *VAR_112++ = FUNC_0(VAR_110, VAR_50);
 *VAR_112++ = FUNC_0(VAR_110, VAR_49);
 *VAR_112++ = FUNC_0(VAR_110, VAR_75);
 *VAR_112++ = FUNC_0(VAR_110, VAR_74);
 *VAR_112++ = FUNC_0(VAR_110, VAR_98);
 *VAR_112++ = FUNC_0(VAR_110, VAR_97);
 *VAR_112++ = FUNC_0(VAR_110, VAR_102);
 *VAR_112++ = FUNC_0(VAR_110, VAR_101);
 *VAR_112++ = FUNC_0(VAR_110, VAR_67);
 *VAR_112++ = FUNC_0(VAR_110, VAR_66);
 *VAR_112++ = FUNC_0(VAR_110, VAR_57);
 *VAR_112++ = FUNC_0(VAR_110, VAR_56);
 *VAR_112++ = FUNC_0(VAR_110, VAR_88);
 *VAR_112++ = FUNC_0(VAR_110, VAR_87);
 *VAR_112++ = FUNC_0(VAR_110, VAR_52);
 *VAR_112++ = FUNC_0(VAR_110, VAR_78);
 *VAR_112++ = FUNC_0(VAR_110, VAR_93);
 *VAR_112++ = FUNC_0(VAR_110, VAR_94);
 *VAR_112++ = FUNC_0(VAR_110, VAR_62);
 *VAR_112++ = FUNC_0(VAR_110, VAR_79);
 *VAR_112++ = FUNC_0(VAR_110, VAR_68);
 *VAR_112++ = FUNC_0(VAR_110, VAR_76);
 *VAR_112++ = FUNC_0(VAR_110, VAR_77);
 *VAR_112++ = FUNC_0(VAR_110, VAR_69);
 *VAR_112++ = FUNC_0(VAR_110, VAR_70);
 *VAR_112++ = FUNC_0(VAR_110, VAR_105);
 *VAR_112++ = FUNC_0(VAR_110, VAR_106);
 *VAR_112++ = FUNC_0(VAR_110, VAR_103);
 *VAR_112++ = FUNC_0(VAR_110, VAR_104);
 *VAR_112++ = FUNC_0(VAR_110, VAR_80);

 VAR_108->len = (VAR_112 - VAR_113) * sizeof(u32);
}
