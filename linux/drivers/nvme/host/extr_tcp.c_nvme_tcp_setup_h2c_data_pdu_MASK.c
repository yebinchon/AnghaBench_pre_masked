
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {int tag; } ;
struct nvme_tcp_request {scalar_t__ pdu_len; scalar_t__ data_sent; scalar_t__ data_len; scalar_t__ pdu_sent; struct nvme_tcp_queue* queue; struct nvme_tcp_data_pdu* pdu; } ;
struct nvme_tcp_r2t_pdu {int ttag; int r2t_offset; int r2t_length; } ;
struct nvme_tcp_queue {scalar_t__ data_digest; scalar_t__ hdr_digest; TYPE_2__* ctrl; } ;
struct TYPE_6__ {int hlen; void* plen; scalar_t__ pdo; int flags; int type; } ;
struct nvme_tcp_data_pdu {void* data_length; void* data_offset; int command_id; int ttag; TYPE_3__ hdr; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct request* FUNC_0 (struct nvme_tcp_request*) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int ,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_tcp_data_pdu*,int ,int) ;
 scalar_t__ FUNC_5 (struct nvme_tcp_queue*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct nvme_tcp_queue*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nvme_tcp_request *VAR_5,
  struct nvme_tcp_r2t_pdu *VAR_6)
{
 struct nvme_tcp_data_pdu *VAR_7 = VAR_5->pdu;
 struct nvme_tcp_queue *VAR_8 = VAR_5->queue;
 struct request *VAR_9 = FUNC_0(VAR_5);
 u8 VAR_10 = FUNC_6(VAR_8);
 u8 VAR_11 = FUNC_5(VAR_8);

 VAR_5->pdu_len = FUNC_3(VAR_6->r2t_length);
 VAR_5->pdu_sent = 0;

 if (FUNC_7(VAR_5->data_sent + VAR_5->pdu_len > VAR_5->data_len)) {
  FUNC_2(VAR_8->ctrl->ctrl.device,
   "req %d r2t len %u exceeded data len %u (%zu sent)\n",
   VAR_9->tag, VAR_5->pdu_len, VAR_5->data_len,
   VAR_5->data_sent);
  return -VAR_0;
 }

 if (FUNC_7(FUNC_3(VAR_6->r2t_offset) < VAR_5->data_sent)) {
  FUNC_2(VAR_8->ctrl->ctrl.device,
   "req %d unexpected r2t offset %u (expected %zu)\n",
   VAR_9->tag, FUNC_3(VAR_6->r2t_offset),
   VAR_5->data_sent);
  return -VAR_0;
 }

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->hdr.type = VAR_4;
 VAR_7->hdr.flags = VAR_1;
 if (VAR_8->hdr_digest)
  VAR_7->hdr.flags |= VAR_3;
 if (VAR_8->data_digest)
  VAR_7->hdr.flags |= VAR_2;
 VAR_7->hdr.hlen = sizeof(*VAR_7);
 VAR_7->hdr.pdo = VAR_7->hdr.hlen + VAR_10;
 VAR_7->hdr.plen =
  FUNC_1(VAR_7->hdr.hlen + VAR_10 + VAR_5->pdu_len + VAR_11);
 VAR_7->ttag = VAR_6->ttag;
 VAR_7->command_id = VAR_9->tag;
 VAR_7->data_offset = FUNC_1(VAR_5->data_sent);
 VAR_7->data_length = FUNC_1(VAR_5->pdu_len);
 return 0;
}
