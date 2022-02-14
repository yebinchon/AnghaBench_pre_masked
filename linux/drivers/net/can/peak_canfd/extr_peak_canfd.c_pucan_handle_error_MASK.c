
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pucan_error_msg {int rx_err_cnt; int tx_err_cnt; } ;
struct TYPE_2__ {int rxerr; int txerr; } ;
struct peak_canfd_priv {TYPE_1__ bec; } ;



__attribute__((used)) static int FUNC_0(struct peak_canfd_priv *VAR_0,
         struct pucan_error_msg *VAR_1)
{
 VAR_0->bec.txerr = VAR_1->tx_err_cnt;
 VAR_0->bec.rxerr = VAR_1->rx_err_cnt;

 return 0;
}
