
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {scalar_t__ tx_lock_flag; scalar_t__ data_sent; int tx_data_q; } ;


 scalar_t__ FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct mwifiex_adapter *VAR_0)
{
 do {
  if (VAR_0->data_sent || VAR_0->tx_lock_flag)
   break;
  if (FUNC_0(VAR_0))
   break;
 } while (!FUNC_1(&VAR_0->tx_data_q));
}
