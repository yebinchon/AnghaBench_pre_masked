
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsf_qtcb_bottom_port {scalar_t__ output_mb; scalar_t__ input_mb; scalar_t__ control_requests; scalar_t__ output_requests; scalar_t__ input_requests; scalar_t__ invalid_crcs; scalar_t__ invalid_tx_words; scalar_t__ psp_error_counts; scalar_t__ loss_of_signal; scalar_t__ loss_of_sync; scalar_t__ link_failure; scalar_t__ dumped_frames; scalar_t__ error_frames; scalar_t__ nos; scalar_t__ lip; scalar_t__ rx_words; scalar_t__ rx_frames; scalar_t__ tx_words; scalar_t__ tx_frames; scalar_t__ seconds_since_last_reset; } ;
struct fc_host_statistics {scalar_t__ fcp_output_megabytes; scalar_t__ fcp_input_megabytes; scalar_t__ fcp_control_requests; scalar_t__ fcp_output_requests; scalar_t__ fcp_input_requests; scalar_t__ invalid_crc_count; scalar_t__ invalid_tx_word_count; scalar_t__ prim_seq_protocol_err_count; scalar_t__ loss_of_signal_count; scalar_t__ loss_of_sync_count; scalar_t__ link_failure_count; scalar_t__ dumped_frames; scalar_t__ error_frames; scalar_t__ nos_count; scalar_t__ lip_count; scalar_t__ rx_words; scalar_t__ rx_frames; scalar_t__ tx_words; scalar_t__ tx_frames; scalar_t__ seconds_since_last_reset; } ;



__attribute__((used)) static void FUNC_0(struct fc_host_statistics *VAR_0,
        struct fsf_qtcb_bottom_port *VAR_1,
        struct fsf_qtcb_bottom_port *VAR_2)
{
 VAR_0->seconds_since_last_reset =
  VAR_1->seconds_since_last_reset - VAR_2->seconds_since_last_reset;
 VAR_0->tx_frames = VAR_1->tx_frames - VAR_2->tx_frames;
 VAR_0->tx_words = VAR_1->tx_words - VAR_2->tx_words;
 VAR_0->rx_frames = VAR_1->rx_frames - VAR_2->rx_frames;
 VAR_0->rx_words = VAR_1->rx_words - VAR_2->rx_words;
 VAR_0->lip_count = VAR_1->lip - VAR_2->lip;
 VAR_0->nos_count = VAR_1->nos - VAR_2->nos;
 VAR_0->error_frames = VAR_1->error_frames - VAR_2->error_frames;
 VAR_0->dumped_frames = VAR_1->dumped_frames - VAR_2->dumped_frames;
 VAR_0->link_failure_count = VAR_1->link_failure - VAR_2->link_failure;
 VAR_0->loss_of_sync_count = VAR_1->loss_of_sync - VAR_2->loss_of_sync;
 VAR_0->loss_of_signal_count =
  VAR_1->loss_of_signal - VAR_2->loss_of_signal;
 VAR_0->prim_seq_protocol_err_count =
  VAR_1->psp_error_counts - VAR_2->psp_error_counts;
 VAR_0->invalid_tx_word_count =
  VAR_1->invalid_tx_words - VAR_2->invalid_tx_words;
 VAR_0->invalid_crc_count = VAR_1->invalid_crcs - VAR_2->invalid_crcs;
 VAR_0->fcp_input_requests =
  VAR_1->input_requests - VAR_2->input_requests;
 VAR_0->fcp_output_requests =
  VAR_1->output_requests - VAR_2->output_requests;
 VAR_0->fcp_control_requests =
  VAR_1->control_requests - VAR_2->control_requests;
 VAR_0->fcp_input_megabytes = VAR_1->input_mb - VAR_2->input_mb;
 VAR_0->fcp_output_megabytes = VAR_1->output_mb - VAR_2->output_mb;
}
