
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fw_fcoe_stats_cmd {int free_to_len16; } ;
struct fw_fcoe_port_stats {int rx_err_frames; int rx_ucast_frames; int rx_ucast_bytes; int rx_mcast_frames; int rx_mcast_bytes; int rx_bcast_frames; int rx_bcast_bytes; int rx_pf_frames; int rx_pf_bytes; int tx_offload_frames; int tx_offload_bytes; int tx_drop_frames; int tx_ucast_frames; int tx_ucast_bytes; int tx_mcast_frames; int tx_mcast_bytes; int tx_bcast_frames; int tx_bcast_bytes; } ;
struct fw_fcoe_port_cmd_params {int idx; int nstats; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct fw_fcoe_port_stats*,int ,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct csio_hw *VAR_2,
    struct csio_mb *VAR_3,
    enum fw_retval *VAR_4,
    struct fw_fcoe_port_cmd_params *VAR_5,
    struct fw_fcoe_port_stats *VAR_6)
{
 struct fw_fcoe_stats_cmd *VAR_7 = (struct fw_fcoe_stats_cmd *)(VAR_3->mb);
 struct fw_fcoe_port_stats VAR_8;
 uint8_t *VAR_9;
 uint8_t *VAR_10;

 *VAR_4 = FUNC_0(FUNC_3(VAR_7->free_to_len16));

 FUNC_2(&VAR_8, 0, sizeof(struct fw_fcoe_port_stats));

 if (*VAR_4 == VAR_1) {
  VAR_10 = (uint8_t *)(&VAR_8) + ((VAR_5->idx - 1) * 8);
  VAR_9 = (uint8_t *)VAR_7 + (VAR_0 * 8);
  FUNC_1(VAR_10, VAR_9, (VAR_5->nstats * 8));
  if (VAR_5->idx == 1) {

   VAR_6->tx_bcast_bytes = VAR_8.tx_bcast_bytes;
   VAR_6->tx_bcast_frames = VAR_8.tx_bcast_frames;
   VAR_6->tx_mcast_bytes = VAR_8.tx_mcast_bytes;
   VAR_6->tx_mcast_frames = VAR_8.tx_mcast_frames;
   VAR_6->tx_ucast_bytes = VAR_8.tx_ucast_bytes;
   VAR_6->tx_ucast_frames = VAR_8.tx_ucast_frames;
  }
  if (VAR_5->idx == 7) {

   VAR_6->tx_drop_frames = VAR_8.tx_drop_frames;
   VAR_6->tx_offload_bytes = VAR_8.tx_offload_bytes;
   VAR_6->tx_offload_frames = VAR_8.tx_offload_frames;




   VAR_6->rx_bcast_bytes = VAR_8.rx_bcast_bytes;
   VAR_6->rx_bcast_frames = VAR_8.rx_bcast_frames;
   VAR_6->rx_mcast_bytes = VAR_8.rx_mcast_bytes;
  }
  if (VAR_5->idx == 13) {

   VAR_6->rx_mcast_frames = VAR_8.rx_mcast_frames;
   VAR_6->rx_ucast_bytes = VAR_8.rx_ucast_bytes;
   VAR_6->rx_ucast_frames = VAR_8.rx_ucast_frames;
   VAR_6->rx_err_frames = VAR_8.rx_err_frames;
  }
 }
}
