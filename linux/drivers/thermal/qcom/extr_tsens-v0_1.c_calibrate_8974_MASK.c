
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_priv {int num_sensors; int dev; } ;


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
 scalar_t__ FUNC_0 (int*) ;


 int FUNC_1 (int*) ;
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
 int VAR_76 ;
 int VAR_77 ;

 int FUNC_2 (struct tsens_priv*,int*,int*,int) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct tsens_priv *VAR_78)
{
 int VAR_79 = 0, VAR_80 = 0, VAR_81;
 u32 VAR_82[11], VAR_83[11];
 int VAR_84 = 0;
 u32 *VAR_85, *VAR_86;
 u32 VAR_87;

 VAR_85 = (u32 *)FUNC_4(VAR_78->dev, "calib");
 if (FUNC_0(VAR_85))
  return FUNC_1(VAR_85);

 VAR_86 = (u32 *)FUNC_4(VAR_78->dev, "calib_backup");
 if (FUNC_0(VAR_86)) {
  FUNC_3(VAR_85);
  return FUNC_1(VAR_86);
 }

 VAR_87 = VAR_86[1] & VAR_6;
 VAR_87 >>= VAR_7;

 if (VAR_87 == VAR_8) {
  VAR_84 = (VAR_85[4] & VAR_9) >> VAR_11;
  VAR_84 |= (VAR_85[5] & VAR_10) >> VAR_12;

  switch (VAR_84) {
  case 128:
   VAR_80 = (VAR_86[2] & VAR_1) >> VAR_2;
   VAR_83[0] = (VAR_86[2] & VAR_15) >> VAR_16;
   VAR_83[1] = (VAR_86[3] & VAR_29);
   VAR_83[2] = (VAR_86[3] & VAR_34) >> VAR_35;
   VAR_83[3] = (VAR_86[3] & VAR_39) >> VAR_40;
   VAR_83[4] = (VAR_86[3] & VAR_44) >> VAR_45;
   VAR_83[5] = (VAR_85[4] & VAR_50) >> VAR_51;
   VAR_83[6] = (VAR_85[5] & VAR_56);
   VAR_83[7] = (VAR_85[5] & VAR_61) >> VAR_62;
   VAR_83[8] = (VAR_85[5] & VAR_67) >> VAR_68;
   VAR_83[9] = (VAR_85[5] & VAR_74) >> VAR_75;
   VAR_83[10] = (VAR_85[5] & VAR_23) >> VAR_24;

  case 130:
  case 129:
   VAR_79 = VAR_86[0] & VAR_0;
   VAR_82[0] = (VAR_86[0] & VAR_13) >> VAR_14;
   VAR_82[1] = (VAR_86[0] & VAR_27) >> VAR_28;
   VAR_82[2] = (VAR_86[0] & VAR_32) >> VAR_33;
   VAR_82[3] = (VAR_86[0] & VAR_37) >> VAR_38;
   VAR_82[4] = (VAR_86[1] & VAR_43);
   VAR_82[5] = (VAR_86[1] & VAR_48) >> VAR_49;
   VAR_82[6] = (VAR_86[1] & VAR_54) >> VAR_55;
   VAR_82[7] = (VAR_86[1] & VAR_59) >> VAR_60;
   VAR_82[8] = (VAR_86[2] & VAR_65) >> VAR_66;
   VAR_82[9] = (VAR_86[2] & VAR_73) >> VAR_71;
   VAR_82[10] = (VAR_86[2] & VAR_21) >> VAR_19;
   break;
  }
 } else {
  VAR_84 = (VAR_85[1] & VAR_9) >> VAR_11;
  VAR_84 |= (VAR_85[3] & VAR_10) >> VAR_12;

  switch (VAR_84) {
  case 128:
   VAR_80 = (VAR_85[2] & VAR_3) >> VAR_4;
   VAR_83[0] = (VAR_85[2] & VAR_17) >> VAR_18;
   VAR_83[1] = (VAR_85[2] & VAR_30) >> VAR_31;
   VAR_83[2] = (VAR_85[3] & VAR_36);
   VAR_83[3] = (VAR_85[3] & VAR_41) >> VAR_42;
   VAR_83[4] = (VAR_85[3] & VAR_46) >> VAR_47;
   VAR_83[5] = (VAR_85[3] & VAR_52) >> VAR_53;
   VAR_83[6] = (VAR_85[3] & VAR_57) >> VAR_58;
   VAR_83[7] = (VAR_85[4] & VAR_63);
   VAR_83[8] = (VAR_85[4] & VAR_69) >> VAR_70;
   VAR_83[9] = (VAR_85[4] & VAR_76) >> VAR_77;
   VAR_83[10] = (VAR_85[4] & VAR_25) >> VAR_26;

  case 130:
  case 129:
   VAR_79 = VAR_85[0] & VAR_0;
   VAR_82[0] = (VAR_85[0] & VAR_13) >> VAR_14;
   VAR_82[1] = (VAR_85[0] & VAR_27) >> VAR_28;
   VAR_82[2] = (VAR_85[0] & VAR_32) >> VAR_33;
   VAR_82[3] = (VAR_85[0] & VAR_37) >> VAR_38;
   VAR_82[4] = (VAR_85[1] & VAR_43);
   VAR_82[5] = (VAR_85[1] & VAR_48) >> VAR_49;
   VAR_82[6] = (VAR_85[1] & VAR_54) >> VAR_55;
   VAR_82[7] = (VAR_85[1] & VAR_59) >> VAR_60;
   VAR_82[8] = (VAR_85[1] & VAR_64) >> VAR_66;
   VAR_82[9] = (VAR_85[2] & VAR_72);
   VAR_82[10] = (VAR_85[2] & VAR_20) >> VAR_22;
   break;
  }
 }

 switch (VAR_84) {
 case 130:
  for (VAR_81 = 0; VAR_81 < VAR_78->num_sensors; VAR_81++)
   VAR_82[VAR_81] += (VAR_79 << 2) | VAR_5;
  break;
 case 128:
  for (VAR_81 = 0; VAR_81 < VAR_78->num_sensors; VAR_81++) {
   VAR_83[VAR_81] += VAR_80;
   VAR_83[VAR_81] <<= 2;
   VAR_83[VAR_81] |= VAR_5;
  }

 case 129:
  for (VAR_81 = 0; VAR_81 < VAR_78->num_sensors; VAR_81++) {
   VAR_82[VAR_81] += VAR_79;
   VAR_82[VAR_81] <<= 2;
   VAR_82[VAR_81] |= VAR_5;
  }
  break;
 default:
  for (VAR_81 = 0; VAR_81 < VAR_78->num_sensors; VAR_81++)
   VAR_83[VAR_81] = 780;
  VAR_82[0] = 502;
  VAR_82[1] = 509;
  VAR_82[2] = 503;
  VAR_82[3] = 509;
  VAR_82[4] = 505;
  VAR_82[5] = 509;
  VAR_82[6] = 507;
  VAR_82[7] = 510;
  VAR_82[8] = 508;
  VAR_82[9] = 509;
  VAR_82[10] = 508;
  break;
 }

 FUNC_2(VAR_78, VAR_82, VAR_83, VAR_84);
 FUNC_3(VAR_85);
 FUNC_3(VAR_86);

 return 0;
}
