
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int def_ctrl; int reg_ctrl; int ctrl_skb; int ctrl_bd; int dxe_wq; int desc_num; int ch_type; } ;
struct wcn36xx {int tx_enable_state; TYPE_1__ dxe_rx_h_ch; TYPE_1__ dxe_rx_l_ch; TYPE_1__ dxe_tx_h_ch; TYPE_1__ dxe_tx_l_ch; } ;


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
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct wcn36xx*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct wcn36xx *VAR_21)
{
 int VAR_22;

 VAR_21->dxe_tx_l_ch.ch_type = VAR_10;
 VAR_21->dxe_tx_h_ch.ch_type = VAR_9;
 VAR_21->dxe_rx_l_ch.ch_type = VAR_8;
 VAR_21->dxe_rx_h_ch.ch_type = VAR_7;

 VAR_21->dxe_tx_l_ch.desc_num = VAR_6;
 VAR_21->dxe_tx_h_ch.desc_num = VAR_5;
 VAR_21->dxe_rx_l_ch.desc_num = VAR_4;
 VAR_21->dxe_rx_h_ch.desc_num = VAR_3;

 VAR_21->dxe_tx_l_ch.dxe_wq = VAR_18;
 VAR_21->dxe_tx_h_ch.dxe_wq = VAR_17;

 VAR_21->dxe_tx_l_ch.ctrl_bd = VAR_13;
 VAR_21->dxe_tx_h_ch.ctrl_bd = VAR_11;

 VAR_21->dxe_tx_l_ch.ctrl_skb = VAR_14;
 VAR_21->dxe_tx_h_ch.ctrl_skb = VAR_12;

 VAR_21->dxe_tx_l_ch.reg_ctrl = VAR_16;
 VAR_21->dxe_tx_h_ch.reg_ctrl = VAR_15;

 VAR_21->dxe_tx_l_ch.def_ctrl = VAR_2;
 VAR_21->dxe_tx_h_ch.def_ctrl = VAR_1;


 VAR_22 = FUNC_1(&VAR_21->dxe_tx_l_ch);
 if (VAR_22)
  goto out_err;
 VAR_22 = FUNC_1(&VAR_21->dxe_tx_h_ch);
 if (VAR_22)
  goto out_err;
 VAR_22 = FUNC_1(&VAR_21->dxe_rx_l_ch);
 if (VAR_22)
  goto out_err;
 VAR_22 = FUNC_1(&VAR_21->dxe_rx_h_ch);
 if (VAR_22)
  goto out_err;


 VAR_22 = FUNC_0(VAR_21->tx_enable_state,
       VAR_19 |
       VAR_20,
       VAR_20);
 if (VAR_22)
  goto out_err;

 return 0;

out_err:
 FUNC_3("Failed to allocate DXE control blocks\n");
 FUNC_2(VAR_21);
 return -VAR_0;
}
