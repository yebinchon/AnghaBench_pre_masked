
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sxgbe_tx_queue {scalar_t__ cur_tx; scalar_t__ dirty_tx; } ;



__attribute__((used)) static inline u32 FUNC_0(struct sxgbe_tx_queue *VAR_0, int VAR_1)
{
 return VAR_0->dirty_tx + VAR_1 - VAR_0->cur_tx - 1;
}
