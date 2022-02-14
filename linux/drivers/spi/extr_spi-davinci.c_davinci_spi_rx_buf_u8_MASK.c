
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct davinci_spi {scalar_t__* rx; } ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, struct davinci_spi *VAR_1)
{
 if (VAR_1->rx) {
  u8 *VAR_2 = VAR_1->rx;
  *VAR_2++ = (u8)VAR_0;
  VAR_1->rx = VAR_2;
 }
}
