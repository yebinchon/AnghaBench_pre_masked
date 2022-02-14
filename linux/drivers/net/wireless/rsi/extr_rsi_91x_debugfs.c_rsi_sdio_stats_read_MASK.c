
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct rsi_common* private; } ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_common {struct rsi_hw* priv; } ;
struct TYPE_2__ {int mgmt_buf_full_counter; int buf_semi_full_counter; int buf_full_counter; int mgmt_buffer_full; int semi_buffer_full; int buffer_full; int total_sdio_unknown_intr; int total_sdio_msdu_pending_intr; int sdio_int_counter; } ;
struct rsi_91x_sdiodev {TYPE_1__ rx_info; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct rsi_common *VAR_2 = VAR_0->private;
 struct rsi_hw *VAR_3 = VAR_2->priv;
 struct rsi_91x_sdiodev *VAR_4 =
  (struct rsi_91x_sdiodev *)VAR_3->rsi_dev;

 FUNC_0(VAR_0, "total_sdio_interrupts: %d\n",
     VAR_4->rx_info.sdio_int_counter);
 FUNC_0(VAR_0, "sdio_msdu_pending_intr_count: %d\n",
     VAR_4->rx_info.total_sdio_msdu_pending_intr);
 FUNC_0(VAR_0, "sdio_buff_full_count : %d\n",
     VAR_4->rx_info.buf_full_counter);
 FUNC_0(VAR_0, "sdio_buf_semi_full_count %d\n",
     VAR_4->rx_info.buf_semi_full_counter);
 FUNC_0(VAR_0, "sdio_unknown_intr_count: %d\n",
     VAR_4->rx_info.total_sdio_unknown_intr);

 FUNC_0(VAR_0, "BUFFER FULL STATUS  : %d\n",
     VAR_4->rx_info.buffer_full);
 FUNC_0(VAR_0, "SEMI BUFFER FULL STATUS  : %d\n",
     VAR_4->rx_info.semi_buffer_full);
 FUNC_0(VAR_0, "MGMT BUFFER FULL STATUS  : %d\n",
     VAR_4->rx_info.mgmt_buffer_full);
 FUNC_0(VAR_0, "BUFFER FULL COUNTER  : %d\n",
     VAR_4->rx_info.buf_full_counter);
 FUNC_0(VAR_0, "BUFFER SEMI FULL COUNTER  : %d\n",
     VAR_4->rx_info.buf_semi_full_counter);
 FUNC_0(VAR_0, "MGMT BUFFER FULL COUNTER  : %d\n",
     VAR_4->rx_info.mgmt_buf_full_counter);

 return 0;
}
