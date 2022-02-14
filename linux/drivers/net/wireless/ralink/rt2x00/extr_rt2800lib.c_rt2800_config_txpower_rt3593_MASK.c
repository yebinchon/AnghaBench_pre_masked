
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rt2x00_dev {int flags; } ;
struct ieee80211_channel {int band; } ;
typedef int regs ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


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
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
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
 size_t VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 size_t VAR_46 ;
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
 size_t VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 size_t VAR_62 ;
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
 size_t VAR_73 ;
 size_t VAR_74 ;
 int VAR_75 ;
 size_t VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 size_t VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 size_t VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 size_t VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 size_t VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int FUNC_0 (scalar_t__*,char,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int,int,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,unsigned int) ;
 int FUNC_3 (struct rt2x00_dev*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,scalar_t__) ;
 int FUNC_5 (struct rt2x00_dev*,char*,char,char,int,char*,unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct rt2x00_dev *VAR_117,
      struct ieee80211_channel *VAR_118,
      int VAR_119)
{
 u8 VAR_120;
 u16 VAR_121;
 u32 VAR_122[VAR_112];
 unsigned int VAR_123;
 enum nl80211_band VAR_124 = VAR_118->band;
 int VAR_125;
 int VAR_126;

 FUNC_0(VAR_122, '\0', sizeof(VAR_122));




 VAR_125 = FUNC_3(VAR_117);

 if (VAR_124 == VAR_6)
  VAR_123 = 16;
 else
  VAR_123 = 0;

 if (FUNC_8(VAR_0, &VAR_117->flags))
  VAR_123 += 8;


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 1, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_18],
      VAR_8, VAR_120);
 FUNC_7(&VAR_122[VAR_18],
      VAR_9, VAR_120);
 FUNC_7(&VAR_122[VAR_15],
      VAR_13, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 1, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_18],
      VAR_10, VAR_120);
 FUNC_7(&VAR_122[VAR_18],
      VAR_11, VAR_120);
 FUNC_7(&VAR_122[VAR_15],
      VAR_14, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_18],
      VAR_21, VAR_120);
 FUNC_7(&VAR_122[VAR_18],
      VAR_22, VAR_120);
 FUNC_7(&VAR_122[VAR_15],
      VAR_17, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_5);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_18],
      VAR_19, VAR_120);
 FUNC_7(&VAR_122[VAR_18],
      VAR_20, VAR_120);
 FUNC_7(&VAR_122[VAR_15],
      VAR_16, VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 1);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_30],
      VAR_35, VAR_120);
 FUNC_7(&VAR_122[VAR_30],
      VAR_36, VAR_120);
 FUNC_7(&VAR_122[VAR_25],
      VAR_28, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_30],
      VAR_37, VAR_120);
 FUNC_7(&VAR_122[VAR_30],
      VAR_38, VAR_120);
 FUNC_7(&VAR_122[VAR_25],
      VAR_29, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_92],
      VAR_96, VAR_120);
 FUNC_7(&VAR_122[VAR_92],
      VAR_97, VAR_120);
 FUNC_7(&VAR_122[VAR_92],
      VAR_98, VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 2);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_30],
      VAR_31, VAR_120);
 FUNC_7(&VAR_122[VAR_30],
      VAR_32, VAR_120);
 FUNC_7(&VAR_122[VAR_25],
      VAR_26, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_30],
      VAR_33, VAR_120);
 FUNC_7(&VAR_122[VAR_30],
      VAR_34, VAR_120);
 FUNC_7(&VAR_122[VAR_25],
      VAR_27, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_46],
      VAR_49, VAR_120);
 FUNC_7(&VAR_122[VAR_46],
      VAR_50, VAR_120);
 FUNC_7(&VAR_122[VAR_41],
      VAR_43, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_5);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_46],
      VAR_51, VAR_120);
 FUNC_7(&VAR_122[VAR_46],
      VAR_52, VAR_120);
 FUNC_7(&VAR_122[VAR_41],
      VAR_44, VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 3);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_92],
      VAR_93, VAR_120);
 FUNC_7(&VAR_122[VAR_92],
      VAR_94, VAR_120);
 FUNC_7(&VAR_122[VAR_92],
      VAR_95, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_46],
      VAR_53, VAR_120);
 FUNC_7(&VAR_122[VAR_46],
      VAR_54, VAR_120);
 FUNC_7(&VAR_122[VAR_41],
      VAR_45, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_46],
      VAR_47, VAR_120);
 FUNC_7(&VAR_122[VAR_46],
      VAR_48, VAR_120);
 FUNC_7(&VAR_122[VAR_41],
      VAR_42, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_5);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_62],
      VAR_63, VAR_120);
 FUNC_7(&VAR_122[VAR_62],
      VAR_64, VAR_120);
 FUNC_7(&VAR_122[VAR_57],
      VAR_58, VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 4);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_62],
      VAR_65, VAR_120);
 FUNC_7(&VAR_122[VAR_62],
      VAR_66, VAR_120);
 FUNC_7(&VAR_122[VAR_57],
      VAR_59, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_100],
      VAR_101, VAR_120);
 FUNC_7(&VAR_122[VAR_100],
      VAR_102, VAR_120);
 FUNC_7(&VAR_122[VAR_100],
      VAR_103, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_76],
      VAR_77, VAR_120);
 FUNC_7(&VAR_122[VAR_76],
      VAR_78, VAR_120);
 FUNC_7(&VAR_122[VAR_76],
      VAR_79, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_5);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_76],
      VAR_80, VAR_120);
 FUNC_7(&VAR_122[VAR_76],
      VAR_81, VAR_120);
 FUNC_7(&VAR_122[VAR_76],
      VAR_82, VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 5);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_84],
      VAR_85, VAR_120);
 FUNC_7(&VAR_122[VAR_84],
      VAR_86, VAR_120);
 FUNC_7(&VAR_122[VAR_84],
      VAR_87, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_84],
      VAR_88, VAR_120);
 FUNC_7(&VAR_122[VAR_84],
      VAR_89, VAR_120);
 FUNC_7(&VAR_122[VAR_84],
      VAR_90, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_100],
      VAR_104, VAR_120);
 FUNC_7(&VAR_122[VAR_100],
      VAR_105, VAR_120);
 FUNC_7(&VAR_122[VAR_100],
      VAR_106, VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 6);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_62],
      VAR_67, VAR_120);
 FUNC_7(&VAR_122[VAR_62],
      VAR_68, VAR_120);
 FUNC_7(&VAR_122[VAR_57],
      VAR_60, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_3);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_62],
      VAR_69, VAR_120);
 FUNC_7(&VAR_122[VAR_62],
      VAR_70, VAR_120);
 FUNC_7(&VAR_122[VAR_57],
      VAR_61, VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_4);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_74], VAR_113, VAR_120);
 FUNC_7(&VAR_122[VAR_74], VAR_114, VAR_120);
 FUNC_7(&VAR_122[VAR_73], VAR_113,
      VAR_120);


 VAR_120 = FUNC_6(VAR_121, VAR_5);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_74], VAR_115, VAR_120);
 FUNC_7(&VAR_122[VAR_74], VAR_116, VAR_120);
 FUNC_7(&VAR_122[VAR_73], VAR_115,
      VAR_120);


 VAR_121 = FUNC_2(VAR_117, VAR_1,
            VAR_123 + 7);


 VAR_120 = FUNC_6(VAR_121, VAR_2);
 VAR_120 = FUNC_1(VAR_117, 0, VAR_124, VAR_119,
         VAR_120, VAR_125);
 FUNC_7(&VAR_122[VAR_108],
      VAR_109, VAR_120);
 FUNC_7(&VAR_122[VAR_108],
      VAR_110, VAR_120);
 FUNC_7(&VAR_122[VAR_108],
      VAR_111, VAR_120);

 FUNC_4(VAR_117, VAR_7, VAR_122[VAR_18]);
 FUNC_4(VAR_117, VAR_23, VAR_122[VAR_30]);
 FUNC_4(VAR_117, VAR_39, VAR_122[VAR_46]);
 FUNC_4(VAR_117, VAR_55, VAR_122[VAR_62]);
 FUNC_4(VAR_117, VAR_71, VAR_122[VAR_74]);
 FUNC_4(VAR_117, VAR_75, VAR_122[VAR_76]);
 FUNC_4(VAR_117, VAR_83, VAR_122[VAR_84]);
 FUNC_4(VAR_117, VAR_91, VAR_122[VAR_92]);
 FUNC_4(VAR_117, VAR_99, VAR_122[VAR_100]);
 FUNC_4(VAR_117, VAR_107, VAR_122[VAR_108]);

 FUNC_4(VAR_117, VAR_12,
         VAR_122[VAR_15]);
 FUNC_4(VAR_117, VAR_24,
         VAR_122[VAR_25]);
 FUNC_4(VAR_117, VAR_40,
         VAR_122[VAR_41]);
 FUNC_4(VAR_117, VAR_56,
         VAR_122[VAR_57]);
 FUNC_4(VAR_117, VAR_72,
         VAR_122[VAR_73]);

 for (VAR_126 = 0; VAR_126 < VAR_112; VAR_126++)
  FUNC_5(VAR_117,
      "band:%cGHz, BW:%c0MHz, TX_PWR_CFG_%d%s = %08lx\n",
      (VAR_124 == VAR_6) ? '5' : '2',
      (FUNC_8(VAR_0, &VAR_117->flags)) ?
        '4' : '2',
      (VAR_126 > VAR_108) ?
     (VAR_126 - VAR_108 - 1) : VAR_126,
      (VAR_126 > VAR_108) ? "_EXT" : "",
      (unsigned long) VAR_122[VAR_126]);
}
