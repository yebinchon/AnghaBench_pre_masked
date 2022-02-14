
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct chv_pinctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct chv_pinctrl*,unsigned int,int ) ;
 struct chv_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_7, unsigned int VAR_8)
{
 struct chv_pinctrl *VAR_9 = FUNC_1(VAR_7);
 unsigned long VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_2(&VAR_6, VAR_10);
 VAR_11 = FUNC_4(FUNC_0(VAR_9, VAR_8, VAR_0));
 FUNC_3(&VAR_6, VAR_10);

 VAR_12 = VAR_11 & VAR_2;
 VAR_12 >>= VAR_3;

 if (VAR_12 == VAR_1)
  return !!(VAR_11 & VAR_5);
 return !!(VAR_11 & VAR_4);
}
