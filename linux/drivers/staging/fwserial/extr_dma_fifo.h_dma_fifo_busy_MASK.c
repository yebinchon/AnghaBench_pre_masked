
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fifo {scalar_t__ open; scalar_t__ open_limit; } ;



__attribute__((used)) static inline bool FUNC_0(struct dma_fifo *VAR_0)
{
 return VAR_0->open == VAR_0->open_limit;
}
