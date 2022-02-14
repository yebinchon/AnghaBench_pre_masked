
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_pwm_chip {unsigned long base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct atmel_pwm_chip *VAR_2,
           unsigned int VAR_3, unsigned long VAR_4,
           unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_0 + VAR_3 * VAR_1;

 FUNC_0(VAR_5, VAR_2->base + VAR_6 + VAR_4);
}
