
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int* tx_modq; int vlan_pri_map; int filter_mask; int ingress_config; int rx_pkt_encap; int vnic_shift; int hash_filter_mask; void* frag_shift; void* matchtype_shift; void* macmatch_shift; void* ethertype_shift; void* protocol_shift; void* tos_shift; void* vlan_shift; void* port_shift; void* fcoe_shift; int dack_re; int tre; } ;
struct TYPE_4__ {TYPE_1__ tp; int chip; } ;
struct adapter {TYPE_2__ params; int pdev_dev; int pf; int mbox; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (int ,char*,...) ;
 void* FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int ,int ,int ,int,int*,int*) ;
 int FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,int*,int,int ,int) ;

int FUNC_13(struct adapter *VAR_23, bool VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;


 VAR_27 = FUNC_11(VAR_23, VAR_18);
 VAR_23->params.tp.tre = FUNC_7(VAR_27);
 VAR_23->params.tp.dack_re = FUNC_1(VAR_27);


 for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++)
  VAR_23->params.tp.tx_modq[VAR_28] = VAR_28;




 VAR_25 = (FUNC_2(VAR_5) |
   FUNC_5(VAR_6) |
   FUNC_6(VAR_7));


 VAR_29 = FUNC_10(VAR_23, VAR_23->mbox, VAR_23->pf, 0, 1,
         &VAR_25, &VAR_26);
 if (VAR_29 == 0) {
  FUNC_8(VAR_23->pdev_dev,
    "Current filter mode/mask 0x%x:0x%x\n",
    FUNC_4(VAR_26),
    FUNC_3(VAR_26));
  VAR_23->params.tp.vlan_pri_map =
   FUNC_4(VAR_26);
  VAR_23->params.tp.filter_mask =
   FUNC_3(VAR_26);
 } else {
  FUNC_8(VAR_23->pdev_dev,
    "Failed to read filter mode/mask via fw api, using indirect-reg-read\n");






  FUNC_12(VAR_23, &VAR_23->params.tp.vlan_pri_map, 1,
          VAR_19, VAR_24);
  VAR_23->params.tp.filter_mask = VAR_23->params.tp.vlan_pri_map;
 }

 FUNC_12(VAR_23, &VAR_23->params.tp.ingress_config, 1,
         VAR_16, VAR_24);




 if (FUNC_0(VAR_23->params.chip) > VAR_0) {
  VAR_27 = FUNC_11(VAR_23, VAR_17);
  VAR_23->params.tp.rx_pkt_encap = (VAR_27 & VAR_1) ? 1 : 0;
 }





 VAR_23->params.tp.fcoe_shift = FUNC_9(VAR_23, VAR_3);
 VAR_23->params.tp.port_shift = FUNC_9(VAR_23, VAR_13);
 VAR_23->params.tp.vnic_shift = FUNC_9(VAR_23, VAR_22);
 VAR_23->params.tp.vlan_shift = FUNC_9(VAR_23, VAR_20);
 VAR_23->params.tp.tos_shift = FUNC_9(VAR_23, VAR_15);
 VAR_23->params.tp.protocol_shift = FUNC_9(VAR_23,
              VAR_14);
 VAR_23->params.tp.ethertype_shift = FUNC_9(VAR_23,
        VAR_2);
 VAR_23->params.tp.macmatch_shift = FUNC_9(VAR_23,
              VAR_10);
 VAR_23->params.tp.matchtype_shift = FUNC_9(VAR_23,
        VAR_11);
 VAR_23->params.tp.frag_shift = FUNC_9(VAR_23,
          VAR_4);




 if ((VAR_23->params.tp.ingress_config & VAR_21) == 0)
  VAR_23->params.tp.vnic_shift = -1;

 VAR_27 = FUNC_11(VAR_23, VAR_8);
 VAR_23->params.tp.hash_filter_mask = VAR_27;
 VAR_27 = FUNC_11(VAR_23, VAR_9);
 VAR_23->params.tp.hash_filter_mask |= ((u64)VAR_27 << 32);
 return 0;
}
