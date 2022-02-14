
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {int rss_spread; int * rx_indir_table; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (size_t,int ) ;

void FUNC_2(struct ef4_nic *VAR_0)
{
 size_t VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->rx_indir_table); VAR_1++)
  VAR_0->rx_indir_table[VAR_1] =
   FUNC_1(VAR_1, VAR_0->rss_spread);
}
