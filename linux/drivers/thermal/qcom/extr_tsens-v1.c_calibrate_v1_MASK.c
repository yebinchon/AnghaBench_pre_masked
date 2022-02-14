
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_priv {int num_sensors; int dev; } ;
typedef int base0 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int*) ;

 int FUNC_1 (int*) ;
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

 int FUNC_2 (struct tsens_priv*,int*,int*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct tsens_priv *VAR_50)
{
 u32 VAR_51 = 0, VAR_52 = 0;
 u32 VAR_53[10], VAR_54[10];
 u32 VAR_55 = 0, VAR_56 = 0, VAR_57 = 0;
 u32 *VAR_58;
 int VAR_59;

 VAR_58 = (u32 *)FUNC_5(VAR_50->dev, "calib");
 if (FUNC_0(VAR_58))
  return FUNC_1(VAR_58);

 VAR_55 = (VAR_58[4] & VAR_4) >> VAR_5;
 FUNC_3(VAR_50->dev, "calibration mode is %d\n", VAR_55);

 switch (VAR_55) {
 case 128:
  VAR_52 = (VAR_58[4] & VAR_2) >> VAR_3;
  VAR_54[0] = (VAR_58[0] & VAR_8) >> VAR_9;
  VAR_54[1] = (VAR_58[0] & VAR_12) >> VAR_13;

  VAR_56 = (VAR_58[0] & VAR_16) >> VAR_18;
  VAR_57 = (VAR_58[1] & VAR_17) >> VAR_19;
  VAR_54[2] = VAR_57 << 2 | VAR_56;
  VAR_54[3] = (VAR_58[1] & VAR_22) >> VAR_23;
  VAR_54[4] = (VAR_58[1] & VAR_26) >> VAR_27;
  VAR_54[5] = (VAR_58[2] & VAR_30) >> VAR_31;
  VAR_54[6] = (VAR_58[2] & VAR_34) >> VAR_35;

  VAR_56 = (VAR_58[2] & VAR_38) >> VAR_40;
  VAR_57 = (VAR_58[3] & VAR_39) >> VAR_41;
  VAR_54[7] = VAR_57 << 2 | VAR_56;
  VAR_54[8] = (VAR_58[3] & VAR_44) >> VAR_45;
  VAR_54[9] = (VAR_58[3] & VAR_48) >> VAR_49;
  for (VAR_59 = 0; VAR_59 < VAR_50->num_sensors; VAR_59++)
   VAR_54[VAR_59] = ((VAR_52 + VAR_54[VAR_59]) << 2);

 case 129:
  VAR_51 = (VAR_58[4] & VAR_0) >> VAR_1;
  VAR_53[0] = (VAR_58[0] & VAR_6) >> VAR_7;
  VAR_53[1] = (VAR_58[0] & VAR_10) >> VAR_11;
  VAR_53[2] = (VAR_58[0] & VAR_14) >> VAR_15;
  VAR_53[3] = (VAR_58[1] & VAR_20) >> VAR_21;
  VAR_53[4] = (VAR_58[1] & VAR_24) >> VAR_25;
  VAR_53[5] = (VAR_58[2] & VAR_28) >> VAR_29;
  VAR_53[6] = (VAR_58[2] & VAR_32) >> VAR_33;
  VAR_53[7] = (VAR_58[2] & VAR_36) >> VAR_37;
  VAR_53[8] = (VAR_58[3] & VAR_42) >> VAR_43;
  VAR_53[9] = (VAR_58[3] & VAR_46) >> VAR_47;
  for (VAR_59 = 0; VAR_59 < VAR_50->num_sensors; VAR_59++)
   VAR_53[VAR_59] = (((VAR_51) + VAR_53[VAR_59]) << 2);
  break;
 default:
  for (VAR_59 = 0; VAR_59 < VAR_50->num_sensors; VAR_59++) {
   VAR_53[VAR_59] = 500;
   VAR_54[VAR_59] = 780;
  }
  break;
 }

 FUNC_2(VAR_50, VAR_53, VAR_54, VAR_55);
 FUNC_4(VAR_58);

 return 0;
}
