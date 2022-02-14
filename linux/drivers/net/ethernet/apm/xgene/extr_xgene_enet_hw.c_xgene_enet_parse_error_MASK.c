
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_desc_ring {int rx_fifo_errors; int rx_frame_errors; int rx_length_errors; int rx_errors; int rx_crc_errors; } ;
typedef enum xgene_enet_err_code { ____Placeholder_xgene_enet_err_code } xgene_enet_err_code ;
void FUNC_0(struct xgene_enet_desc_ring *VAR_0,
       enum xgene_enet_err_code VAR_1)
{
 switch (VAR_1) {
 case 132:
  VAR_0->rx_crc_errors++;
  break;
 case 134:
 case 133:
  VAR_0->rx_errors++;
  break;
 case 128:
  VAR_0->rx_frame_errors++;
  break;
 case 130:
  VAR_0->rx_length_errors++;
  break;
 case 129:
  VAR_0->rx_frame_errors++;
  break;
 case 131:
  VAR_0->rx_fifo_errors++;
  break;
 default:
  break;
 }
}
