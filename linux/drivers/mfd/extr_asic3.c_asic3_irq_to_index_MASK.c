
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asic3 {int irq_base; } ;



__attribute__((used)) static inline int FUNC_0(struct asic3 *VAR_0, int VAR_1)
{
 return (VAR_1 - VAR_0->irq_base) & 0xf;
}
