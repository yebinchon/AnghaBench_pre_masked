
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int blksz; int blocks; } ;



__attribute__((used)) static bool FUNC_0(struct mmc_data *VAR_0)
{
 return !(VAR_0->blksz & 15 && (VAR_0->blocks != 1 || VAR_0->blksz != 8));
}
