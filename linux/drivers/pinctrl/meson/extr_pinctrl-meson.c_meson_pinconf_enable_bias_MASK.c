
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pinctrl {int reg_pullen; int reg_pull; } ;
struct meson_bank {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct meson_bank*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct meson_pinctrl *VAR_2, unsigned int VAR_3,
         bool VAR_4)
{
 struct meson_bank *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_3, &VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_5, VAR_3, VAR_0, &VAR_6, &VAR_7);
 if (VAR_4)
  VAR_8 = FUNC_0(VAR_7);

 VAR_9 = FUNC_3(VAR_2->reg_pull, VAR_6, FUNC_0(VAR_7), VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_5, VAR_3, VAR_1, &VAR_6, &VAR_7);
 VAR_9 = FUNC_3(VAR_2->reg_pullen, VAR_6, FUNC_0(VAR_7), FUNC_0(VAR_7));
 if (VAR_9)
  return VAR_9;

 return 0;
}
