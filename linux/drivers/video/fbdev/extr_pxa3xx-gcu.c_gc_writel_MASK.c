
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_priv {scalar_t__ mmio_base; } ;


 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct pxa3xx_gcu_priv *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_2, VAR_0->mmio_base + VAR_1);
}
