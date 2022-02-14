
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {unsigned int in_use; scalar_t__ pidx; scalar_t__ size; } ;



__attribute__((used)) static inline void FUNC_0(struct sge_txq *VAR_0, unsigned int VAR_1)
{
 VAR_0->in_use += VAR_1;
 VAR_0->pidx += VAR_1;
 if (VAR_0->pidx >= VAR_0->size)
  VAR_0->pidx -= VAR_0->size;
}
