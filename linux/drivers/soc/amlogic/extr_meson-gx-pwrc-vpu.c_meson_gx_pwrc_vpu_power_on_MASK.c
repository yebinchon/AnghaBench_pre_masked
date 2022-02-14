
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_gx_pwrc_vpu {int rstc; int regmap_ao; int regmap_hhi; } ;
struct generic_pm_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct meson_gx_pwrc_vpu* FUNC_1 (struct generic_pm_domain*) ;
 int FUNC_2 (struct meson_gx_pwrc_vpu*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct generic_pm_domain *VAR_6)
{
 struct meson_gx_pwrc_vpu *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;
 int VAR_9;

 FUNC_3(VAR_7->regmap_ao, VAR_0,
      VAR_1, 0);
 FUNC_6(20);


 for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 2) {
  FUNC_3(VAR_7->regmap_hhi, VAR_4,
       0x3 << VAR_9, 0);
  FUNC_6(5);
 }

 for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 2) {
  FUNC_3(VAR_7->regmap_hhi, VAR_5,
       0x3 << VAR_9, 0);
  FUNC_6(5);
 }

 for (VAR_9 = 8; VAR_9 < 16; VAR_9++) {
  FUNC_3(VAR_7->regmap_hhi, VAR_3,
       FUNC_0(VAR_9), 0);
  FUNC_6(5);
 }
 FUNC_6(20);

 VAR_8 = FUNC_4(VAR_7->rstc);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_7->regmap_ao, VAR_0,
      VAR_2, 0);

 VAR_8 = FUNC_5(VAR_7->rstc);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 return 0;
}
