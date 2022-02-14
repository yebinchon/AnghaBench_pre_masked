
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_table_entry {int mac_addr; int state; int port; } ;
typedef int u64 ;
struct nfp_nsp {int dummy; } ;
struct nfp_eth_table_port {int eth_index; unsigned int index; unsigned int nbi; unsigned int base; int lanes; int enabled; int tx_enabled; int rx_enabled; unsigned int speed; int interface; int media; int label_port; int label_subport; int override_changed; int aneg; unsigned int fec_modes_supported; int fec; int mac_addr; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (struct nfp_nsp*) ;

__attribute__((used)) static void
FUNC_5(struct nfp_nsp *VAR_20, const union eth_table_entry *VAR_21,
         unsigned int VAR_22, struct nfp_eth_table_port *VAR_23)
{
 unsigned int VAR_24;
 unsigned int VAR_25;
 u64 VAR_26, VAR_27;

 VAR_26 = FUNC_1(VAR_21->port);
 VAR_27 = FUNC_1(VAR_21->state);

 VAR_23->eth_index = FUNC_0(VAR_7, VAR_26);
 VAR_23->index = VAR_22;
 VAR_23->nbi = VAR_22 / VAR_4;
 VAR_23->base = VAR_22 % VAR_4;
 VAR_23->lanes = FUNC_0(VAR_9, VAR_26);

 VAR_23->enabled = FUNC_0(VAR_12, VAR_27);
 VAR_23->tx_enabled = FUNC_0(VAR_19, VAR_27);
 VAR_23->rx_enabled = FUNC_0(VAR_18, VAR_27);

 VAR_24 = FUNC_3(FUNC_0(VAR_17, VAR_27));
 VAR_23->speed = VAR_23->lanes * VAR_24;

 VAR_23->interface = FUNC_0(VAR_14, VAR_27);
 VAR_23->media = FUNC_0(VAR_15, VAR_27);

 FUNC_2(VAR_23->mac_addr, VAR_21->mac_addr);

 VAR_23->label_port = FUNC_0(VAR_10, VAR_26);
 VAR_23->label_subport = FUNC_0(VAR_8, VAR_26);

 if (FUNC_4(VAR_20) < 17)
  return;

 VAR_23->override_changed = FUNC_0(VAR_16, VAR_27);
 VAR_23->aneg = FUNC_0(VAR_11, VAR_27);

 if (FUNC_4(VAR_20) < 22)
  return;

 VAR_25 = FUNC_0(VAR_5, VAR_26);
 VAR_23->fec_modes_supported |= VAR_25 << VAR_1;
 VAR_25 = FUNC_0(VAR_6, VAR_26);
 VAR_23->fec_modes_supported |= VAR_25 << VAR_3;
 if (VAR_23->fec_modes_supported)
  VAR_23->fec_modes_supported |= VAR_0 | VAR_2;

 VAR_23->fec = 1 << FUNC_0(VAR_13, VAR_27);
}
