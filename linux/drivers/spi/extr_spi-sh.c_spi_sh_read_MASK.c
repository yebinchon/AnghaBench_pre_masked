
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_sh_data {int width; scalar_t__ addr; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(struct spi_sh_data *VAR_0, unsigned long VAR_1)
{
 if (VAR_0->width == 8)
  return FUNC_1(VAR_0->addr + (VAR_1 >> 2));
 else if (VAR_0->width == 32)
  return FUNC_0(VAR_0->addr + VAR_1);
 else
  return 0;
}
