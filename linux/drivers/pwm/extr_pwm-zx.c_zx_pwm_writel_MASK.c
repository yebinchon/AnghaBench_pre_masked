
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_pwm_chip {scalar_t__ base; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct zx_pwm_chip *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_3, VAR_0->base + (VAR_1 + 1) * 0x10 + VAR_2);
}
