
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_pioctrl {scalar_t__ reg_base; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct atmel_pioctrl *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 FUNC_0(VAR_4, VAR_1->reg_base
         + VAR_0 * VAR_2 + VAR_3);
}
