
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_host_statistics {int fcp_output_megabytes; int fcp_input_megabytes; int fcp_control_requests; int fcp_output_requests; int fcp_input_requests; int invalid_crc_count; int invalid_tx_word_count; int prim_seq_protocol_err_count; int loss_of_signal_count; int loss_of_sync_count; int link_failure_count; int dumped_frames; int error_frames; int nos_count; int lip_count; int rx_words; int rx_frames; int tx_words; int tx_frames; int seconds_since_last_reset; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ,struct Scsi_Host*,char*,int ) ;
 int VAR_0 ;

void FUNC_1(struct Scsi_Host *VAR_1,
    struct fc_host_statistics *VAR_2)
{
 FUNC_0(VAR_0, VAR_1,
   "fnic: seconds since last reset = %llu\n",
   VAR_2->seconds_since_last_reset);
 FUNC_0(VAR_0, VAR_1,
   "fnic: tx frames		= %llu\n",
   VAR_2->tx_frames);
 FUNC_0(VAR_0, VAR_1,
   "fnic: tx words		= %llu\n",
   VAR_2->tx_words);
 FUNC_0(VAR_0, VAR_1,
   "fnic: rx frames		= %llu\n",
   VAR_2->rx_frames);
 FUNC_0(VAR_0, VAR_1,
   "fnic: rx words		= %llu\n",
   VAR_2->rx_words);
 FUNC_0(VAR_0, VAR_1,
   "fnic: lip count		= %llu\n",
   VAR_2->lip_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: nos count		= %llu\n",
   VAR_2->nos_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: error frames		= %llu\n",
   VAR_2->error_frames);
 FUNC_0(VAR_0, VAR_1,
   "fnic: dumped frames	= %llu\n",
   VAR_2->dumped_frames);
 FUNC_0(VAR_0, VAR_1,
   "fnic: link failure count	= %llu\n",
   VAR_2->link_failure_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: loss of sync count	= %llu\n",
   VAR_2->loss_of_sync_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: loss of signal count	= %llu\n",
   VAR_2->loss_of_signal_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: prim seq protocol err count = %llu\n",
   VAR_2->prim_seq_protocol_err_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: invalid tx word count= %llu\n",
   VAR_2->invalid_tx_word_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: invalid crc count	= %llu\n",
   VAR_2->invalid_crc_count);
 FUNC_0(VAR_0, VAR_1,
   "fnic: fcp input requests	= %llu\n",
   VAR_2->fcp_input_requests);
 FUNC_0(VAR_0, VAR_1,
   "fnic: fcp output requests	= %llu\n",
   VAR_2->fcp_output_requests);
 FUNC_0(VAR_0, VAR_1,
   "fnic: fcp control requests	= %llu\n",
   VAR_2->fcp_control_requests);
 FUNC_0(VAR_0, VAR_1,
   "fnic: fcp input megabytes	= %llu\n",
   VAR_2->fcp_input_megabytes);
 FUNC_0(VAR_0, VAR_1,
   "fnic: fcp output megabytes	= %llu\n",
   VAR_2->fcp_output_megabytes);
 return;
}
