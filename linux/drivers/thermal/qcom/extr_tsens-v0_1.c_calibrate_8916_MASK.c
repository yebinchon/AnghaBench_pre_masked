
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsens_priv {int num_sensors; int dev; } ;
typedef int base0 ;


 scalar_t__ FUNC_0 (int*) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

 int FUNC_1 (int*) ;

 int FUNC_2 (struct tsens_priv*,int*,int*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct tsens_priv *VAR_25)
{
 int VAR_26 = 0, VAR_27 = 0, VAR_28;
 u32 VAR_29[5], VAR_30[5];
 int VAR_31 = 0;
 u32 *VAR_32, *VAR_33;

 VAR_32 = (u32 *)FUNC_5(VAR_25->dev, "calib");
 if (FUNC_0(VAR_32))
  return FUNC_1(VAR_32);

 VAR_33 = (u32 *)FUNC_5(VAR_25->dev, "calib_sel");
 if (FUNC_0(VAR_33)) {
  FUNC_4(VAR_32);
  return FUNC_1(VAR_33);
 }

 VAR_31 = (VAR_33[0] & VAR_3) >> VAR_4;
 FUNC_3(VAR_25->dev, "calibration mode is %d\n", VAR_31);

 switch (VAR_31) {
 case 128:
  VAR_27 = (VAR_32[1] & VAR_1) >> VAR_2;
  VAR_30[0] = (VAR_32[0] & VAR_7) >> VAR_8;
  VAR_30[1] = (VAR_32[0] & VAR_11) >> VAR_12;
  VAR_30[2] = (VAR_32[1] & VAR_15) >> VAR_16;
  VAR_30[3] = (VAR_32[1] & VAR_19) >> VAR_20;
  VAR_30[4] = (VAR_32[1] & VAR_23) >> VAR_24;
  for (VAR_28 = 0; VAR_28 < VAR_25->num_sensors; VAR_28++)
   VAR_30[VAR_28] = ((VAR_27 + VAR_30[VAR_28]) << 3);

 case 129:
  VAR_26 = (VAR_32[0] & VAR_0);
  VAR_29[0] = (VAR_32[0] & VAR_5) >> VAR_6;
  VAR_29[1] = (VAR_32[0] & VAR_9) >> VAR_10;
  VAR_29[2] = (VAR_32[0] & VAR_13) >> VAR_14;
  VAR_29[3] = (VAR_32[1] & VAR_17) >> VAR_18;
  VAR_29[4] = (VAR_32[1] & VAR_21) >> VAR_22;
  for (VAR_28 = 0; VAR_28 < VAR_25->num_sensors; VAR_28++)
   VAR_29[VAR_28] = (((VAR_26) + VAR_29[VAR_28]) << 3);
  break;
 default:
  for (VAR_28 = 0; VAR_28 < VAR_25->num_sensors; VAR_28++) {
   VAR_29[VAR_28] = 500;
   VAR_30[VAR_28] = 780;
  }
  break;
 }

 FUNC_2(VAR_25, VAR_29, VAR_30, VAR_31);
 FUNC_4(VAR_32);
 FUNC_4(VAR_33);

 return 0;
}
