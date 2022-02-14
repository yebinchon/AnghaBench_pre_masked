
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_tx_queue {scalar_t__ write_idx; scalar_t__ read_idx; int count; } ;



__attribute__((used)) static inline int FUNC_0(struct alx_tx_queue *VAR_0)
{
 if (VAR_0->write_idx >= VAR_0->read_idx)
  return VAR_0->count + VAR_0->read_idx - VAR_0->write_idx - 1;
 return VAR_0->read_idx - VAR_0->write_idx - 1;
}
