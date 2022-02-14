
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_spi {int dev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct rockchip_spi *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_1(5);

 do {
  if (!(FUNC_2(VAR_3->regs + VAR_0) & VAR_1))
   return;
 } while (!FUNC_3(VAR_2, VAR_4));

 FUNC_0(VAR_3->dev, "spi controller is in busy state!\n");
}
