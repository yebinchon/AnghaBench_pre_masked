
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int complete; struct mcr20a_local* context; } ;
struct TYPE_5__ {int len; int rx_buf; int tx_buf; } ;
struct mcr20a_local {TYPE_1__ rx_buf_msg; TYPE_2__ rx_xfer_lqi; TYPE_2__ rx_xfer_buf; TYPE_2__ rx_xfer_header; int rx_lqi; int rx_buf; int rx_header; TYPE_1__ reg_msg; TYPE_2__ reg_xfer_data; TYPE_2__ reg_xfer_cmd; int reg_data; int reg_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct mcr20a_local *VAR_1)
{
 FUNC_1(&VAR_1->reg_msg);
 VAR_1->reg_msg.context = VAR_1;

 VAR_1->reg_xfer_cmd.len = 1;
 VAR_1->reg_xfer_cmd.tx_buf = VAR_1->reg_cmd;
 VAR_1->reg_xfer_cmd.rx_buf = VAR_1->reg_cmd;

 VAR_1->reg_xfer_data.rx_buf = VAR_1->reg_data;
 VAR_1->reg_xfer_data.tx_buf = VAR_1->reg_data;

 FUNC_0(&VAR_1->reg_xfer_cmd, &VAR_1->reg_msg);
 FUNC_0(&VAR_1->reg_xfer_data, &VAR_1->reg_msg);

 FUNC_1(&VAR_1->rx_buf_msg);
 VAR_1->rx_buf_msg.context = VAR_1;
 VAR_1->rx_buf_msg.complete = VAR_0;
 VAR_1->rx_xfer_header.len = 1;
 VAR_1->rx_xfer_header.tx_buf = VAR_1->rx_header;
 VAR_1->rx_xfer_header.rx_buf = VAR_1->rx_header;

 VAR_1->rx_xfer_buf.rx_buf = VAR_1->rx_buf;

 VAR_1->rx_xfer_lqi.len = 1;
 VAR_1->rx_xfer_lqi.rx_buf = VAR_1->rx_lqi;

 FUNC_0(&VAR_1->rx_xfer_header, &VAR_1->rx_buf_msg);
 FUNC_0(&VAR_1->rx_xfer_buf, &VAR_1->rx_buf_msg);
 FUNC_0(&VAR_1->rx_xfer_lqi, &VAR_1->rx_buf_msg);
}
