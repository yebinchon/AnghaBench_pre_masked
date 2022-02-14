
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int complete; struct mcr20a_local* context; } ;
struct TYPE_5__ {int len; int tx_buf; } ;
struct mcr20a_local {TYPE_1__ tx_buf_msg; TYPE_2__ tx_xfer_buf; TYPE_2__ tx_xfer_len; TYPE_2__ tx_xfer_header; int tx_len; int tx_header; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct mcr20a_local *VAR_1)
{
 FUNC_1(&VAR_1->tx_buf_msg);
 VAR_1->tx_buf_msg.context = VAR_1;
 VAR_1->tx_buf_msg.complete = VAR_0;

 VAR_1->tx_xfer_header.len = 1;
 VAR_1->tx_xfer_header.tx_buf = VAR_1->tx_header;

 VAR_1->tx_xfer_len.len = 1;
 VAR_1->tx_xfer_len.tx_buf = VAR_1->tx_len;

 FUNC_0(&VAR_1->tx_xfer_header, &VAR_1->tx_buf_msg);
 FUNC_0(&VAR_1->tx_xfer_len, &VAR_1->tx_buf_msg);
 FUNC_0(&VAR_1->tx_xfer_buf, &VAR_1->tx_buf_msg);
}
