
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_reg_desc {int reg; unsigned int bit; } ;
struct meson_bank {unsigned int first; struct meson_reg_desc* regs; } ;
typedef enum meson_reg_type { ____Placeholder_meson_reg_type } meson_reg_type ;



__attribute__((used)) static void FUNC_0(struct meson_bank *VAR_0, unsigned int VAR_1,
       enum meson_reg_type VAR_2,
       unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct meson_reg_desc *VAR_5 = &VAR_0->regs[VAR_2];

 *VAR_3 = VAR_5->reg * 4;
 *VAR_4 = VAR_5->bit + VAR_1 - VAR_0->first;
}
