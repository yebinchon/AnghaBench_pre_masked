
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pmx_bank {int dummy; } ;
struct meson_pinctrl {int reg_mux; } ;


 int FUNC_0 (struct meson_pinctrl*,unsigned int,struct meson_pmx_bank**) ;
 int FUNC_1 (struct meson_pmx_bank*,unsigned int,int*,int*) ;
 int FUNC_2 (int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct meson_pinctrl *VAR_0,
   unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 struct meson_pmx_bank *VAR_6;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_6);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_6, VAR_1, &VAR_4, &VAR_5);

 VAR_3 = FUNC_2(VAR_0->reg_mux, VAR_4 << 2,
  0xf << VAR_5, (VAR_2 & 0xf) << VAR_5);

 return VAR_3;
}
