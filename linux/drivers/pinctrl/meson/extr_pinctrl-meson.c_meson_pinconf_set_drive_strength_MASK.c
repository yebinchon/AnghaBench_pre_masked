
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct meson_pinctrl {int reg_ds; int dev; } ;
struct meson_bank {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (struct meson_bank*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct meson_pinctrl*,unsigned int,struct meson_bank**) ;
 int FUNC_4 (int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct meson_pinctrl *VAR_6,
         unsigned int VAR_7,
         u16 VAR_8)
{
 struct meson_bank *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (!VAR_6->reg_ds) {
  FUNC_0(VAR_6->dev, "drive-strength not supported\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_6, VAR_7, &VAR_9);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_9, VAR_7, VAR_5, &VAR_10, &VAR_11);
 VAR_11 = VAR_11 << 1;

 if (VAR_8 <= 500) {
  VAR_12 = VAR_4;
 } else if (VAR_8 <= 2500) {
  VAR_12 = VAR_1;
 } else if (VAR_8 <= 3000) {
  VAR_12 = VAR_2;
 } else if (VAR_8 <= 4000) {
  VAR_12 = VAR_3;
 } else {
  FUNC_1(VAR_6->dev,
         "pin %u: invalid drive-strength : %d , default to 4mA\n",
         VAR_7, VAR_8);
  VAR_12 = VAR_3;
 }

 VAR_13 = FUNC_4(VAR_6->reg_ds, VAR_10, 0x3 << VAR_11, VAR_12 << VAR_11);
 if (VAR_13)
  return VAR_13;

 return 0;
}
