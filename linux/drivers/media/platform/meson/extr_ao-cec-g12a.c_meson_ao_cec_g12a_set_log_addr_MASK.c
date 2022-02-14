
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct meson_ao_cec_g12a_device {int regmap_cec; } ;
struct cec_adapter {struct meson_ao_cec_g12a_device* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct cec_adapter *VAR_5, u8 VAR_6)
{
 struct meson_ao_cec_g12a_device *VAR_7 = VAR_5->priv;
 int VAR_8 = 0;

 if (VAR_6 == VAR_2) {

  FUNC_2(VAR_7->regmap_cec, VAR_1, 0);
  FUNC_2(VAR_7->regmap_cec, VAR_0, 0);

  return 0;
 } else if (VAR_6 < 8) {
  VAR_8 = FUNC_1(VAR_7->regmap_cec, VAR_1,
      FUNC_0(VAR_6),
      FUNC_0(VAR_6));
 } else {
  VAR_8 = FUNC_1(VAR_7->regmap_cec, VAR_0,
      FUNC_0(VAR_6 - 8),
      FUNC_0(VAR_6 - 8));
 }


 VAR_8 |= FUNC_1(VAR_7->regmap_cec, VAR_0,
      FUNC_0(VAR_3 - 8),
      FUNC_0(VAR_3 - 8));

 return VAR_8 ? -VAR_4 : 0;
}
