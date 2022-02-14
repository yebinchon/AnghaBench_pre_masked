
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fifo {int in; int out; } ;



__attribute__((used)) static inline int FUNC_0(struct dma_fifo *VAR_0)
{
 return VAR_0->in - VAR_0->out;
}
