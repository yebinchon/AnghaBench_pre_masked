
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pinctrl {int reg_pull; int reg_pullen; } ;
struct meson_bank {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct meson_bank*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_2 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_3 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct meson_pinctrl *VAR_5, unsigned int VAR_6)
{
 struct meson_bank *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_7);
 if (VAR_11)
  return VAR_11;

 FUNC_1(VAR_7, VAR_6, VAR_4, &VAR_8, &VAR_9);

 VAR_11 = FUNC_3(VAR_5->reg_pullen, VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (!(VAR_10 & FUNC_0(VAR_9))) {
  VAR_12 = VAR_0;
 } else {
  FUNC_1(VAR_7, VAR_6, VAR_3, &VAR_8, &VAR_9);

  VAR_11 = FUNC_3(VAR_5->reg_pull, VAR_8, &VAR_10);
  if (VAR_11)
   return VAR_11;

  if (VAR_10 & FUNC_0(VAR_9))
   VAR_12 = VAR_2;
  else
   VAR_12 = VAR_1;
 }

 return VAR_12;
}
