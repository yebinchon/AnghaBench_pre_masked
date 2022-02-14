
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {scalar_t__ mmio_base; } ;


 unsigned long FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned long
FUNC_1(struct pxafb_info *VAR_0, unsigned int VAR_1)
{
 return FUNC_0(VAR_0->mmio_base + VAR_1);
}
