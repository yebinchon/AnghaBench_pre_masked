
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_rx_queue {scalar_t__ rx_zeroc_thresh; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct stmmac_rx_queue *VAR_1)
{
 if (VAR_1->rx_zeroc_thresh < VAR_0)
  return 0;

 return 1;
}
