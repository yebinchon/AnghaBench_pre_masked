
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__* sel_fcf; } ;
struct qedf_ctx {TYPE_3__ ctlr; TYPE_2__* lport; int dbg_ctx; int data_src_addr; int wwpn; int mac; } ;
struct fip_wwn_desc {int fd_wwn; } ;
struct fip_vn_desc {int fd_mac; int fd_fc_id; int fd_wwpn; } ;
struct fip_mac_desc {int fd_mac; } ;
struct fip_header {scalar_t__ fip_subcode; int fip_dl_len; int fip_op; } ;
struct fip_desc {size_t fip_dlen; int fip_dtype; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct TYPE_5__ {int port_id; } ;
struct TYPE_4__ {int switch_name; int fcf_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_3__*,struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ,int,int,scalar_t__,int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (struct qedf_ctx*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;

void FUNC_13(struct qedf_ctx *VAR_13, struct sk_buff *VAR_14)
{
 struct ethhdr *VAR_15;
 struct fip_header *VAR_16;
 struct fip_desc *VAR_17;
 struct fip_mac_desc *VAR_18;
 struct fip_wwn_desc *VAR_19;
 struct fip_vn_desc *VAR_20;
 size_t VAR_21, VAR_22;
 u16 VAR_23;
 u8 VAR_24;
 bool VAR_25 = 0;

 bool VAR_26 = 1;
 bool VAR_27 = 0;
 u64 VAR_28;
 u16 VAR_29 = 0;

 VAR_15 = (struct ethhdr *)FUNC_12(VAR_14);
 VAR_16 = (struct fip_header *) ((void *)VAR_14->data + 2 * VAR_1 + 2);
 VAR_23 = FUNC_8(VAR_16->fip_op);
 VAR_24 = VAR_16->fip_subcode;

 FUNC_1(&VAR_13->dbg_ctx, VAR_10,
    "FIP frame received: skb=%p fiph=%p source=%pM destn=%pM op=%x sub=%x vlan=%04x",
    VAR_14, VAR_16, VAR_15->h_source, VAR_15->h_dest, VAR_23,
    VAR_24, VAR_29);
 if (VAR_12)
  FUNC_9(VAR_8, "fip ", VAR_0, 16, 1,
      VAR_14->data, VAR_14->len, 0);

 if (!FUNC_3(VAR_15->h_dest, VAR_13->mac) &&
     !FUNC_3(VAR_15->h_dest, VAR_11) &&
  !FUNC_3(VAR_15->h_dest, VAR_13->data_src_addr)) {
  FUNC_1(&VAR_13->dbg_ctx, VAR_10,
     "Dropping FIP type 0x%x pkt due to destination MAC mismatch dest_mac=%pM ctlr.dest_addr=%pM data_src_addr=%pM.\n",
     VAR_23, VAR_15->h_dest, VAR_13->mac,
     VAR_13->data_src_addr);
  FUNC_6(VAR_14);
  return;
 }


 if (VAR_23 == VAR_5 && VAR_24 == VAR_7) {
  FUNC_11(VAR_13, VAR_14);
  FUNC_6(VAR_14);
 } else if (VAR_23 == VAR_4 && VAR_24 == VAR_6) {
  FUNC_1(&(VAR_13->dbg_ctx), VAR_9, "Clear virtual "
      "link received.\n");


  if (VAR_13->ctlr.sel_fcf == ((void*)0)) {
   FUNC_1(&(VAR_13->dbg_ctx), VAR_9,
       "Dropping CVL since FCF has not been selected "
       "yet.");
   FUNC_6(VAR_14);
   return;
  }





  VAR_21 = FUNC_8(VAR_16->fip_dl_len) * VAR_3;
  VAR_17 = (struct fip_desc *)(VAR_16 + 1);
  while (VAR_21 >= sizeof(*VAR_17)) {
   VAR_22 = VAR_17->fip_dlen * VAR_3;
   switch (VAR_17->fip_dtype) {
   case 130:
    VAR_18 = (struct fip_mac_desc *)VAR_17;
    FUNC_1(&VAR_13->dbg_ctx, VAR_9,
       "Switch fd_mac=%pM.\n", VAR_18->fd_mac);
    if (FUNC_3(VAR_18->fd_mac,
        VAR_13->ctlr.sel_fcf->fcf_mac))
     VAR_25 = 1;
    break;
   case 129:
    VAR_19 = (struct fip_wwn_desc *)VAR_17;
    VAR_28 = FUNC_5(&VAR_19->fd_wwn);
    FUNC_1(&VAR_13->dbg_ctx, VAR_9,
       "Switch fd_wwn=%016llx fcf_switch_name=%016llx.\n",
       VAR_28,
       VAR_13->ctlr.sel_fcf->switch_name);
    if (VAR_28 ==
        VAR_13->ctlr.sel_fcf->switch_name)
     VAR_27 = 1;
    break;
   case 128:
    VAR_26 = 0;
    VAR_20 = (struct fip_vn_desc *)VAR_17;

    FUNC_0(&VAR_13->dbg_ctx,
      "CVL vx_port fd_fc_id=0x%x fd_mac=%pM fd_wwpn=%016llx.\n",
      FUNC_7(VAR_20->fd_fc_id), VAR_20->fd_mac,
      FUNC_5(&VAR_20->fd_wwpn));



    if ((FUNC_5(&VAR_20->fd_wwpn) ==
     VAR_13->wwpn) ||
       (FUNC_7(VAR_20->fd_fc_id) ==
     VAR_13->lport->port_id) ||
       (FUNC_3(VAR_20->fd_mac,
     VAR_13->data_src_addr))) {
     VAR_26 = 1;
    }
    break;
   default:

    break;
   }
   VAR_17 = (struct fip_desc *)((char *)VAR_17 + VAR_22);
   VAR_21 -= VAR_22;
  }

  FUNC_1(&VAR_13->dbg_ctx, VAR_9,
     "fcf_valid=%d fabric_id_valid=%d fc_wwpn_valid=%d.\n",
     VAR_25, VAR_26, VAR_27);
  if (VAR_25 && VAR_26 && VAR_27)
   FUNC_10(VAR_13->lport);
  FUNC_6(VAR_14);
 } else {

  FUNC_2(VAR_14, VAR_2);
  FUNC_4(&VAR_13->ctlr, VAR_14);
 }
}
