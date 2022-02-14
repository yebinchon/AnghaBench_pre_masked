
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct meson_pinctrl {int reg_ds; } ;
struct meson_bank {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct meson_bank*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_2 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct meson_pinctrl *VAR_3,
         unsigned int VAR_4,
         u16 *VAR_5)
{
 struct meson_bank *VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 if (!VAR_3->reg_ds)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_3, VAR_4, &VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_0(VAR_6, VAR_4, VAR_2, &VAR_7, &VAR_8);

 VAR_10 = FUNC_2(VAR_3->reg_ds, VAR_7, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch ((VAR_9 >> VAR_8) & 0x3) {
 case 128:
  *VAR_5 = 500;
  break;
 case 131:
  *VAR_5 = 2500;
  break;
 case 130:
  *VAR_5 = 3000;
  break;
 case 129:
  *VAR_5 = 4000;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
