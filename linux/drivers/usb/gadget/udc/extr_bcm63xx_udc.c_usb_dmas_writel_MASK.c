
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm63xx_udc {scalar_t__ iudma_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct bcm63xx_udc *VAR_2, u32 VAR_3, u32 VAR_4,
     int VAR_5)
{
 FUNC_0(VAR_3, VAR_2->iudma_regs + VAR_1 + VAR_4 +
   (VAR_0 * VAR_5));
}
