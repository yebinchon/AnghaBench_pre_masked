
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct spi_nor {scalar_t__ read_dummy; } ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_1(const struct spi_nor *VAR_1, const u32 VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_0)
  return VAR_1->read_dummy;
 return VAR_3;
}
