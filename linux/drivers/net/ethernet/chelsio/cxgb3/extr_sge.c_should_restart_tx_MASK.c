
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_txq {unsigned int processed; unsigned int cleaned; unsigned int in_use; int size; } ;



__attribute__((used)) static inline int FUNC_0(const struct sge_txq *VAR_0)
{
 unsigned int VAR_1 = VAR_0->processed - VAR_0->cleaned;

 return VAR_0->in_use - VAR_1 < (VAR_0->size >> 1);
}
