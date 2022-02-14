
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_msiof_spi_priv {int mapbase; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sh_msiof_spi_priv *VAR_0, int VAR_1,
      u32 VAR_2)
{
 switch (VAR_1) {
 case 128:
 case 129:
  FUNC_0(VAR_2, VAR_0->mapbase + VAR_1);
  break;
 default:
  FUNC_1(VAR_2, VAR_0->mapbase + VAR_1);
  break;
 }
}
