
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pending {scalar_t__ data; } ;



__attribute__((used)) static inline bool FUNC_0(struct dma_pending *VAR_0)
{
 return (unsigned long)VAR_0->data & 1UL;
}
