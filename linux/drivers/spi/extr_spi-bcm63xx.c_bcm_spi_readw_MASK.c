
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bcm63xx_spi {scalar_t__* reg_offsets; scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_2(struct bcm63xx_spi *VAR_0,
    unsigned int VAR_1)
{



 return FUNC_1(VAR_0->regs + VAR_0->reg_offsets[VAR_1]);

}
