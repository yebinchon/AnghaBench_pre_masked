
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mal_instance {int num_rx_chans; int num_tx_chans; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct mal_instance *VAR_2, int VAR_3)
{
 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_2->num_rx_chans);
 return VAR_2->num_tx_chans * VAR_1 + VAR_3 * VAR_0;
}
