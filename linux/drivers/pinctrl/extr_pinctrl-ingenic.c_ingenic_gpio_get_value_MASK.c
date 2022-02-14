
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ingenic_gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct ingenic_gpio_chip*,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct ingenic_gpio_chip *VAR_1,
       u8 VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_1, VAR_0);

 return !!(VAR_3 & FUNC_0(VAR_2));
}
