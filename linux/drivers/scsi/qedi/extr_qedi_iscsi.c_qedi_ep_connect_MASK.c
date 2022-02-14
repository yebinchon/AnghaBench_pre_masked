
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
typedef int u16 ;
struct sockaddr_in6 {int sin6_port; int * sin6_addr; } ;
struct TYPE_4__ {int * s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {int v6_addr; int v4_addr; } ;
struct qedi_endpoint {size_t iscsi_cid; scalar_t__ ip_type; size_t handle; int ip_addr_len; int * dst_addr; TYPE_2__ dst; int pmtu; int state; int tcp_ofld_wait; int ofld_wait; int p_doorbell; int fw_cid; void* dst_port; struct qedi_ctx* qedi; } ;
struct qedi_ctx {int dbg_ctx; int cdev; struct qedi_endpoint** ep_tbl; int num_offloads; int ll2_mtu; int link_state; int flags; } ;
struct iscsi_path {size_t iscsi_cid; scalar_t__ ip_type; size_t handle; int ip_addr_len; int * dst_addr; TYPE_2__ dst; int pmtu; int state; int tcp_ofld_wait; int ofld_wait; int p_doorbell; int fw_cid; void* dst_port; struct qedi_ctx* qedi; } ;
struct iscsi_endpoint {struct qedi_endpoint* dd_data; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int path_req ;
struct TYPE_6__ {int (* acquire_conn ) (int ,size_t*,int *,int *) ;int (* release_conn ) (int ,size_t) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iscsi_endpoint* FUNC_0 (int) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,char*,int *,void*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct iscsi_endpoint* FUNC_7 (int) ;
 int FUNC_8 (struct iscsi_endpoint*) ;
 struct qedi_ctx* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*,int *,size_t,char*,int) ;
 int FUNC_11 (int *,int **,int) ;
 int FUNC_12 (struct qedi_endpoint*,int ,int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (struct qedi_ctx*,struct qedi_endpoint*) ;
 scalar_t__ VAR_15 ;
 int FUNC_15 (struct qedi_ctx*,struct qedi_endpoint*) ;
 int VAR_16 ;
 TYPE_3__* VAR_17 ;
 int FUNC_16 (int ,size_t*,int *,int *) ;
 int FUNC_17 (int ,size_t) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static struct iscsi_endpoint *
FUNC_19(struct Scsi_Host *VAR_18, struct sockaddr *VAR_19,
  int VAR_20)
{
 struct qedi_ctx *VAR_21;
 struct iscsi_endpoint *VAR_22;
 struct qedi_endpoint *VAR_23;
 struct sockaddr_in *VAR_24;
 struct sockaddr_in6 *VAR_25;
 struct iscsi_path VAR_26;
 u32 VAR_27 = VAR_6;
 u32 VAR_28 = VAR_8;
 u16 VAR_29 = 0;
 char *VAR_30 = ((void*)0);
 int VAR_31, VAR_32;

 if (!VAR_18) {
  VAR_31 = -VAR_3;
  FUNC_1(((void*)0), "shost is NULL\n");
  return FUNC_0(VAR_31);
 }

 if (VAR_15) {
  VAR_31 = -VAR_2;
  return FUNC_0(VAR_31);
 }

 VAR_21 = FUNC_9(VAR_18);

 if (FUNC_18(VAR_9, &VAR_21->flags) ||
     FUNC_18(VAR_10, &VAR_21->flags)) {
  VAR_31 = -VAR_2;
  return FUNC_0(VAR_31);
 }

 VAR_22 = FUNC_7(sizeof(struct qedi_endpoint));
 if (!VAR_22) {
  FUNC_1(&VAR_21->dbg_ctx, "endpoint create fail\n");
  VAR_31 = -VAR_2;
  return FUNC_0(VAR_31);
 }
 VAR_23 = VAR_22->dd_data;
 FUNC_12(VAR_23, 0, sizeof(struct qedi_endpoint));
 VAR_23->state = VAR_4;
 VAR_23->iscsi_cid = (u32)-1;
 VAR_23->qedi = VAR_21;

 if (VAR_19->sa_family == VAR_0) {
  VAR_24 = (struct sockaddr_in *)VAR_19;
  FUNC_11(VAR_23->dst_addr, &VAR_24->sin_addr.s_addr,
         sizeof(struct in_addr));
  VAR_23->dst_port = FUNC_13(VAR_24->sin_port);
  VAR_23->ip_type = VAR_13;
  FUNC_2(&VAR_21->dbg_ctx, VAR_12,
     "dst_addr=%pI4, dst_port=%u\n",
     VAR_23->dst_addr, VAR_23->dst_port);
 } else if (VAR_19->sa_family == VAR_1) {
  VAR_25 = (struct sockaddr_in6 *)VAR_19;
  FUNC_11(VAR_23->dst_addr, &VAR_25->sin6_addr,
         sizeof(struct in6_addr));
  VAR_23->dst_port = FUNC_13(VAR_25->sin6_port);
  VAR_23->ip_type = VAR_14;
  FUNC_2(&VAR_21->dbg_ctx, VAR_12,
     "dst_addr=%pI6, dst_port=%u\n",
     VAR_23->dst_addr, VAR_23->dst_port);
 } else {
  FUNC_1(&VAR_21->dbg_ctx, "Invalid endpoint\n");
 }

 if (FUNC_5(&VAR_21->link_state) != VAR_11) {
  FUNC_3(&VAR_21->dbg_ctx, "qedi link down\n");
  VAR_31 = -VAR_3;
  goto ep_conn_exit;
 }

 VAR_31 = FUNC_14(VAR_21, VAR_23);
 if (VAR_31)
  goto ep_conn_exit;

 VAR_31 = VAR_17->acquire_conn(VAR_21->cdev, &VAR_23->handle,
         &VAR_23->fw_cid, &VAR_23->p_doorbell);

 if (VAR_31) {
  FUNC_1(&VAR_21->dbg_ctx, "Could not acquire connection\n");
  VAR_31 = -VAR_3;
  goto ep_free_sq;
 }

 VAR_28 = VAR_23->handle;
 VAR_23->iscsi_cid = VAR_28;

 FUNC_6(&VAR_23->ofld_wait);
 FUNC_6(&VAR_23->tcp_ofld_wait);
 VAR_23->state = VAR_5;
 VAR_21->ep_tbl[VAR_28] = VAR_23;

 VAR_30 = (char *)&VAR_26;
 VAR_29 = sizeof(VAR_26);
 FUNC_12(&VAR_26, 0, VAR_29);

 VAR_27 = VAR_7;
 VAR_26.handle = (u64)VAR_23->iscsi_cid;
 VAR_26.pmtu = VAR_21->ll2_mtu;
 VAR_23->pmtu = VAR_21->ll2_mtu;
 if (VAR_23->ip_type == VAR_13) {
  FUNC_11(&VAR_26.dst.v4_addr, &VAR_23->dst_addr,
         sizeof(struct in_addr));
  VAR_26.ip_addr_len = 4;
 } else {
  FUNC_11(&VAR_26.dst.v6_addr, &VAR_23->dst_addr,
         sizeof(struct in6_addr));
  VAR_26.ip_addr_len = 16;
 }

 VAR_31 = FUNC_10(VAR_18, &VAR_16, VAR_27, VAR_30,
     VAR_29);
 if (VAR_31) {
  FUNC_1(&VAR_21->dbg_ctx,
    "iscsi_offload_mesg() failed for cid=0x%x ret=%d\n",
    VAR_28, VAR_31);
  goto ep_rel_conn;
 }

 FUNC_4(&VAR_21->num_offloads);
 return VAR_22;

ep_rel_conn:
 VAR_21->ep_tbl[VAR_28] = ((void*)0);
 VAR_32 = VAR_17->release_conn(VAR_21->cdev, VAR_23->handle);
 if (VAR_32)
  FUNC_3(&VAR_21->dbg_ctx, "release_conn returned %d\n",
     VAR_32);
ep_free_sq:
 FUNC_15(VAR_21, VAR_23);
ep_conn_exit:
 FUNC_8(VAR_22);
 return FUNC_0(VAR_31);
}
