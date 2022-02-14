
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_hw_features {int dma_width; int hash_table_size; void* tc_cnt; void* tx_ch_cnt; void* rx_ch_cnt; void* tx_q_cnt; void* rx_q_cnt; void* aux_snap_num; void* pps_out_num; void* l3l4_filter_num; void* rss; void* dma_debug; void* tso; void* sph; void* dcb; void* adv_ts_hi; void* tx_fifo_size; void* rx_fifo_size; void* sa_vlan_ins; void* ts_src; void* addn_mac; void* rx_coe; void* tx_coe; void* eee; void* ts; void* aoe; void* mmc; void* mgk; void* rwk; void* sma; void* vlhash; void* phyifsel; void* version; } ;
struct xlgmac_pdata {scalar_t__ mac_regs; struct xlgmac_hw_features hw_feat; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_29 ;
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
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 scalar_t__ VAR_67 ;
 void* FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (struct xlgmac_hw_features*,int ,int) ;
 void* FUNC_2 (scalar_t__) ;

void FUNC_3(struct xlgmac_pdata *VAR_68)
{
 struct xlgmac_hw_features *VAR_69 = &VAR_68->hw_feat;
 unsigned int VAR_70, VAR_71, VAR_72;

 VAR_70 = FUNC_2(VAR_68->mac_regs + VAR_0);
 VAR_71 = FUNC_2(VAR_68->mac_regs + VAR_29);
 VAR_72 = FUNC_2(VAR_68->mac_regs + VAR_54);

 FUNC_1(VAR_69, 0, sizeof(*VAR_69));

 VAR_69->version = FUNC_2(VAR_68->mac_regs + VAR_67);


 VAR_69->phyifsel = FUNC_0(VAR_70,
      VAR_12,
      VAR_11);
 VAR_69->vlhash = FUNC_0(VAR_70,
      VAR_28,
      VAR_27);
 VAR_69->sma = FUNC_0(VAR_70,
      VAR_20,
      VAR_19);
 VAR_69->rwk = FUNC_0(VAR_70,
      VAR_14,
      VAR_13);
 VAR_69->mgk = FUNC_0(VAR_70,
      VAR_8,
      VAR_7);
 VAR_69->mmc = FUNC_0(VAR_70,
      VAR_10,
      VAR_9);
 VAR_69->aoe = FUNC_0(VAR_70,
      VAR_4,
      VAR_3);
 VAR_69->ts = FUNC_0(VAR_70,
      VAR_22,
      VAR_21);
 VAR_69->eee = FUNC_0(VAR_70,
      VAR_6,
      VAR_5);
 VAR_69->tx_coe = FUNC_0(VAR_70,
      VAR_26,
      VAR_25);
 VAR_69->rx_coe = FUNC_0(VAR_70,
      VAR_16,
      VAR_15);
 VAR_69->addn_mac = FUNC_0(VAR_70,
      VAR_2,
      VAR_1);
 VAR_69->ts_src = FUNC_0(VAR_70,
      VAR_24,
      VAR_23);
 VAR_69->sa_vlan_ins = FUNC_0(VAR_70,
      VAR_18,
      VAR_17);


 VAR_69->rx_fifo_size = FUNC_0(VAR_71,
      VAR_47,
      VAR_46);
 VAR_69->tx_fifo_size = FUNC_0(VAR_71,
      VAR_53,
      VAR_52);
 VAR_69->adv_ts_hi = FUNC_0(VAR_71,
      VAR_33,
      VAR_32);
 VAR_69->dma_width = FUNC_0(VAR_71,
      VAR_31,
      VAR_30);
 VAR_69->dcb = FUNC_0(VAR_71,
      VAR_37,
      VAR_36);
 VAR_69->sph = FUNC_0(VAR_71,
      VAR_49,
      VAR_48);
 VAR_69->tso = FUNC_0(VAR_71,
      VAR_51,
      VAR_50);
 VAR_69->dma_debug = FUNC_0(VAR_71,
      VAR_35,
      VAR_34);
 VAR_69->rss = FUNC_0(VAR_71,
      VAR_45,
      VAR_44);
 VAR_69->tc_cnt = FUNC_0(VAR_71,
      VAR_43,
      VAR_42);
 VAR_69->hash_table_size = FUNC_0(VAR_71,
      VAR_39,
      VAR_38);
 VAR_69->l3l4_filter_num = FUNC_0(VAR_71,
      VAR_41,
      VAR_40);


 VAR_69->rx_q_cnt = FUNC_0(VAR_72,
      VAR_62,
      VAR_61);
 VAR_69->tx_q_cnt = FUNC_0(VAR_72,
      VAR_66,
      VAR_65);
 VAR_69->rx_ch_cnt = FUNC_0(VAR_72,
      VAR_60,
      VAR_59);
 VAR_69->tx_ch_cnt = FUNC_0(VAR_72,
      VAR_64,
      VAR_63);
 VAR_69->pps_out_num = FUNC_0(VAR_72,
      VAR_58,
      VAR_57);
 VAR_69->aux_snap_num = FUNC_0(VAR_72,
      VAR_56,
      VAR_55);


 switch (VAR_69->hash_table_size) {
 case 0:
  break;
 case 1:
  VAR_69->hash_table_size = 64;
  break;
 case 2:
  VAR_69->hash_table_size = 128;
  break;
 case 3:
  VAR_69->hash_table_size = 256;
  break;
 }


 switch (VAR_69->dma_width) {
 case 0:
  VAR_69->dma_width = 32;
  break;
 case 1:
  VAR_69->dma_width = 40;
  break;
 case 2:
  VAR_69->dma_width = 48;
  break;
 default:
  VAR_69->dma_width = 32;
 }




 VAR_69->rx_q_cnt++;
 VAR_69->tx_q_cnt++;
 VAR_69->rx_ch_cnt++;
 VAR_69->tx_ch_cnt++;
 VAR_69->tc_cnt++;
}
