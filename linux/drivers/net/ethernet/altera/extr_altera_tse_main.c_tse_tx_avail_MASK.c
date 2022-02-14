
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct altera_tse_private {scalar_t__ tx_prod; scalar_t__ tx_ring_size; scalar_t__ tx_cons; } ;



__attribute__((used)) static inline u32 FUNC_0(struct altera_tse_private *VAR_0)
{
 return VAR_0->tx_cons + VAR_0->tx_ring_size - VAR_0->tx_prod - 1;
}
