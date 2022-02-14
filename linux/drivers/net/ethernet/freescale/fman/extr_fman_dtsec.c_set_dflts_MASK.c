
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_cfg {int tx_pad_crc; int ptp_tsu_en; int ptp_exception_en; int maximum_frame; int back_to_back_ipg; int min_ifg_enforcement; int non_back_to_back_ipg2; int non_back_to_back_ipg1; int tx_pause_time_extd; int preamble_len; int rx_prepend; int tx_pause_time; int halfdup_coll_window; int halfdup_retransmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(struct dtsec_cfg *VAR_11)
{
 VAR_11->halfdup_retransmit = VAR_2;
 VAR_11->halfdup_coll_window = VAR_1;
 VAR_11->tx_pad_crc = 1;
 VAR_11->tx_pause_time = VAR_9;

 VAR_11->rx_prepend = VAR_8;
 VAR_11->ptp_tsu_en = 1;
 VAR_11->ptp_exception_en = 1;
 VAR_11->preamble_len = VAR_7;
 VAR_11->tx_pause_time_extd = VAR_10;
 VAR_11->non_back_to_back_ipg1 = VAR_5;
 VAR_11->non_back_to_back_ipg2 = VAR_6;
 VAR_11->min_ifg_enforcement = VAR_4;
 VAR_11->back_to_back_ipg = VAR_0;
 VAR_11->maximum_frame = VAR_3;
}
