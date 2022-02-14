
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_gx_pwrc_vpu {int vapb_clk; int vpu_clk; int regmap_ao; int regmap_hhi; } ;
struct generic_pm_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct meson_gx_pwrc_vpu* FUNC_2 (struct generic_pm_domain*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct generic_pm_domain *VAR_7)
{
 struct meson_gx_pwrc_vpu *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 FUNC_4(VAR_8->regmap_ao, VAR_0,
      VAR_2, VAR_2);
 FUNC_5(20);


 for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 2) {
  FUNC_4(VAR_8->regmap_hhi, VAR_4,
       0x3 << VAR_9, 0x3 << VAR_9);
  FUNC_5(5);
 }
 for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 2) {
  FUNC_4(VAR_8->regmap_hhi, VAR_5,
       0x3 << VAR_9, 0x3 << VAR_9);
  FUNC_5(5);
 }
 for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 2) {
  FUNC_4(VAR_8->regmap_hhi, VAR_6,
       0x3 << VAR_9, 0x3 << VAR_9);
  FUNC_5(5);
 }
 for (VAR_9 = 8; VAR_9 < 16; VAR_9++) {
  FUNC_4(VAR_8->regmap_hhi, VAR_3,
       FUNC_0(VAR_9), FUNC_0(VAR_9));
  FUNC_5(5);
 }
 FUNC_5(20);

 FUNC_4(VAR_8->regmap_ao, VAR_0,
      VAR_1, VAR_1);

 FUNC_3(20);

 FUNC_1(VAR_8->vpu_clk);
 FUNC_1(VAR_8->vapb_clk);

 return 0;
}
