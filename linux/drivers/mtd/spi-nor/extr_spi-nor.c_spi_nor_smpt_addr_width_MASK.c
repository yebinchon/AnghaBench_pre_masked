
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor {int addr_width; } ;





 int const VAR_0 ;


__attribute__((used)) static u8 FUNC_0(const struct spi_nor *VAR_1, const u32 VAR_2)
{
 switch (VAR_2 & VAR_0) {
 case 131:
  return 0;
 case 130:
  return 3;
 case 129:
  return 4;
 case 128:

 default:
  return VAR_1->addr_width;
 }
}
