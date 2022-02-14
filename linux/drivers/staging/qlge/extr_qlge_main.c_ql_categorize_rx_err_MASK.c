
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx_ring {int rx_errors; } ;
struct nic_stats {int rx_crc_err; int rx_frame_len_err; int rx_preamble_err; int rx_undersize_err; int rx_oversize_err; int rx_code_err; int rx_err_count; } ;
struct ql_adapter {struct nic_stats nic_stats; } ;





 int VAR_0 ;




__attribute__((used)) static void FUNC_0(struct ql_adapter *VAR_1, u8 VAR_2,
     struct rx_ring *VAR_3)
{
 struct nic_stats *VAR_4 = &VAR_1->nic_stats;

 VAR_4->rx_err_count++;
 VAR_3->rx_errors++;

 switch (VAR_2 & VAR_0) {
 case 133:
  VAR_4->rx_code_err++;
  break;
 case 130:
  VAR_4->rx_oversize_err++;
  break;
 case 128:
  VAR_4->rx_undersize_err++;
  break;
 case 129:
  VAR_4->rx_preamble_err++;
  break;
 case 131:
  VAR_4->rx_frame_len_err++;
  break;
 case 132:
  VAR_4->rx_crc_err++;
 default:
  break;
 }
}
