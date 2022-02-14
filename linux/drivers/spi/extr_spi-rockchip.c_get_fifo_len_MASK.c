
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_spi {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct rockchip_spi *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 2; VAR_2 < 32; VAR_2++) {
  FUNC_1(VAR_2, VAR_1->regs + VAR_0);
  if (VAR_2 != FUNC_0(VAR_1->regs + VAR_0))
   break;
 }

 FUNC_1(0, VAR_1->regs + VAR_0);

 return (VAR_2 == 31) ? 0 : VAR_2;
}
