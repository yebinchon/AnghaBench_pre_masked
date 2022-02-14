
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axienet_local {int tx_bd_tail; int tx_bd_num; struct axidma_bd* tx_bd_v; } ;
struct axidma_bd {int status; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct axienet_local *VAR_2,
         int VAR_3)
{
 struct axidma_bd *VAR_4;
 VAR_4 = &VAR_2->tx_bd_v[(VAR_2->tx_bd_tail + VAR_3) % VAR_2->tx_bd_num];
 if (VAR_4->status & VAR_1)
  return VAR_0;
 return 0;
}
