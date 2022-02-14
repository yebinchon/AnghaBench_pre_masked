
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pinctrl {int reg_gpio; } ;
struct meson_bank {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct meson_bank*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_3 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct meson_pinctrl *VAR_0,
          unsigned int VAR_1,
          unsigned int VAR_2,
          bool VAR_3)
{
 struct meson_bank *VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_1, &VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_4, VAR_1, VAR_2, &VAR_5, &VAR_6);
 return FUNC_3(VAR_0->reg_gpio, VAR_5, FUNC_0(VAR_6),
      VAR_3 ? FUNC_0(VAR_6) : 0);
}
