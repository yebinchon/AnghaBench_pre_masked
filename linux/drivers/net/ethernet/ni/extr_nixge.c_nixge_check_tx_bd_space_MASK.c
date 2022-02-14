
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nixge_priv {int tx_bd_tail; struct nixge_hw_dma_bd* tx_bd_v; } ;
struct nixge_hw_dma_bd {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct nixge_priv *VAR_3,
       int VAR_4)
{
 struct nixge_hw_dma_bd *VAR_5;

 VAR_5 = &VAR_3->tx_bd_v[(VAR_3->tx_bd_tail + VAR_4) % VAR_1];
 if (VAR_5->status & VAR_2)
  return VAR_0;
 return 0;
}
