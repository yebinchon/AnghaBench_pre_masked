
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_ao_cec_g12a_dualdiv_clk {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int ,int) ;
 struct meson_ao_cec_g12a_dualdiv_clk* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static unsigned long
FUNC_5(struct clk_hw *VAR_6,
       unsigned long VAR_7)
{
 struct meson_ao_cec_g12a_dualdiv_clk *VAR_8 =
  FUNC_3(VAR_6);
 unsigned long VAR_9;
 u32 VAR_10, VAR_11;

 FUNC_4(VAR_8->regmap, VAR_5, &VAR_10);
 FUNC_4(VAR_8->regmap, VAR_5, &VAR_11);

 if (VAR_11 & VAR_0)
  return VAR_7;

 if (VAR_10 & VAR_1) {
  unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

  VAR_9 = FUNC_2(VAR_3, VAR_10) + 1;
  VAR_12 = FUNC_2(VAR_4, VAR_10) + 1;

  VAR_13 = FUNC_2(VAR_2, VAR_11) + 1;
  VAR_14 = FUNC_2(VAR_2, VAR_11) + 1;

  VAR_15 = FUNC_0(VAR_7, VAR_9);
  VAR_16 = FUNC_0(VAR_7, VAR_12);

  VAR_17 = FUNC_0(100000000 * VAR_13, VAR_15 * (VAR_13 + VAR_14));
  VAR_18 = FUNC_0(100000000 * VAR_14, VAR_16 * (VAR_13 + VAR_14));

  return FUNC_1(100000000, VAR_17 + VAR_18);
 }

 VAR_9 = FUNC_2(VAR_3, VAR_10) + 1;

 return FUNC_0(VAR_7, VAR_9);
}
