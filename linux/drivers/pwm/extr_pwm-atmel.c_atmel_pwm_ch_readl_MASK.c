
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_pwm_chip {unsigned long base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline u32 FUNC_1(struct atmel_pwm_chip *VAR_2,
         unsigned int VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_0 + VAR_3 * VAR_1;

 return FUNC_0(VAR_2->base + VAR_5 + VAR_4);
}
