
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_rx_edma {int rx_fifo_hwsize; int rx_fifo; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ath_rx_edma *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->rx_fifo);
 VAR_0->rx_fifo_hwsize = VAR_1;
}
