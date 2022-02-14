
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_pmx_bank {unsigned int first; int reg; int offset; } ;



__attribute__((used)) static int FUNC_0(struct meson_pmx_bank *VAR_0,
   unsigned int VAR_1, unsigned int *VAR_2,
   unsigned int *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_1 - VAR_0->first;

 *VAR_2 = VAR_0->reg + (VAR_0->offset + (VAR_4 << 2)) / 32;
 *VAR_3 = (VAR_0->offset + (VAR_4 << 2)) % 32;

 return 0;
}
