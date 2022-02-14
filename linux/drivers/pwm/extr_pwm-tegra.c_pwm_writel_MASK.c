
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pwm_chip {scalar_t__ regs; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct tegra_pwm_chip *VAR_0, unsigned int VAR_1,
        unsigned long VAR_2)
{
 FUNC_0(VAR_2, VAR_0->regs + (VAR_1 << 4));
}
