
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nvme_tcp_rsp_pdu {int dummy; } ;
struct nvme_tcp_queue {size_t queue_size; int cmnd_capsule_len; int rd_enabled; TYPE_3__* sock; scalar_t__ data_digest; scalar_t__ hdr_digest; int pdu; int write_space; int data_ready; int state_change; int flags; scalar_t__ pdu_offset; scalar_t__ pdu_remaining; scalar_t__ ddgst_remaining; scalar_t__ data_remaining; int * request; int io_cpu; int io_work; int lock; int send_list; struct nvme_tcp_ctrl* ctrl; } ;
struct TYPE_10__ {int ss_family; } ;
struct nvme_tcp_ctrl {TYPE_1__ addr; int src_addr; struct nvme_tcp_queue* queues; } ;
struct nvme_ctrl {int ioccsz; int device; TYPE_2__* opts; } ;
struct nvme_command {int dummy; } ;
struct linger {int l_onoff; int l_linger; } ;
typedef int sol ;
typedef int opt ;
struct TYPE_13__ {int sk_ll_usec; int sk_callback_lock; int sk_write_space; int sk_state_change; int sk_data_ready; struct nvme_tcp_queue* sk_user_data; int sk_allocation; } ;
struct TYPE_12__ {TYPE_5__* sk; } ;
struct TYPE_11__ {int tos; int mask; scalar_t__ data_digest; scalar_t__ hdr_digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
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
 int FUNC_2 (int,int ,int,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (TYPE_3__*,struct sockaddr*,int) ;
 int FUNC_6 (TYPE_3__*,struct sockaddr*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,char*,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct nvme_tcp_queue*) ;
 int VAR_16 ;
 int FUNC_13 (struct nvme_tcp_queue*) ;
 int FUNC_14 (struct nvme_tcp_queue*) ;
 int FUNC_15 (struct nvme_tcp_queue*) ;
 int FUNC_16 (struct nvme_tcp_queue*) ;
 int VAR_17 ;
 int FUNC_17 (struct nvme_tcp_queue*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (int ,int ,int ,TYPE_3__**) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (int *) ;
 struct nvme_tcp_ctrl* FUNC_23 (struct nvme_ctrl*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct nvme_ctrl *VAR_20,
  int VAR_21, size_t VAR_22)
{
 struct nvme_tcp_ctrl *VAR_23 = FUNC_23(VAR_20);
 struct nvme_tcp_queue *VAR_24 = &VAR_23->queues[VAR_21];
 struct linger VAR_25 = { .l_onoff = 1, .l_linger = 0 };
 int VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_24->ctrl = VAR_23;
 FUNC_0(&VAR_24->send_list);
 FUNC_22(&VAR_24->lock);
 FUNC_1(&VAR_24->io_work, VAR_17);
 VAR_24->queue_size = VAR_22;

 if (VAR_21 > 0)
  VAR_24->cmnd_capsule_len = VAR_20->ioccsz * 16;
 else
  VAR_24->cmnd_capsule_len = sizeof(struct nvme_command) +
      VAR_5;

 VAR_26 = FUNC_20(VAR_23->addr.ss_family, VAR_9,
   VAR_3, &VAR_24->sock);
 if (VAR_26) {
  FUNC_4(VAR_20->device,
   "failed to create socket: %d\n", VAR_26);
  return VAR_26;
 }


 VAR_27 = 1;
 VAR_26 = FUNC_7(VAR_24->sock, VAR_3, VAR_14,
   (char *)&VAR_27, sizeof(VAR_27));
 if (VAR_26) {
  FUNC_4(VAR_20->device,
   "failed to set TCP_SYNCNT sock opt %d\n", VAR_26);
  goto err_sock;
 }


 VAR_27 = 1;
 VAR_26 = FUNC_7(VAR_24->sock, VAR_3,
   VAR_13, (char *)&VAR_27, sizeof(VAR_27));
 if (VAR_26) {
  FUNC_4(VAR_20->device,
   "failed to set TCP_NODELAY sock opt %d\n", VAR_26);
  goto err_sock;
 }






 VAR_26 = FUNC_7(VAR_24->sock, VAR_11, VAR_12,
   (char *)&VAR_25, sizeof(VAR_25));
 if (VAR_26) {
  FUNC_4(VAR_20->device,
   "failed to set SO_LINGER sock opt %d\n", VAR_26);
  goto err_sock;
 }


 if (VAR_20->opts->tos >= 0) {
  VAR_27 = VAR_20->opts->tos;
  VAR_26 = FUNC_7(VAR_24->sock, VAR_10, VAR_4,
    (char *)&VAR_27, sizeof(VAR_27));
  if (VAR_26) {
   FUNC_4(VAR_20->device,
    "failed to set IP_TOS sock opt %d\n", VAR_26);
   goto err_sock;
  }
 }

 VAR_24->sock->sk->sk_allocation = VAR_1;
 if (!VAR_21)
  VAR_29 = 0;
 else
  VAR_29 = (VAR_21 - 1) % FUNC_11();
 VAR_24->io_cpu = FUNC_2(VAR_29 - 1, VAR_15, -1, 0);
 VAR_24->request = ((void*)0);
 VAR_24->data_remaining = 0;
 VAR_24->ddgst_remaining = 0;
 VAR_24->pdu_remaining = 0;
 VAR_24->pdu_offset = 0;
 FUNC_19(VAR_24->sock->sk);

 if (VAR_20->opts->mask & VAR_7) {
  VAR_26 = FUNC_5(VAR_24->sock, (struct sockaddr *)&VAR_23->src_addr,
   sizeof(VAR_23->src_addr));
  if (VAR_26) {
   FUNC_4(VAR_20->device,
    "failed to bind queue %d socket %d\n",
    VAR_21, VAR_26);
   goto err_sock;
  }
 }

 VAR_24->hdr_digest = VAR_20->opts->hdr_digest;
 VAR_24->data_digest = VAR_20->opts->data_digest;
 if (VAR_24->hdr_digest || VAR_24->data_digest) {
  VAR_26 = FUNC_12(VAR_24);
  if (VAR_26) {
   FUNC_4(VAR_20->device,
    "failed to allocate queue %d crypto\n", VAR_21);
   goto err_sock;
  }
 }

 VAR_28 = sizeof(struct nvme_tcp_rsp_pdu) +
   FUNC_14(VAR_24);
 VAR_24->pdu = FUNC_10(VAR_28, VAR_2);
 if (!VAR_24->pdu) {
  VAR_26 = -VAR_0;
  goto err_crypto;
 }

 FUNC_3(VAR_20->device, "connecting queue %d\n",
   FUNC_17(VAR_24));

 VAR_26 = FUNC_6(VAR_24->sock, (struct sockaddr *)&VAR_23->addr,
  sizeof(VAR_23->addr), 0);
 if (VAR_26) {
  FUNC_4(VAR_20->device,
   "failed to connect socket: %d\n", VAR_26);
  goto err_rcv_pdu;
 }

 VAR_26 = FUNC_15(VAR_24);
 if (VAR_26)
  goto err_init_connect;

 VAR_24->rd_enabled = 1;
 FUNC_18(VAR_6, &VAR_24->flags);
 FUNC_16(VAR_24);

 FUNC_24(&VAR_24->sock->sk->sk_callback_lock);
 VAR_24->sock->sk->sk_user_data = VAR_24;
 VAR_24->state_change = VAR_24->sock->sk->sk_state_change;
 VAR_24->data_ready = VAR_24->sock->sk->sk_data_ready;
 VAR_24->write_space = VAR_24->sock->sk->sk_write_space;
 VAR_24->sock->sk->sk_data_ready = VAR_16;
 VAR_24->sock->sk->sk_state_change = VAR_18;
 VAR_24->sock->sk->sk_write_space = VAR_19;



 FUNC_25(&VAR_24->sock->sk->sk_callback_lock);

 return 0;

err_init_connect:
 FUNC_8(VAR_24->sock, VAR_8);
err_rcv_pdu:
 FUNC_9(VAR_24->pdu);
err_crypto:
 if (VAR_24->hdr_digest || VAR_24->data_digest)
  FUNC_13(VAR_24);
err_sock:
 FUNC_21(VAR_24->sock);
 VAR_24->sock = ((void*)0);
 return VAR_26;
}
