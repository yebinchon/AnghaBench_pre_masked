
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rss_context {int * rx_indir_table; } ;
struct efx_nic {int rss_spread; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (size_t,int ) ;

void FUNC_2(struct efx_nic *VAR_0,
        struct efx_rss_context *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->rx_indir_table); VAR_2++)
  VAR_1->rx_indir_table[VAR_2] =
   FUNC_1(VAR_2, VAR_0->rss_spread);
}
