
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pinctrl {int reg_pullen; } ;
struct meson_bank {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct meson_bank*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_3 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct meson_pinctrl *VAR_1,
          unsigned int VAR_2)
{
 struct meson_bank *VAR_3;
 unsigned int VAR_4, VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, &VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_3, VAR_2, VAR_0, &VAR_4, &VAR_5);
 VAR_6 = FUNC_3(VAR_1->reg_pullen, VAR_4, FUNC_0(VAR_5), 0);
 if (VAR_6)
  return VAR_6;

 return 0;
}
