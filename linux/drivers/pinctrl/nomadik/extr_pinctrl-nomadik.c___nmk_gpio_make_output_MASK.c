
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {scalar_t__ addr; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct nmk_gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nmk_gpio_chip *VAR_1,
      unsigned VAR_2, int VAR_3)
{
 FUNC_2(FUNC_0(VAR_2), VAR_1->addr + VAR_0);
 FUNC_1(VAR_1, VAR_2, VAR_3);
}
