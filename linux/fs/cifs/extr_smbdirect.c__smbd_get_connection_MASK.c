
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct smbd_connection {scalar_t__ transport_status; int keep_alive_interval; int responder_resources; TYPE_5__* id; int pd; int * recv_cq; int * send_cq; int conn_wait; int idle_timer_work; int lock_new_credits_offered; scalar_t__ new_credits_offered; int post_send_credits_work; int recv_done_work; int disconnect_work; int send_payload_pending; int wait_send_payload_pending; int send_pending; int wait_send_pending; int workqueue; int send_immediate_work; int wait_send_queue; int wait_reassembly_queue; int disconn_wait; int receive_credit_max; int send_credit_target; int max_receive_size; int max_fragmented_recv_size; int max_send_size; } ;
struct TYPE_11__ {scalar_t__ max_inline_data; void* max_recv_sge; void* max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct rdma_conn_param {int responder_resources; int* private_data; int private_data_len; scalar_t__ flow_control; int rnr_retry_count; int retry_count; scalar_t__ initiator_depth; int port_num; int * recv_cq; int * send_cq; int qp_type; int sq_sig_type; TYPE_1__ cap; struct smbd_connection* qp_context; int event_handler; } ;
struct ib_qp_init_attr {int responder_resources; int* private_data; int private_data_len; scalar_t__ flow_control; int rnr_retry_count; int retry_count; scalar_t__ initiator_depth; int port_num; int * recv_cq; int * send_cq; int qp_type; int sq_sig_type; TYPE_1__ cap; struct smbd_connection* qp_context; int event_handler; } ;
struct ib_port_immutable {int core_cap_flags; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int qp_attr ;
typedef int ird_ord_hdr ;
typedef int conn_param ;
struct TYPE_15__ {int port_num; TYPE_4__* device; } ;
struct TYPE_12__ {int (* get_port_immutable ) (TYPE_4__*,int ,struct ib_port_immutable*) ;} ;
struct TYPE_13__ {void* max_send_sge; void* max_recv_sge; scalar_t__ max_qp_rd_atom; int max_qp_wr; int max_cqe; } ;
struct TYPE_14__ {TYPE_2__ ops; TYPE_3__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (struct smbd_connection*) ;
 int FUNC_4 (struct smbd_connection*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct smbd_connection*) ;
 void* FUNC_8 (TYPE_4__*,struct smbd_connection*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int VAR_16 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct smbd_connection*) ;
 struct smbd_connection* FUNC_13 (int,int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct rdma_conn_param*,int ,int) ;
 int FUNC_17 (int ,int *,int) ;
 int FUNC_18 (TYPE_5__*,struct rdma_conn_param*) ;
 int FUNC_19 (TYPE_5__*,int ,struct rdma_conn_param*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (TYPE_5__*) ;
 int VAR_17 ;
 int FUNC_23 (struct TCP_Server_Info*) ;
 int VAR_18 ;
 int FUNC_24 (struct smbd_connection*,struct sockaddr*,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_25 (struct smbd_connection*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (TYPE_4__*,int ,struct ib_port_immutable*) ;
 int FUNC_28 (int ,int) ;
 int FUNC_29 (int ,int) ;

__attribute__((used)) static struct smbd_connection *FUNC_30(
 struct TCP_Server_Info *VAR_28, struct sockaddr *VAR_29, int VAR_30)
{
 int VAR_31;
 struct smbd_connection *VAR_32;
 struct rdma_conn_param VAR_33;
 struct ib_qp_init_attr VAR_34;
 struct sockaddr_in *VAR_35 = (struct sockaddr_in *) VAR_29;
 struct ib_port_immutable VAR_36;
 u32 VAR_37[2];

 VAR_32 = FUNC_13(sizeof(struct smbd_connection), VAR_1);
 if (!VAR_32)
  return ((void*)0);

 VAR_32->transport_status = VAR_13;
 VAR_31 = FUNC_24(VAR_32, VAR_29, VAR_30);
 if (VAR_31) {
  FUNC_14(VAR_6, "smbd_ia_open rc=%d\n", VAR_31);
  goto create_id_failed;
 }

 if (VAR_27 > VAR_32->id->device->attrs.max_cqe ||
     VAR_27 > VAR_32->id->device->attrs.max_qp_wr) {
  FUNC_14(VAR_0,
   "consider lowering send_credit_target = %d. "
   "Possible CQE overrun, device "
   "reporting max_cpe %d max_qp_wr %d\n",
   VAR_27,
   VAR_32->id->device->attrs.max_cqe,
   VAR_32->id->device->attrs.max_qp_wr);
  goto config_failed;
 }

 if (VAR_25 > VAR_32->id->device->attrs.max_cqe ||
     VAR_25 > VAR_32->id->device->attrs.max_qp_wr) {
  FUNC_14(VAR_0,
   "consider lowering receive_credit_max = %d. "
   "Possible CQE overrun, device "
   "reporting max_cpe %d max_qp_wr %d\n",
   VAR_25,
   VAR_32->id->device->attrs.max_cqe,
   VAR_32->id->device->attrs.max_qp_wr);
  goto config_failed;
 }

 VAR_32->receive_credit_max = VAR_25;
 VAR_32->send_credit_target = VAR_27;
 VAR_32->max_send_size = VAR_22;
 VAR_32->max_fragmented_recv_size = VAR_20;
 VAR_32->max_receive_size = VAR_21;
 VAR_32->keep_alive_interval = VAR_19;

 if (VAR_32->id->device->attrs.max_send_sge < VAR_8) {
  FUNC_14(VAR_0,
   "warning: device max_send_sge = %d too small\n",
   VAR_32->id->device->attrs.max_send_sge);
  FUNC_14(VAR_0, "Queue Pair creation may fail\n");
 }
 if (VAR_32->id->device->attrs.max_recv_sge < VAR_8) {
  FUNC_14(VAR_0,
   "warning: device max_recv_sge = %d too small\n",
   VAR_32->id->device->attrs.max_recv_sge);
  FUNC_14(VAR_0, "Queue Pair creation may fail\n");
 }

 VAR_32->send_cq = ((void*)0);
 VAR_32->recv_cq = ((void*)0);
 VAR_32->send_cq =
  FUNC_8(VAR_32->id->device, VAR_32,
    VAR_32->send_credit_target, VAR_3);
 if (FUNC_2(VAR_32->send_cq)) {
  VAR_32->send_cq = ((void*)0);
  goto alloc_cq_failed;
 }

 VAR_32->recv_cq =
  FUNC_8(VAR_32->id->device, VAR_32,
    VAR_32->receive_credit_max, VAR_3);
 if (FUNC_2(VAR_32->recv_cq)) {
  VAR_32->recv_cq = ((void*)0);
  goto alloc_cq_failed;
 }

 FUNC_16(&VAR_34, 0, sizeof(VAR_34));
 VAR_34.event_handler = VAR_24;
 VAR_34.qp_context = VAR_32;
 VAR_34.cap.max_send_wr = VAR_32->send_credit_target;
 VAR_34.cap.max_recv_wr = VAR_32->receive_credit_max;
 VAR_34.cap.max_send_sge = VAR_8;
 VAR_34.cap.max_recv_sge = VAR_8;
 VAR_34.cap.max_inline_data = 0;
 VAR_34.sq_sig_type = VAR_5;
 VAR_34.qp_type = VAR_4;
 VAR_34.send_cq = VAR_32->send_cq;
 VAR_34.recv_cq = VAR_32->recv_cq;
 VAR_34.port_num = ~0;

 VAR_31 = FUNC_19(VAR_32->id, VAR_32->pd, &VAR_34);
 if (VAR_31) {
  FUNC_14(VAR_0, "rdma_create_qp failed %i\n", VAR_31);
  goto create_qp_failed;
 }

 FUNC_16(&VAR_33, 0, sizeof(VAR_33));
 VAR_33.initiator_depth = 0;

 VAR_33.responder_resources =
  VAR_32->id->device->attrs.max_qp_rd_atom
   < VAR_9 ?
  VAR_32->id->device->attrs.max_qp_rd_atom :
  VAR_9;
 VAR_32->responder_resources = VAR_33.responder_resources;
 FUNC_15(VAR_6, "responder_resources=%d\n",
  VAR_32->responder_resources);


 VAR_32->id->device->ops.get_port_immutable(
  VAR_32->id->device, VAR_32->id->port_num, &VAR_36);
 if (VAR_36.core_cap_flags & VAR_7) {
  VAR_37[0] = VAR_32->responder_resources;
  VAR_37[1] = 1;
  VAR_33.private_data = VAR_37;
  VAR_33.private_data_len = sizeof(VAR_37);
 } else {
  VAR_33.private_data = ((void*)0);
  VAR_33.private_data_len = 0;
 }

 VAR_33.retry_count = VAR_10;
 VAR_33.rnr_retry_count = VAR_11;
 VAR_33.flow_control = 0;

 FUNC_14(VAR_6, "connecting to IP %pI4 port %d\n",
  &VAR_35->sin_addr, VAR_30);

 FUNC_11(&VAR_32->conn_wait);
 FUNC_11(&VAR_32->disconn_wait);
 FUNC_11(&VAR_32->wait_reassembly_queue);
 VAR_31 = FUNC_18(VAR_32->id, &VAR_33);
 if (VAR_31) {
  FUNC_14(VAR_0, "rdma_connect() failed with %i\n", VAR_31);
  goto rdma_connect_failed;
 }

 FUNC_29(
  VAR_32->conn_wait, VAR_32->transport_status != VAR_13);

 if (VAR_32->transport_status != VAR_12) {
  FUNC_14(VAR_0, "rdma_connect failed port=%d\n", VAR_30);
  goto rdma_connect_failed;
 }

 FUNC_14(VAR_6, "rdma_connect connected\n");

 VAR_31 = FUNC_3(VAR_32);
 if (VAR_31) {
  FUNC_14(VAR_0, "cache allocation failed\n");
  goto allocate_cache_failed;
 }

 FUNC_11(&VAR_32->wait_send_queue);
 FUNC_0(&VAR_32->idle_timer_work, VAR_16);
 FUNC_0(&VAR_32->send_immediate_work, VAR_17);
 FUNC_17(VAR_32->workqueue, &VAR_32->idle_timer_work,
  VAR_32->keep_alive_interval*VAR_2);

 FUNC_11(&VAR_32->wait_send_pending);
 FUNC_5(&VAR_32->send_pending, 0);

 FUNC_11(&VAR_32->wait_send_payload_pending);
 FUNC_5(&VAR_32->send_payload_pending, 0);

 FUNC_1(&VAR_32->disconnect_work, VAR_18);
 FUNC_1(&VAR_32->recv_done_work, VAR_26);
 FUNC_1(&VAR_32->post_send_credits_work, VAR_23);
 VAR_32->new_credits_offered = 0;
 FUNC_26(&VAR_32->lock_new_credits_offered);

 VAR_31 = FUNC_25(VAR_32);
 if (VAR_31) {
  FUNC_14(VAR_0, "smbd_negotiate rc=%d\n", VAR_31);
  goto negotiation_failed;
 }

 VAR_31 = FUNC_4(VAR_32);
 if (VAR_31) {
  FUNC_15(VAR_0, "memory registration allocation failed\n");
  goto allocate_mr_failed;
 }

 return VAR_32;

allocate_mr_failed:

 FUNC_23(VAR_28);
 return ((void*)0);

negotiation_failed:
 FUNC_6(&VAR_32->idle_timer_work);
 FUNC_7(VAR_32);
 VAR_32->transport_status = VAR_15;
 FUNC_11(&VAR_32->conn_wait);
 FUNC_22(VAR_32->id);
 FUNC_28(VAR_32->conn_wait,
  VAR_32->transport_status == VAR_14);

allocate_cache_failed:
rdma_connect_failed:
 FUNC_21(VAR_32->id);

create_qp_failed:
alloc_cq_failed:
 if (VAR_32->send_cq)
  FUNC_10(VAR_32->send_cq);
 if (VAR_32->recv_cq)
  FUNC_10(VAR_32->recv_cq);

config_failed:
 FUNC_9(VAR_32->pd);
 FUNC_20(VAR_32->id);

create_id_failed:
 FUNC_12(VAR_32);
 return ((void*)0);
}
