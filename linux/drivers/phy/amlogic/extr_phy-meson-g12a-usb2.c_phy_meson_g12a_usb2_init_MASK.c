
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_g12a_usb2_priv {int regmap; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ,int) ;
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
 struct phy_meson_g12a_usb2_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_54)
{
 struct phy_meson_g12a_usb2_priv *VAR_55 = FUNC_1(VAR_54);
 int VAR_56;

 VAR_56 = FUNC_4(VAR_55->reset);
 if (VAR_56)
  return VAR_56;

 FUNC_5(VAR_53);


 FUNC_2(VAR_55->regmap, VAR_39,
      VAR_40, 0);


 FUNC_3(VAR_55->regmap, VAR_4,
       FUNC_0(VAR_9, 20) |
       FUNC_0(VAR_10, 1) |
       VAR_7 |
       FUNC_0(VAR_8, 1) |
       VAR_6 |
       VAR_5 |
       VAR_11);

 FUNC_3(VAR_55->regmap, VAR_12,
       FUNC_0(VAR_15, 0) |
       FUNC_0(VAR_17, 7) |
       FUNC_0(VAR_16, 7) |
       FUNC_0(VAR_14, 2) |
       FUNC_0(VAR_13, 9));

 FUNC_3(VAR_55->regmap, VAR_18,
       FUNC_0(VAR_25, 1) |
       FUNC_0(VAR_27, 9) |
       FUNC_0(VAR_26, 0x27) |
       FUNC_0(VAR_28, 1) |
       FUNC_0(VAR_29, 7) |
       FUNC_0(VAR_24, 3) |
       FUNC_0(VAR_23, 1) |
       FUNC_0(VAR_22, 0) |
       FUNC_0(VAR_21, 3) |
       FUNC_0(VAR_20, 1) |
       VAR_19);

 FUNC_5(VAR_52);


 FUNC_3(VAR_55->regmap, VAR_4,
       FUNC_0(VAR_9, 20) |
       FUNC_0(VAR_10, 1) |
       VAR_7 |
       FUNC_0(VAR_8, 1) |
       VAR_6 |
       VAR_5);


 FUNC_3(VAR_55->regmap, VAR_30,
       FUNC_0(VAR_38, 4) |
       VAR_37 |
       FUNC_0(VAR_34, 15) |
       VAR_35 |
       FUNC_0(VAR_36, 3) |
       FUNC_0(VAR_31, 0) |
       FUNC_0(VAR_33, 0) |
       FUNC_0(VAR_32, 0));

 FUNC_3(VAR_55->regmap, VAR_45,
       FUNC_0(VAR_48, 0xf) |
       FUNC_0(VAR_46, 0xf) |
       FUNC_0(VAR_47, 0xf) |
       VAR_51 |
       FUNC_0(VAR_49, 0) |
       FUNC_0(VAR_50, 0));


 FUNC_3(VAR_55->regmap, VAR_41,
       FUNC_0(VAR_44, 0) |
       FUNC_0(VAR_43, 1) |
       FUNC_0(VAR_42, 3));


 FUNC_3(VAR_55->regmap, VAR_3, 0);
 FUNC_3(VAR_55->regmap, VAR_0,
       VAR_2 |
       FUNC_0(VAR_1, 7));

 return 0;
}
