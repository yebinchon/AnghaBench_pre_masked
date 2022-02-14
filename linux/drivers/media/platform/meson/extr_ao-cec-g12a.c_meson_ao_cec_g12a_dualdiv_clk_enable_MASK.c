
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_ao_cec_g12a_dualdiv_clk {int regmap; } ;
struct clk_hw {int dummy; } ;


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
 int FUNC_0 (int,int) ;
 struct meson_ao_cec_g12a_dualdiv_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_10)
{
 struct meson_ao_cec_g12a_dualdiv_clk *VAR_11 =
  FUNC_1(VAR_10);



 FUNC_2(VAR_11->regmap, VAR_8,
      VAR_2 | VAR_7,
      0);


 FUNC_2(VAR_11->regmap, VAR_8,
      VAR_5,
      FUNC_0(VAR_5, 733 - 1));

 FUNC_2(VAR_11->regmap, VAR_8,
      VAR_6,
      FUNC_0(VAR_6, 732 - 1));


 FUNC_2(VAR_11->regmap, VAR_9,
      VAR_3,
      FUNC_0(VAR_3, 8 - 1));

 FUNC_2(VAR_11->regmap, VAR_9,
      VAR_4,
      FUNC_0(VAR_4, 11 - 1));


 FUNC_2(VAR_11->regmap, VAR_8,
      VAR_1, VAR_1);


 FUNC_2(VAR_11->regmap, VAR_9,
      VAR_0, 0);


 FUNC_2(VAR_11->regmap, VAR_8,
      VAR_2 | VAR_7,
      VAR_2 | VAR_7);

 return 0;
}
