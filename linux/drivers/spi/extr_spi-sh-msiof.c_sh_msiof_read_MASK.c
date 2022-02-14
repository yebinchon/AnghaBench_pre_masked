
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_msiof_spi_priv {int mapbase; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct sh_msiof_spi_priv *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
 case 129:
  return FUNC_0(VAR_0->mapbase + VAR_1);
 default:
  return FUNC_1(VAR_0->mapbase + VAR_1);
 }
}
