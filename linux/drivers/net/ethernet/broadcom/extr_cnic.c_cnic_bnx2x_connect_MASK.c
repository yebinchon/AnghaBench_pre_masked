
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef size_t u32 ;
struct TYPE_4__ {int ip_addr_lo_lo; int ip_addr_lo_hi; int ip_addr_hi_lo; int ip_addr_hi_hi; } ;
struct TYPE_3__ {int ip_addr_lo_lo; int ip_addr_lo_hi; int ip_addr_hi_lo; int ip_addr_hi_hi; } ;
struct l5cm_conn_addr_params {int pmtu; int remote_tcp_port; int local_tcp_port; TYPE_2__ remote_ip_addr; TYPE_1__ local_ip_addr; int params; int remote_addr_5; int remote_addr_4; int remote_addr_3; int remote_addr_2; int remote_addr_1; int remote_addr_0; } ;
struct l5cm_active_conn_buffer {struct l5cm_conn_addr_params conn_addr_buf; } ;
struct l4_kwq_connect_req3 {int pmtu; } ;
struct l4_kwq_connect_req2 {int dst_ip_v6_2; int dst_ip_v6_3; int dst_ip_v6_4; int src_ip_v6_2; int src_ip_v6_3; int src_ip_v6_4; } ;
struct l4_kwq_connect_req1 {size_t pg_cid; int conn_flags; int cid; int dst_port; int src_port; int dst_ip; int src_ip; } ;
struct kwqe {int dummy; } ;
struct cnic_sock {int vlan_id; int * ha; } ;
struct cnic_local {struct cnic_context* ctx_tbl; struct cnic_sock* csk_tbl; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_context {int ctx_flags; } ;
struct bnx2x {int pfid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 struct l5cm_active_conn_buffer* FUNC_2 (struct cnic_local*,size_t,union l5cm_specific_data*) ;
 int FUNC_3 (struct cnic_dev*,struct l4_kwq_connect_req1*,struct l4_kwq_connect_req3*,struct l5cm_active_conn_buffer*) ;
 int FUNC_4 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_5 (struct l5cm_active_conn_buffer*,int ,int) ;
 int FUNC_6 (int ,char*) ;
 struct bnx2x* FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct cnic_dev *VAR_9, struct kwqe *VAR_10[],
         u32 VAR_11, int *VAR_12)
{
 struct cnic_local *VAR_13 = VAR_9->cnic_priv;
 struct bnx2x *VAR_14 = FUNC_7(VAR_9->netdev);
 struct l4_kwq_connect_req1 *VAR_15 =
  (struct l4_kwq_connect_req1 *) VAR_10[0];
 struct l4_kwq_connect_req3 *VAR_16;
 struct l5cm_active_conn_buffer *VAR_17;
 struct l5cm_conn_addr_params *VAR_18;
 union l5cm_specific_data VAR_19;
 u32 VAR_20 = VAR_15->pg_cid;
 struct cnic_sock *VAR_21 = &VAR_13->csk_tbl[VAR_20];
 struct cnic_context *VAR_22 = &VAR_13->ctx_tbl[VAR_20];
 int VAR_23;

 if (VAR_11 < 2) {
  *VAR_12 = VAR_11;
  return -VAR_3;
 }

 if (VAR_15->conn_flags & VAR_6)
  *VAR_12 = 3;
 else
  *VAR_12 = 2;

 if (VAR_11 < *VAR_12) {
  *VAR_12 = VAR_11;
  return -VAR_3;
 }

 if (sizeof(*VAR_17) > VAR_1) {
  FUNC_6(VAR_9->netdev, "conn_buf size too big\n");
  return -VAR_4;
 }
 VAR_17 = FUNC_2(VAR_13, VAR_20, &VAR_19);
 if (!VAR_17)
  return -VAR_4;

 FUNC_5(VAR_17, 0, sizeof(*VAR_17));

 VAR_18 = &VAR_17->conn_addr_buf;
 VAR_18->remote_addr_0 = VAR_21->ha[0];
 VAR_18->remote_addr_1 = VAR_21->ha[1];
 VAR_18->remote_addr_2 = VAR_21->ha[2];
 VAR_18->remote_addr_3 = VAR_21->ha[3];
 VAR_18->remote_addr_4 = VAR_21->ha[4];
 VAR_18->remote_addr_5 = VAR_21->ha[5];

 if (VAR_15->conn_flags & VAR_6) {
  struct l4_kwq_connect_req2 *VAR_24 =
   (struct l4_kwq_connect_req2 *) VAR_10[1];

  VAR_18->local_ip_addr.ip_addr_hi_hi = VAR_24->src_ip_v6_4;
  VAR_18->local_ip_addr.ip_addr_hi_lo = VAR_24->src_ip_v6_3;
  VAR_18->local_ip_addr.ip_addr_lo_hi = VAR_24->src_ip_v6_2;

  VAR_18->remote_ip_addr.ip_addr_hi_hi = VAR_24->dst_ip_v6_4;
  VAR_18->remote_ip_addr.ip_addr_hi_lo = VAR_24->dst_ip_v6_3;
  VAR_18->remote_ip_addr.ip_addr_lo_hi = VAR_24->dst_ip_v6_2;
  VAR_18->params |= VAR_7;
 }
 VAR_16 = (struct l4_kwq_connect_req3 *) VAR_10[*VAR_12 - 1];

 VAR_18->local_ip_addr.ip_addr_lo_lo = VAR_15->src_ip;
 VAR_18->remote_ip_addr.ip_addr_lo_lo = VAR_15->dst_ip;
 VAR_18->local_tcp_port = VAR_15->src_port;
 VAR_18->remote_tcp_port = VAR_15->dst_port;

 VAR_18->pmtu = VAR_16->pmtu;
 FUNC_3(VAR_9, VAR_15, VAR_16, VAR_17);

 FUNC_0(VAR_9, VAR_0 +
    FUNC_1(VAR_14->pfid), VAR_21->vlan_id);

 VAR_23 = FUNC_4(VAR_9, VAR_8,
   VAR_15->cid, VAR_5, &VAR_19);
 if (!VAR_23)
  FUNC_8(VAR_2, &VAR_22->ctx_flags);

 return VAR_23;
}
