
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {int phy_mode; int rxq_cnt; int txq_cnt; int cq_cnt; scalar_t__ enet_id; int port_id; int * ring_ops; void* rm; void* ring_num; void* bp_bufnum; void* eth_bufnum; void* cpu_bufnum; int * cle_ops; int * port_ops; int * mac_ops; } ;







 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;

__attribute__((used)) static void FUNC_0(struct xgene_enet_pdata *VAR_37)
{
 switch (VAR_37->phy_mode) {
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_37->mac_ops = &VAR_29;
  VAR_37->port_ops = &VAR_30;
  VAR_37->rm = VAR_3;
  VAR_37->rxq_cnt = 1;
  VAR_37->txq_cnt = 1;
  VAR_37->cq_cnt = 0;
  break;
 case 128:
  VAR_37->mac_ops = &VAR_33;
  VAR_37->port_ops = &VAR_34;
  VAR_37->rm = VAR_2;
  VAR_37->rxq_cnt = 1;
  VAR_37->txq_cnt = 1;
  VAR_37->cq_cnt = 1;
  break;
 default:
  VAR_37->mac_ops = &VAR_35;
  VAR_37->port_ops = &VAR_36;
  VAR_37->cle_ops = &VAR_28;
  VAR_37->rm = VAR_1;
  if (!VAR_37->rxq_cnt) {
   VAR_37->rxq_cnt = VAR_21;
   VAR_37->txq_cnt = VAR_23;
   VAR_37->cq_cnt = VAR_22;
  }
  break;
 }

 if (VAR_37->enet_id == VAR_20) {
  switch (VAR_37->port_id) {
  case 0:
   if (VAR_37->phy_mode == VAR_0) {
    VAR_37->cpu_bufnum = VAR_14;
    VAR_37->eth_bufnum = VAR_16;
    VAR_37->bp_bufnum = VAR_12;
    VAR_37->ring_num = VAR_10;
   } else {
    VAR_37->cpu_bufnum = VAR_6;
    VAR_37->eth_bufnum = VAR_8;
    VAR_37->bp_bufnum = VAR_4;
    VAR_37->ring_num = VAR_10;
   }
   break;
  case 1:
   if (VAR_37->phy_mode == VAR_0) {
    VAR_37->cpu_bufnum = VAR_25;
    VAR_37->eth_bufnum = VAR_26;
    VAR_37->bp_bufnum = VAR_24;
    VAR_37->ring_num = VAR_27;
   } else {
    VAR_37->cpu_bufnum = VAR_7;
    VAR_37->eth_bufnum = VAR_9;
    VAR_37->bp_bufnum = VAR_5;
    VAR_37->ring_num = VAR_11;
   }
   break;
  default:
   break;
  }
  VAR_37->ring_ops = &VAR_31;
 } else {
  switch (VAR_37->port_id) {
  case 0:
   VAR_37->cpu_bufnum = VAR_14;
   VAR_37->eth_bufnum = VAR_16;
   VAR_37->bp_bufnum = VAR_12;
   VAR_37->ring_num = VAR_18;
   break;
  case 1:
   VAR_37->cpu_bufnum = VAR_15;
   VAR_37->eth_bufnum = VAR_17;
   VAR_37->bp_bufnum = VAR_13;
   VAR_37->ring_num = VAR_19;
   break;
  default:
   break;
  }
  VAR_37->rm = VAR_1;
  VAR_37->ring_ops = &VAR_32;
 }
}
