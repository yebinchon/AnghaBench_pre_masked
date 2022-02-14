
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int n_rx_channels; int n_tx_channels; int n_channels; unsigned int tx_dc_base; unsigned int rx_dc_base; } ;
typedef int ef4_qword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int,int) ;

void FUNC_1(struct ef4_nic *VAR_6, unsigned VAR_7)
{
 unsigned VAR_8, VAR_9;




 VAR_9 = ((VAR_6->n_rx_channels * VAR_1 +
         VAR_6->n_tx_channels * VAR_3 * VAR_1 +
         VAR_6->n_channels * VAR_2)
        * sizeof(ef4_qword_t) / VAR_0);
 VAR_8 = FUNC_0(VAR_6->n_channels, VAR_6->n_tx_channels * VAR_3);

 VAR_6->tx_dc_base = VAR_7 - VAR_8 * VAR_5;
 VAR_6->rx_dc_base = VAR_6->tx_dc_base - VAR_8 * VAR_4;
}
