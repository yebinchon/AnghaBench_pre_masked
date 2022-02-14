
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_tx_ba_stream_tbl {int list; } ;
struct mwifiex_private {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_tx_ba_stream_tbl*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,char*,struct mwifiex_tx_ba_stream_tbl*) ;
 scalar_t__ FUNC_3 (struct mwifiex_private*,struct mwifiex_tx_ba_stream_tbl*) ;

void FUNC_4(struct mwifiex_private *VAR_1,
    struct mwifiex_tx_ba_stream_tbl *VAR_2)
{
 if (!VAR_2 &&
     FUNC_3(VAR_1, VAR_2))
  return;

 FUNC_2(VAR_1->adapter, VAR_0,
      "info: tx_ba_tsr_tbl %p\n", VAR_2);

 FUNC_1(&VAR_2->list);

 FUNC_0(VAR_2);
}
