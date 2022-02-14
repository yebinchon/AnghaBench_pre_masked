
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_spi {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct rockchip_spi *VAR_1, bool VAR_2)
{
 FUNC_0((VAR_2 ? 1U : 0U), VAR_1->regs + VAR_0);
}
