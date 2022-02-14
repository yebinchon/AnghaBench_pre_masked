
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct fw_fcoe_port_stats {int rx_err_frames; int rx_ucast_bytes; int rx_mcast_bytes; int rx_bcast_bytes; int rx_ucast_frames; int rx_mcast_frames; int rx_bcast_frames; int tx_offload_bytes; int tx_ucast_bytes; int tx_mcast_bytes; int tx_bcast_bytes; int tx_offload_frames; int tx_ucast_frames; int tx_mcast_frames; int tx_bcast_frames; } ;
struct fc_host_statistics {int tx_frames; int tx_words; int rx_frames; int rx_words; int error_frames; int fcp_input_megabytes; int fcp_output_megabytes; scalar_t__ seconds_since_last_reset; int link_failure_count; int fcp_control_requests; int fcp_output_requests; int fcp_input_requests; } ;
struct TYPE_3__ {int n_input_bytes; int n_output_bytes; int n_link_down; scalar_t__ n_control_requests; scalar_t__ n_output_requests; scalar_t__ n_input_requests; } ;
struct csio_lnode {TYPE_1__ stats; int portid; struct fc_host_statistics fch_stats; } ;
struct TYPE_4__ {scalar_t__ n_reset_start; } ;
struct csio_hw {TYPE_2__ stats; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_hw*,int ,struct fw_fcoe_port_stats*) ;
 struct csio_hw* FUNC_2 (struct csio_lnode*) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct fw_fcoe_port_stats*,int ,int) ;
 struct csio_lnode* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static struct fc_host_statistics *
FUNC_7(struct Scsi_Host *VAR_2)
{
 struct csio_lnode *VAR_3 = FUNC_6(VAR_2);
 struct csio_hw *VAR_4 = FUNC_2(VAR_3);
 struct fc_host_statistics *VAR_5 = &VAR_3->fch_stats;
 struct fw_fcoe_port_stats VAR_6;
 uint64_t VAR_7;

 FUNC_5(&VAR_6, 0, sizeof(struct fw_fcoe_port_stats));
 FUNC_1(VAR_4, VAR_3->portid, &VAR_6);

 VAR_5->tx_frames += (FUNC_0(VAR_6.tx_bcast_frames) +
       FUNC_0(VAR_6.tx_mcast_frames) +
       FUNC_0(VAR_6.tx_ucast_frames) +
       FUNC_0(VAR_6.tx_offload_frames));
 VAR_5->tx_words += (FUNC_0(VAR_6.tx_bcast_bytes) +
      FUNC_0(VAR_6.tx_mcast_bytes) +
      FUNC_0(VAR_6.tx_ucast_bytes) +
      FUNC_0(VAR_6.tx_offload_bytes)) /
       VAR_0;
 VAR_5->rx_frames += (FUNC_0(VAR_6.rx_bcast_frames) +
      FUNC_0(VAR_6.rx_mcast_frames) +
      FUNC_0(VAR_6.rx_ucast_frames));
 VAR_5->rx_words += (FUNC_0(VAR_6.rx_bcast_bytes) +
     FUNC_0(VAR_6.rx_mcast_bytes) +
     FUNC_0(VAR_6.rx_ucast_bytes)) /
       VAR_0;
 VAR_5->error_frames += FUNC_0(VAR_6.rx_err_frames);
 VAR_5->fcp_input_requests += VAR_3->stats.n_input_requests;
 VAR_5->fcp_output_requests += VAR_3->stats.n_output_requests;
 VAR_5->fcp_control_requests += VAR_3->stats.n_control_requests;
 VAR_5->fcp_input_megabytes += VAR_3->stats.n_input_bytes >> 20;
 VAR_5->fcp_output_megabytes += VAR_3->stats.n_output_bytes >> 20;
 VAR_5->link_failure_count = VAR_3->stats.n_link_down;

 VAR_7 = FUNC_4(VAR_1) - VAR_4->stats.n_reset_start;
 FUNC_3(VAR_7, 1000);
 VAR_5->seconds_since_last_reset = VAR_7;

 return VAR_5;
}
