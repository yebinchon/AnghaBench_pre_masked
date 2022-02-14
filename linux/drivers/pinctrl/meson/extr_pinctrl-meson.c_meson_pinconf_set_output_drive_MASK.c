
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pinctrl {int dummy; } ;


 int FUNC_0 (struct meson_pinctrl*,unsigned int,int) ;
 int FUNC_1 (struct meson_pinctrl*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct meson_pinctrl *VAR_0,
       unsigned int VAR_1,
       bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 1);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
