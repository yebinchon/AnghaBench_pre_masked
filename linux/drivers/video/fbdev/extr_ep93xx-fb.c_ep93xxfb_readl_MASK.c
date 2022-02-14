
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_fbi {scalar_t__ mmio_base; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct ep93xx_fbi *VAR_0,
       unsigned int VAR_1)
{
 return FUNC_0(VAR_0->mmio_base + VAR_1);
}
