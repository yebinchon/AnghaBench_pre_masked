
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int done; } ;
struct smbd_request {int num_sge; int has_payload; TYPE_4__* sge; TYPE_2__ cqe; struct smbd_connection* info; } ;
struct smbd_negotiate_req {void* max_fragmented_size; void* max_receive_size; void* preferred_send_size; void* credits_requested; scalar_t__ reserved; void* max_version; void* min_version; } ;
struct smbd_connection {int request_mempool; TYPE_3__* id; int send_pending; TYPE_1__* pd; int max_fragmented_recv_size; int max_receive_size; int max_send_size; int send_credit_target; } ;
struct ib_send_wr {int num_sge; int send_flags; int opcode; TYPE_4__* sg_list; TYPE_2__* wr_cqe; int * next; } ;
struct TYPE_8__ {int length; int addr; int lkey; } ;
struct TYPE_7__ {int device; int qp; } ;
struct TYPE_5__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int ,struct ib_send_wr*,int *) ;
 int FUNC_9 (int ,char*,int,...) ;
 struct smbd_request* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct smbd_request*,int ) ;
 int VAR_9 ;
 int FUNC_12 (struct smbd_connection*) ;
 struct smbd_negotiate_req* FUNC_13 (struct smbd_request*) ;

__attribute__((used)) static int FUNC_14(struct smbd_connection *VAR_10)
{
 struct ib_send_wr VAR_11;
 int VAR_12 = -VAR_2;
 struct smbd_request *VAR_13;
 struct smbd_negotiate_req *VAR_14;

 VAR_13 = FUNC_10(VAR_10->request_mempool, VAR_4);
 if (!VAR_13)
  return VAR_12;

 VAR_13->info = VAR_10;

 VAR_14 = FUNC_13(VAR_13);
 VAR_14->min_version = FUNC_2(VAR_8);
 VAR_14->max_version = FUNC_2(VAR_8);
 VAR_14->reserved = 0;
 VAR_14->credits_requested = FUNC_2(VAR_10->send_credit_target);
 VAR_14->preferred_send_size = FUNC_3(VAR_10->max_send_size);
 VAR_14->max_receive_size = FUNC_3(VAR_10->max_receive_size);
 VAR_14->max_fragmented_size =
  FUNC_3(VAR_10->max_fragmented_recv_size);

 VAR_13->num_sge = 1;
 VAR_13->sge[0].addr = FUNC_4(
    VAR_10->id->device, (void *)VAR_14,
    sizeof(*VAR_14), VAR_0);
 if (FUNC_5(VAR_10->id->device, VAR_13->sge[0].addr)) {
  VAR_12 = -VAR_1;
  goto dma_mapping_failed;
 }

 VAR_13->sge[0].length = sizeof(*VAR_14);
 VAR_13->sge[0].lkey = VAR_10->pd->local_dma_lkey;

 FUNC_6(
  VAR_10->id->device, VAR_13->sge[0].addr,
  VAR_13->sge[0].length, VAR_0);

 VAR_13->cqe.done = VAR_9;

 VAR_11.next = ((void*)0);
 VAR_11.wr_cqe = &VAR_13->cqe;
 VAR_11.sg_list = VAR_13->sge;
 VAR_11.num_sge = VAR_13->num_sge;
 VAR_11.opcode = VAR_6;
 VAR_11.send_flags = VAR_5;

 FUNC_9(VAR_7, "sge addr=%llx length=%x lkey=%x\n",
  VAR_13->sge[0].addr,
  VAR_13->sge[0].length, VAR_13->sge[0].lkey);

 VAR_13->has_payload = 0;
 FUNC_1(&VAR_10->send_pending);
 VAR_12 = FUNC_8(VAR_10->id->qp, &VAR_11, ((void*)0));
 if (!VAR_12)
  return 0;


 FUNC_9(VAR_3, "ib_post_send failed rc=%d\n", VAR_12);
 FUNC_0(&VAR_10->send_pending);
 FUNC_7(VAR_10->id->device, VAR_13->sge[0].addr,
  VAR_13->sge[0].length, VAR_0);

 FUNC_12(VAR_10);

dma_mapping_failed:
 FUNC_11(VAR_13, VAR_10->request_mempool);
 return VAR_12;
}
