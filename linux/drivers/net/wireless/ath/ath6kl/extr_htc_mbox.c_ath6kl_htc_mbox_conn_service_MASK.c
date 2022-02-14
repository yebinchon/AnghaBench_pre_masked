
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct htc_target {int tgt_cred_sz; struct htc_endpoint* endpoint; } ;
struct htc_service_connect_resp {scalar_t__ resp_code; int endpoint; unsigned int len_max; } ;
struct htc_service_connect_req {scalar_t__ svc_id; scalar_t__ conn_flags; int max_rxmsg_sz; int flags; int ep_cb; int max_txq_depth; } ;
struct htc_packet {int act_len; scalar_t__ buf; int * completion; } ;
struct TYPE_2__ {int svc_id; int endpoint; int cred_sz; int cred_per_msg; struct htc_endpoint* htc_ep; } ;
struct htc_endpoint {int eid; int svc_id; unsigned int len_max; int tx_drop_packet_threshold; int conn_flags; TYPE_1__ cred_dist; int ep_cb; int max_txq_depth; } ;
struct htc_conn_service_resp {scalar_t__ status; int max_msg_sz; scalar_t__ eid; int svc_id; int msg_id; } ;
struct htc_conn_service_msg {scalar_t__ svc_meta_len; void* conn_flags; void* svc_id; void* msg_id; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;

 int FUNC_1 (int ,char*,struct htc_target*,scalar_t__) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (struct htc_target*,struct htc_packet*) ;
 int FUNC_4 (struct htc_packet*,int ,int ,int ) ;
 void* FUNC_5 (scalar_t__) ;
 struct htc_packet* FUNC_6 (struct htc_target*,int) ;
 int FUNC_7 (struct htc_target*,struct htc_packet*) ;
 int FUNC_8 (struct htc_packet*) ;
 struct htc_packet* FUNC_9 (struct htc_target*) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (struct htc_conn_service_msg*,int ,int) ;
 int FUNC_12 (struct htc_target*,struct htc_packet*) ;
 int FUNC_13 (struct htc_packet*,int *,int *,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_14(struct htc_target *VAR_13,
       struct htc_service_connect_req *VAR_14,
       struct htc_service_connect_resp *VAR_15)
{
 struct htc_packet *VAR_16 = ((void*)0);
 struct htc_packet *VAR_17 = ((void*)0);
 struct htc_conn_service_resp *VAR_18;
 struct htc_conn_service_msg *VAR_19;
 struct htc_endpoint *VAR_20;
 enum htc_endpoint_id VAR_21 = VAR_2;
 unsigned int VAR_22 = 0;
 int VAR_23 = 0;
 u16 VAR_24;

 FUNC_1(VAR_0,
     "htc connect service target 0x%p service id 0x%x\n",
     VAR_13, VAR_14->svc_id);

 if (VAR_14->svc_id == VAR_5) {

  VAR_21 = VAR_1;
  VAR_22 = VAR_6;
 } else {

  VAR_17 = FUNC_6(VAR_13, 1);

  if (!VAR_17)
   return -VAR_4;

  VAR_19 = (struct htc_conn_service_msg *)VAR_17->buf;
  FUNC_11(VAR_19, 0, sizeof(*VAR_19));
  VAR_19->msg_id = FUNC_5(VAR_7);
  VAR_19->svc_id = FUNC_5(VAR_14->svc_id);
  VAR_19->conn_flags = FUNC_5(VAR_14->conn_flags);

  FUNC_13(VAR_17, ((void*)0), (u8 *) VAR_19,
     sizeof(*VAR_19) + VAR_19->svc_meta_len,
     VAR_1, VAR_10);


  VAR_17->completion = ((void*)0);
  FUNC_4(VAR_17, 0, 0, 0);
  VAR_23 = FUNC_3(VAR_13, VAR_17);

  if (VAR_23)
   goto fail_tx;


  VAR_16 = FUNC_9(VAR_13);

  if (!VAR_16) {
   VAR_23 = -VAR_4;
   goto fail_tx;
  }

  VAR_18 = (struct htc_conn_service_resp *)VAR_16->buf;
  VAR_24 = FUNC_10(VAR_18->msg_id);

  if ((VAR_24 != VAR_8) ||
      (VAR_16->act_len < sizeof(*VAR_18))) {
   VAR_23 = -VAR_4;
   goto fail_tx;
  }

  VAR_15->resp_code = VAR_18->status;

  if (VAR_18->status != VAR_9) {
   FUNC_2("target failed service 0x%X connect request (status:%d)\n",
       VAR_18->svc_id, VAR_18->status);
   VAR_23 = -VAR_4;
   goto fail_tx;
  }

  VAR_21 = (enum htc_endpoint_id)VAR_18->eid;
  VAR_22 = FUNC_10(VAR_18->max_msg_sz);
 }

 if (FUNC_0(VAR_21 == VAR_3 ||
    VAR_21 >= VAR_2 || !VAR_22)) {
  VAR_23 = -VAR_4;
  goto fail_tx;
 }

 VAR_20 = &VAR_13->endpoint[VAR_21];
 VAR_20->eid = VAR_21;
 if (VAR_20->svc_id) {
  VAR_23 = -VAR_4;
  goto fail_tx;
 }


 VAR_15->endpoint = VAR_21;
 VAR_15->len_max = VAR_22;




 VAR_20->svc_id = VAR_14->svc_id;

 VAR_20->max_txq_depth = VAR_14->max_txq_depth;
 VAR_20->len_max = VAR_22;
 VAR_20->ep_cb = VAR_14->ep_cb;
 VAR_20->cred_dist.svc_id = VAR_14->svc_id;
 VAR_20->cred_dist.htc_ep = VAR_20;
 VAR_20->cred_dist.endpoint = VAR_21;
 VAR_20->cred_dist.cred_sz = VAR_13->tgt_cred_sz;

 switch (VAR_20->svc_id) {
 case 128:
  VAR_20->tx_drop_packet_threshold = VAR_11 / 3;
  break;
 default:
  VAR_20->tx_drop_packet_threshold = VAR_12;
  break;
 }

 if (VAR_14->max_rxmsg_sz) {





  if (VAR_14->max_rxmsg_sz > VAR_22) {
   VAR_23 = -VAR_4;
   goto fail_tx;
  }
  VAR_20->cred_dist.cred_per_msg =
      VAR_14->max_rxmsg_sz / VAR_13->tgt_cred_sz;
 } else
  VAR_20->cred_dist.cred_per_msg =
      VAR_22 / VAR_13->tgt_cred_sz;

 if (!VAR_20->cred_dist.cred_per_msg)
  VAR_20->cred_dist.cred_per_msg = 1;


 VAR_20->conn_flags = VAR_14->flags;

fail_tx:
 if (VAR_17)
  FUNC_7(VAR_13, VAR_17);

 if (VAR_16) {
  FUNC_8(VAR_16);
  FUNC_12(VAR_13, VAR_16);
 }

 return VAR_23;
}
