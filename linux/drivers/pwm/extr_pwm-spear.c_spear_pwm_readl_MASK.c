
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_pwm_chip {scalar_t__ mmio_base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct spear_pwm_chip *VAR_0, unsigned int VAR_1,
      unsigned long VAR_2)
{
 return FUNC_0(VAR_0->mmio_base + (VAR_1 << 4) + VAR_2);
}
