
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sifive_spi {scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct sifive_spi *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->regs + VAR_1);
}
