
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct kwqe {int dummy; } ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
struct TYPE_3__ {int flags; int op_code; } ;
struct fcoe_kwqe_conn_enable_disable {int* s_id; int* d_id; int vlan_tag; int vlan_flag; int conn_id; int context_id; int * dst_mac_addr_hi; int * dst_mac_addr_mid; int * dst_mac_addr_lo; int * src_mac_addr_hi; int * src_mac_addr_mid; int * src_mac_addr_lo; TYPE_1__ hdr; } ;
struct fcoe_ctlr {int * dest_addr; } ;
struct fc_rport {int port_id; } ;
struct bnx2fc_rport {int sid; int fcoe_conn_id; int context_id; int * src_addr; struct fc_rport* rport; } ;
struct bnx2fc_interface {int vlan_id; int vlan_enabled; struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {TYPE_2__* cnic; } ;
struct TYPE_4__ {int (* submit_kwqes ) (TYPE_2__*,struct kwqe**,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fcoe_ctlr* FUNC_0 (struct bnx2fc_interface*) ;
 int FUNC_1 (struct fcoe_kwqe_conn_enable_disable*,int,int) ;
 int FUNC_2 (TYPE_2__*,struct kwqe**,int) ;

int FUNC_3(struct fcoe_port *VAR_5,
        struct bnx2fc_rport *VAR_6)
{
 struct bnx2fc_interface *VAR_7 = VAR_5->priv;
 struct fcoe_ctlr *VAR_8 = FUNC_0(VAR_7);
 struct bnx2fc_hba *VAR_9 = VAR_7->hba;
 struct fcoe_kwqe_conn_enable_disable VAR_10;
 struct kwqe *VAR_11[2];
 struct fc_rport *VAR_12 = VAR_6->rport;
 int VAR_13 = 1;
 int VAR_14 = 0;
 u32 VAR_15;

 FUNC_1(&VAR_10, 0x00,
        sizeof(struct fcoe_kwqe_conn_enable_disable));
 VAR_10.hdr.op_code = VAR_4;
 VAR_10.hdr.flags =
  (VAR_3 << VAR_2);

 VAR_10.src_mac_addr_lo[0] = VAR_6->src_addr[5];
 VAR_10.src_mac_addr_lo[1] = VAR_6->src_addr[4];
 VAR_10.src_mac_addr_mid[0] = VAR_6->src_addr[3];
 VAR_10.src_mac_addr_mid[1] = VAR_6->src_addr[2];
 VAR_10.src_mac_addr_hi[0] = VAR_6->src_addr[1];
 VAR_10.src_mac_addr_hi[1] = VAR_6->src_addr[0];

 VAR_10.dst_mac_addr_lo[0] = VAR_8->dest_addr[5];
 VAR_10.dst_mac_addr_lo[1] = VAR_8->dest_addr[4];
 VAR_10.dst_mac_addr_mid[0] = VAR_8->dest_addr[3];
 VAR_10.dst_mac_addr_mid[1] = VAR_8->dest_addr[2];
 VAR_10.dst_mac_addr_hi[0] = VAR_8->dest_addr[1];
 VAR_10.dst_mac_addr_hi[1] = VAR_8->dest_addr[0];

 VAR_15 = VAR_6->sid;
 VAR_10.s_id[0] = (VAR_15 & 0x000000FF);
 VAR_10.s_id[1] = (VAR_15 & 0x0000FF00) >> 8;
 VAR_10.s_id[2] = (VAR_15 & 0x00FF0000) >> 16;


 VAR_15 = VAR_12->port_id;
 VAR_10.d_id[0] = (VAR_15 & 0x000000FF);
 VAR_10.d_id[1] = (VAR_15 & 0x0000FF00) >> 8;
 VAR_10.d_id[2] = (VAR_15 & 0x00FF0000) >> 16;
 VAR_10.context_id = VAR_6->context_id;
 VAR_10.conn_id = VAR_6->fcoe_conn_id;
 VAR_10.vlan_tag = VAR_7->vlan_id <<
    VAR_1;
 VAR_10.vlan_tag |=
   3 << VAR_0;
 VAR_10.vlan_flag = VAR_7->vlan_enabled;

 VAR_11[0] = (struct kwqe *) &VAR_10;

 if (VAR_9->cnic && VAR_9->cnic->submit_kwqes)
  VAR_14 = VAR_9->cnic->submit_kwqes(VAR_9->cnic, VAR_11, VAR_13);

 return VAR_14;
}
