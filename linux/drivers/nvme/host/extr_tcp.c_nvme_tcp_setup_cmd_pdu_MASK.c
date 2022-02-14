
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {scalar_t__ bio; } ;
struct nvme_tcp_request {scalar_t__ pdu_len; scalar_t__ data_len; scalar_t__ curr_bio; scalar_t__ pdu_sent; scalar_t__ data_sent; scalar_t__ offset; int state; struct nvme_tcp_queue* queue; struct nvme_tcp_cmd_pdu* pdu; } ;
struct nvme_tcp_queue {TYPE_3__* ctrl; scalar_t__ data_digest; scalar_t__ hdr_digest; } ;
struct TYPE_4__ {int hlen; scalar_t__ pdo; int plen; int flags; int type; } ;
struct nvme_tcp_cmd_pdu {TYPE_1__ hdr; int cmd; } ;
struct nvme_ns {int dummy; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_5__ {int device; } ;
struct TYPE_6__ {TYPE_2__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct nvme_ns*,struct request*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_7 (struct nvme_tcp_queue*) ;
 int FUNC_8 (struct nvme_tcp_request*,int ) ;
 scalar_t__ FUNC_9 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_10 (struct nvme_tcp_queue*,struct request*) ;
 scalar_t__ FUNC_11 (struct request*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static blk_status_t FUNC_13(struct nvme_ns *VAR_6,
  struct request *VAR_7)
{
 struct nvme_tcp_request *VAR_8 = FUNC_0(VAR_7);
 struct nvme_tcp_cmd_pdu *VAR_9 = VAR_8->pdu;
 struct nvme_tcp_queue *VAR_10 = VAR_8->queue;
 u8 VAR_11 = FUNC_7(VAR_10), VAR_12 = 0;
 blk_status_t VAR_13;

 VAR_13 = FUNC_5(VAR_6, VAR_7, &VAR_9->cmd);
 if (VAR_13)
  return VAR_13;

 VAR_8->state = VAR_2;
 VAR_8->offset = 0;
 VAR_8->data_sent = 0;
 VAR_8->pdu_len = 0;
 VAR_8->pdu_sent = 0;
 VAR_8->data_len = FUNC_1(VAR_7);
 VAR_8->curr_bio = VAR_7->bio;

 if (FUNC_11(VAR_7) == VAR_4 &&
     VAR_8->data_len <= FUNC_9(VAR_10))
  VAR_8->pdu_len = VAR_8->data_len;
 else if (VAR_8->curr_bio)
  FUNC_8(VAR_8, VAR_3);

 VAR_9->hdr.type = VAR_5;
 VAR_9->hdr.flags = 0;
 if (VAR_10->hdr_digest)
  VAR_9->hdr.flags |= VAR_1;
 if (VAR_10->data_digest && VAR_8->pdu_len) {
  VAR_9->hdr.flags |= VAR_0;
  VAR_12 = FUNC_6(VAR_10);
 }
 VAR_9->hdr.hlen = sizeof(*VAR_9);
 VAR_9->hdr.pdo = VAR_8->pdu_len ? VAR_9->hdr.hlen + VAR_11 : 0;
 VAR_9->hdr.plen =
  FUNC_2(VAR_9->hdr.hlen + VAR_11 + VAR_8->pdu_len + VAR_12);

 VAR_13 = FUNC_10(VAR_10, VAR_7);
 if (FUNC_12(VAR_13)) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_10->ctrl->ctrl.device,
   "Failed to map data (%d)\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
