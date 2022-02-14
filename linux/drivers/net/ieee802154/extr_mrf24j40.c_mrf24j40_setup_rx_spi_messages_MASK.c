
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int complete; struct mrf24j40* context; } ;
struct TYPE_5__ {int len; int rx_buf; int tx_buf; } ;
struct mrf24j40 {TYPE_1__ rx_buf_msg; TYPE_2__ rx_lqi_trx; int rx_lqi_buf; TYPE_2__ rx_fifo_buf_trx; int rx_fifo_buf; TYPE_2__ rx_addr_trx; int rx_addr_buf; TYPE_1__ rx_msg; TYPE_2__ rx_trx; int rx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct mrf24j40 *VAR_1)
{
 FUNC_1(&VAR_1->rx_msg);
 VAR_1->rx_msg.context = VAR_1;
 VAR_1->rx_trx.len = 2;
 VAR_1->rx_trx.tx_buf = VAR_1->rx_buf;
 VAR_1->rx_trx.rx_buf = VAR_1->rx_buf;
 FUNC_0(&VAR_1->rx_trx, &VAR_1->rx_msg);

 FUNC_1(&VAR_1->rx_buf_msg);
 VAR_1->rx_buf_msg.context = VAR_1;
 VAR_1->rx_buf_msg.complete = VAR_0;
 VAR_1->rx_addr_trx.len = 2;
 VAR_1->rx_addr_trx.tx_buf = VAR_1->rx_addr_buf;
 FUNC_0(&VAR_1->rx_addr_trx, &VAR_1->rx_buf_msg);
 VAR_1->rx_fifo_buf_trx.rx_buf = VAR_1->rx_fifo_buf;
 FUNC_0(&VAR_1->rx_fifo_buf_trx, &VAR_1->rx_buf_msg);
 VAR_1->rx_lqi_trx.len = 2;
 VAR_1->rx_lqi_trx.rx_buf = VAR_1->rx_lqi_buf;
 FUNC_0(&VAR_1->rx_lqi_trx, &VAR_1->rx_buf_msg);
}
