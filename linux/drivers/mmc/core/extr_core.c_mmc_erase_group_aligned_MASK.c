
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {unsigned int erase_size; } ;



int FUNC_0(struct mmc_card *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 if (!VAR_0->erase_size)
  return 0;
 if (VAR_1 % VAR_0->erase_size || VAR_2 % VAR_0->erase_size)
  return 0;
 return 1;
}
