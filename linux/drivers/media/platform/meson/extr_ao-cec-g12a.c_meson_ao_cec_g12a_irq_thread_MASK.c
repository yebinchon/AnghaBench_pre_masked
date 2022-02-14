
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_ao_cec_g12a_device {int regmap_cec; int adap; int regmap; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct meson_ao_cec_g12a_device*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_18, void *VAR_19)
{
 struct meson_ao_cec_g12a_device *VAR_20 = VAR_19;
 u32 VAR_21;

 FUNC_2(VAR_20->regmap, VAR_10, &VAR_21);
 FUNC_4(VAR_20->regmap, VAR_4, VAR_21);

 if (VAR_21 & VAR_5)
  FUNC_0(VAR_20->adap, VAR_16);

 if (VAR_21 & VAR_6)
  FUNC_1(VAR_20);

 if (VAR_21 & VAR_9)
  FUNC_0(VAR_20->adap, VAR_15);

 if (VAR_21 & VAR_3) {
  FUNC_4(VAR_20->regmap_cec, VAR_12, 0);
  FUNC_3(VAR_20->regmap_cec, VAR_0,
       VAR_1 | VAR_2, 0);
  FUNC_0(VAR_20->adap, VAR_13);
 }


 if (VAR_21 & VAR_8)
  FUNC_0(VAR_20->adap, VAR_14);


 if (VAR_21 & VAR_7)
  FUNC_4(VAR_20->regmap_cec, VAR_11, 0);

 return VAR_17;
}
