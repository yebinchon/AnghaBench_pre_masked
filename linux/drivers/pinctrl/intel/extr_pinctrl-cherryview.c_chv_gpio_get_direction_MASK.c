
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
 int FUNC_0 (struct chv_pinctrl*,unsigned int,int ) ;
 struct chv_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_5, unsigned int VAR_6)
{
 struct chv_pinctrl *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8, VAR_9;
 unsigned long VAR_10;

 FUNC_2(&VAR_4, VAR_10);
 VAR_8 = FUNC_4(FUNC_0(VAR_7, VAR_6, VAR_0));
 FUNC_3(&VAR_4, VAR_10);

 VAR_9 = VAR_8 & VAR_2;
 VAR_9 >>= VAR_3;

 return VAR_9 != VAR_1;
}
