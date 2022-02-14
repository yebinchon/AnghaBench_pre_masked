
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct mrf24j40* context; int complete; } ;
struct TYPE_5__ {int len; int tx_buf; } ;
struct mrf24j40 {TYPE_1__ tx_post_msg; TYPE_2__ tx_post_trx; int tx_post_buf; TYPE_1__ tx_msg; TYPE_2__ tx_buf_trx; TYPE_2__ tx_len_trx; int tx_len_buf; TYPE_2__ tx_hdr_trx; int tx_hdr_buf; } ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct mrf24j40 *VAR_1)
{
 FUNC_1(&VAR_1->tx_msg);
 VAR_1->tx_msg.context = VAR_1;
 VAR_1->tx_msg.complete = VAR_0;
 VAR_1->tx_hdr_trx.len = 2;
 VAR_1->tx_hdr_trx.tx_buf = VAR_1->tx_hdr_buf;
 FUNC_0(&VAR_1->tx_hdr_trx, &VAR_1->tx_msg);
 VAR_1->tx_len_trx.len = 2;
 VAR_1->tx_len_trx.tx_buf = VAR_1->tx_len_buf;
 FUNC_0(&VAR_1->tx_len_trx, &VAR_1->tx_msg);
 FUNC_0(&VAR_1->tx_buf_trx, &VAR_1->tx_msg);

 FUNC_1(&VAR_1->tx_post_msg);
 VAR_1->tx_post_msg.context = VAR_1;
 VAR_1->tx_post_trx.len = 2;
 VAR_1->tx_post_trx.tx_buf = VAR_1->tx_post_buf;
 FUNC_0(&VAR_1->tx_post_trx, &VAR_1->tx_post_msg);
}
