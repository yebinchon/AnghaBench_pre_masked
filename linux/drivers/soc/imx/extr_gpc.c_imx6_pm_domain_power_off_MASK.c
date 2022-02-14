
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_pm_domain {scalar_t__ supply; int ipg_rate_mhz; int regmap; int cntr_pdn_bit; scalar_t__ reg_offs; } ;
struct generic_pm_domain {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;
 int FUNC_4 (scalar_t__) ;
 struct imx_pm_domain* FUNC_5 (struct generic_pm_domain*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct generic_pm_domain *VAR_3)
{
 struct imx_pm_domain *VAR_4 = FUNC_5(VAR_3);
 int VAR_5, VAR_6;
 u32 VAR_7;


 FUNC_2(VAR_4->regmap, VAR_4->reg_offs + VAR_2, &VAR_7);
 VAR_5 = VAR_7 & 0x3f;
 VAR_6 = (VAR_7 >> 8) & 0x3f;


 FUNC_3(VAR_4->regmap, VAR_4->reg_offs + VAR_1,
      0x1, 0x1);


 VAR_7 = FUNC_0(VAR_4->cntr_pdn_bit);
 FUNC_3(VAR_4->regmap, VAR_0, VAR_7, VAR_7);


 FUNC_6(FUNC_1(VAR_5 + VAR_6, VAR_4->ipg_rate_mhz));

 if (VAR_4->supply)
  FUNC_4(VAR_4->supply);

 return 0;
}
