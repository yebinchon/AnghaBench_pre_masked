
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_tx_ring {int tx_fifo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct gve_tx_ring*) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static inline bool FUNC_2(struct gve_tx_ring *VAR_1, int VAR_2)
{
 return (FUNC_0(VAR_1) >= VAR_0 &&
  FUNC_1(&VAR_1->tx_fifo, VAR_2));
}
