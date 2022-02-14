
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u64 ;
struct sk_buff {void* protocol; scalar_t__ data; } ;
struct TYPE_11__ {int vlan_disc_reqs; } ;
struct fnic_stats {TYPE_10__ vlan_stats; } ;
struct fcoe_ctlr {int (* send ) (struct fcoe_ctlr*,struct sk_buff*) ;TYPE_7__* lp; int ctl_src_addr; } ;
struct fnic {int fip_timer; TYPE_1__* lport; int (* set_vlan ) (struct fnic*,int ) ;struct fnic_stats fnic_stats; struct fcoe_ctlr ctlr; } ;
struct TYPE_17__ {int fip_dlen; int fip_dtype; } ;
struct TYPE_19__ {int fd_wwn; TYPE_6__ fd_desc; } ;
struct TYPE_15__ {int fip_dlen; int fip_dtype; } ;
struct TYPE_16__ {int fd_mac; TYPE_4__ fd_desc; } ;
struct TYPE_20__ {TYPE_8__ wwnn; TYPE_5__ mac; } ;
struct TYPE_14__ {void* fip_dl_len; int fip_subcode; void* fip_op; int fip_ver; } ;
struct TYPE_13__ {void* h_proto; int * h_dest; int * h_source; } ;
struct fip_vlan {TYPE_9__ desc; TYPE_3__ fip; TYPE_2__ eth; } ;
struct TYPE_18__ {int wwnn; } ;
struct TYPE_12__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 struct sk_buff* FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (struct fnic*) ;
 void* FUNC_5 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct fip_vlan*,int ,int) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct fnic*,int ) ;
 int FUNC_17 (struct fcoe_ctlr*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_18(struct fnic *VAR_12)
{
 struct fcoe_ctlr *VAR_13 = &VAR_12->ctlr;
 struct fnic_stats *VAR_14 = &VAR_12->fnic_stats;
 struct sk_buff *VAR_15;
 char *VAR_16;
 int VAR_17;
 struct fip_vlan *VAR_18;
 u64 VAR_19;

 FUNC_4(VAR_12);
 VAR_12->set_vlan(VAR_12, 0);

 if (FUNC_10())
  FUNC_1(VAR_9, VAR_12->lport->host,
     "Sending VLAN request...\n");

 VAR_15 = FUNC_3(sizeof(struct fip_vlan));
 if (!VAR_15)
  return;

 VAR_17 = sizeof(*VAR_18);
 VAR_16 = (char *)VAR_15->data;
 VAR_18 = (struct fip_vlan *)VAR_16;

 FUNC_7(VAR_18, 0, sizeof(*VAR_18));
 FUNC_6(VAR_18->eth.h_source, VAR_13->ctl_src_addr, VAR_0);
 FUNC_6(VAR_18->eth.h_dest, VAR_10, VAR_0);
 VAR_18->eth.h_proto = FUNC_5(VAR_1);

 VAR_18->fip.fip_ver = FUNC_0(VAR_8);
 VAR_18->fip.fip_op = FUNC_5(VAR_6);
 VAR_18->fip.fip_subcode = VAR_7;
 VAR_18->fip.fip_dl_len = FUNC_5(sizeof(VAR_18->desc) / VAR_3);

 VAR_18->desc.mac.fd_desc.fip_dtype = VAR_4;
 VAR_18->desc.mac.fd_desc.fip_dlen = sizeof(VAR_18->desc.mac) / VAR_3;
 FUNC_6(&VAR_18->desc.mac.fd_mac, VAR_13->ctl_src_addr, VAR_0);

 VAR_18->desc.wwnn.fd_desc.fip_dtype = VAR_5;
 VAR_18->desc.wwnn.fd_desc.fip_dlen = sizeof(VAR_18->desc.wwnn) / VAR_3;
 FUNC_11(VAR_13->lp->wwnn, &VAR_18->desc.wwnn.fd_wwn);
 FUNC_2(&VAR_14->vlan_stats.vlan_disc_reqs);

 FUNC_13(VAR_15, sizeof(*VAR_18));
 VAR_15->protocol = FUNC_5(VAR_1);
 FUNC_14(VAR_15);
 FUNC_15(VAR_15);
 VAR_13->send(VAR_13, VAR_15);


 VAR_19 = VAR_11 + FUNC_9(VAR_2);
 FUNC_8(&VAR_12->fip_timer, FUNC_12(VAR_19));
}
