
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int update; int tx_mc_byte_cnt; int tx_bc_byte_cnt; int tx_trunc; int tx_len_err; int tx_trd_eop; int tx_underrun; int tx_abort_col; int tx_late_col; int tx_multi_col; int tx_single_col; int tx_sz_max; int tx_sz_1518B; int tx_sz_1023B; int tx_sz_511B; int tx_sz_255B; int tx_sz_127B; int tx_sz_64B; int tx_byte_cnt; int tx_defer; int tx_ctrl; int tx_exc_defer; int tx_pause; int tx_mcast; int tx_bcast; int tx_ok; int rx_err_addr; int rx_mc_byte_cnt; int rx_bc_byte_cnt; int rx_align_err; int rx_ov_rrd; int rx_ov_rxf; int rx_ov_sz; int rx_sz_max; int rx_sz_1518B; int rx_sz_1023B; int rx_sz_511B; int rx_sz_255B; int rx_sz_127B; int rx_sz_64B; int rx_frag; int rx_runt; int rx_byte_cnt; int rx_len_err; int rx_fcs_err; int rx_ctrl; int rx_pause; int rx_mcast; int rx_bcast; int rx_ok; } ;
struct alx_hw {TYPE_1__ stats; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ FUNC_0 (struct alx_hw*,int ) ;

void FUNC_1(struct alx_hw *VAR_50)
{

 VAR_50->stats.rx_ok += FUNC_0(VAR_50, VAR_11);
 VAR_50->stats.rx_bcast += FUNC_0(VAR_50, VAR_1);
 VAR_50->stats.rx_mcast += FUNC_0(VAR_50, VAR_9);
 VAR_50->stats.rx_pause += FUNC_0(VAR_50, VAR_15);
 VAR_50->stats.rx_ctrl += FUNC_0(VAR_50, VAR_4);
 VAR_50->stats.rx_fcs_err += FUNC_0(VAR_50, VAR_6);
 VAR_50->stats.rx_len_err += FUNC_0(VAR_50, VAR_8);
 VAR_50->stats.rx_byte_cnt += FUNC_0(VAR_50, VAR_3);
 VAR_50->stats.rx_runt += FUNC_0(VAR_50, VAR_16);
 VAR_50->stats.rx_frag += FUNC_0(VAR_50, VAR_7);
 VAR_50->stats.rx_sz_64B += FUNC_0(VAR_50, VAR_22);
 VAR_50->stats.rx_sz_127B += FUNC_0(VAR_50, VAR_18);
 VAR_50->stats.rx_sz_255B += FUNC_0(VAR_50, VAR_20);
 VAR_50->stats.rx_sz_511B += FUNC_0(VAR_50, VAR_21);
 VAR_50->stats.rx_sz_1023B += FUNC_0(VAR_50, VAR_17);
 VAR_50->stats.rx_sz_1518B += FUNC_0(VAR_50, VAR_19);
 VAR_50->stats.rx_sz_max += FUNC_0(VAR_50, VAR_23);
 VAR_50->stats.rx_ov_sz += FUNC_0(VAR_50, VAR_14);
 VAR_50->stats.rx_ov_rxf += FUNC_0(VAR_50, VAR_13);
 VAR_50->stats.rx_ov_rrd += FUNC_0(VAR_50, VAR_12);
 VAR_50->stats.rx_align_err += FUNC_0(VAR_50, VAR_0);
 VAR_50->stats.rx_bc_byte_cnt += FUNC_0(VAR_50, VAR_2);
 VAR_50->stats.rx_mc_byte_cnt += FUNC_0(VAR_50, VAR_10);
 VAR_50->stats.rx_err_addr += FUNC_0(VAR_50, VAR_5);


 VAR_50->stats.tx_ok += FUNC_0(VAR_50, VAR_36);
 VAR_50->stats.tx_bcast += FUNC_0(VAR_50, VAR_25);
 VAR_50->stats.tx_mcast += FUNC_0(VAR_50, VAR_33);
 VAR_50->stats.tx_pause += FUNC_0(VAR_50, VAR_37);
 VAR_50->stats.tx_exc_defer += FUNC_0(VAR_50, VAR_30);
 VAR_50->stats.tx_ctrl += FUNC_0(VAR_50, VAR_28);
 VAR_50->stats.tx_defer += FUNC_0(VAR_50, VAR_29);
 VAR_50->stats.tx_byte_cnt += FUNC_0(VAR_50, VAR_27);
 VAR_50->stats.tx_sz_64B += FUNC_0(VAR_50, VAR_44);
 VAR_50->stats.tx_sz_127B += FUNC_0(VAR_50, VAR_40);
 VAR_50->stats.tx_sz_255B += FUNC_0(VAR_50, VAR_42);
 VAR_50->stats.tx_sz_511B += FUNC_0(VAR_50, VAR_43);
 VAR_50->stats.tx_sz_1023B += FUNC_0(VAR_50, VAR_39);
 VAR_50->stats.tx_sz_1518B += FUNC_0(VAR_50, VAR_41);
 VAR_50->stats.tx_sz_max += FUNC_0(VAR_50, VAR_45);
 VAR_50->stats.tx_single_col += FUNC_0(VAR_50, VAR_38);
 VAR_50->stats.tx_multi_col += FUNC_0(VAR_50, VAR_35);
 VAR_50->stats.tx_late_col += FUNC_0(VAR_50, VAR_31);
 VAR_50->stats.tx_abort_col += FUNC_0(VAR_50, VAR_24);
 VAR_50->stats.tx_underrun += FUNC_0(VAR_50, VAR_48);
 VAR_50->stats.tx_trd_eop += FUNC_0(VAR_50, VAR_46);
 VAR_50->stats.tx_len_err += FUNC_0(VAR_50, VAR_32);
 VAR_50->stats.tx_trunc += FUNC_0(VAR_50, VAR_47);
 VAR_50->stats.tx_bc_byte_cnt += FUNC_0(VAR_50, VAR_26);
 VAR_50->stats.tx_mc_byte_cnt += FUNC_0(VAR_50, VAR_34);

 VAR_50->stats.update += FUNC_0(VAR_50, VAR_49);
}
