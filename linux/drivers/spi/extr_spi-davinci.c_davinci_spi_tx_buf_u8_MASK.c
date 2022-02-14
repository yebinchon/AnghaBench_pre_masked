
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;
struct davinci_spi {int const* tx; } ;



__attribute__((used)) static u32 FUNC_0(struct davinci_spi *VAR_0)
{
 u32 VAR_1 = 0;

 if (VAR_0->tx) {
  const u8 *VAR_2 = VAR_0->tx;

  VAR_1 = *VAR_2++;
  VAR_0->tx = VAR_2;
 }
 return VAR_1;
}
