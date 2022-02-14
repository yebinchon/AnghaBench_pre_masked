
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fman_port_params {int dummy; } ;
struct TYPE_4__ {int data_align; } ;
struct fman_port_cfg {int tx_fifo_low_comf_level; int errata_A006320; int excessive_threshold_register; int fmbm_tfne_has_features; TYPE_2__ buffer_prefix_content; int rx_fifo_thr; int rx_pri_elevation; int deq_byte_cnt; int tx_fifo_deq_pipeline_depth; int deq_prefetch_option; int deq_type; int rx_cut_end_bytes; int color; int dma_swap_data; } ;
struct TYPE_3__ {int major; int minor; } ;
struct fman_port {TYPE_1__ rev_info; int max_port_fifo_size; struct fman_port_cfg* cfg; int port_type; int port_speed; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fman_port *VAR_8,
    struct fman_port_params *VAR_9)
{
 struct fman_port_cfg *VAR_10 = VAR_8->cfg;

 VAR_10->dma_swap_data = VAR_7;
 VAR_10->color = VAR_4;
 VAR_10->rx_cut_end_bytes = VAR_3;
 VAR_10->rx_pri_elevation = VAR_1;
 VAR_10->rx_fifo_thr = VAR_0;
 VAR_10->tx_fifo_low_comf_level = (5 * 1024);
 VAR_10->deq_type = VAR_5;
 VAR_10->deq_prefetch_option = VAR_6;
 VAR_10->tx_fifo_deq_pipeline_depth =
  FUNC_0(VAR_8->port_type, VAR_8->port_speed);
 VAR_10->deq_byte_cnt = FUNC_3(VAR_8->port_type);

 VAR_10->rx_pri_elevation =
  FUNC_1(VAR_8->max_port_fifo_size);
 VAR_8->cfg->rx_fifo_thr =
  FUNC_2(VAR_8->rev_info.major,
         VAR_8->max_port_fifo_size);

 if ((VAR_8->rev_info.major == 6) &&
     ((VAR_8->rev_info.minor == 0) || (VAR_8->rev_info.minor == 3)))
  VAR_10->errata_A006320 = 1;


 if (VAR_8->rev_info.major < 6)
  VAR_10->excessive_threshold_register = 1;
 else
  VAR_10->fmbm_tfne_has_features = 1;

 VAR_10->buffer_prefix_content.data_align =
  VAR_2;
}
