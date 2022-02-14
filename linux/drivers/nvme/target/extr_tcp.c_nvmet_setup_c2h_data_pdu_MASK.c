
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {scalar_t__ sqhd_disabled; } ;
struct nvmet_tcp_queue {int snd_hash; scalar_t__ hdr_digest; scalar_t__ data_digest; TYPE_1__ nvme_sq; } ;
struct TYPE_7__ {scalar_t__ transfer_len; TYPE_2__* cqe; } ;
struct nvmet_tcp_cmd {struct nvmet_tcp_queue* queue; scalar_t__ wbytes_done; TYPE_3__ req; int state; scalar_t__ offset; struct nvme_tcp_data_pdu* data_pdu; } ;
struct TYPE_8__ {int flags; int hlen; void* plen; scalar_t__ pdo; int type; } ;
struct nvme_tcp_data_pdu {TYPE_4__ hdr; void* data_offset; void* data_length; int command_id; } ;
struct TYPE_6__ {int command_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct nvmet_tcp_cmd*) ;
 scalar_t__ FUNC_2 (struct nvmet_tcp_queue*) ;
 int FUNC_3 (int ,struct nvme_tcp_data_pdu*,int) ;
 scalar_t__ FUNC_4 (struct nvmet_tcp_queue*) ;

__attribute__((used)) static void FUNC_5(struct nvmet_tcp_cmd *VAR_6)
{
 struct nvme_tcp_data_pdu *VAR_7 = VAR_6->data_pdu;
 struct nvmet_tcp_queue *VAR_8 = VAR_6->queue;
 u8 VAR_9 = FUNC_4(VAR_6->queue);
 u8 VAR_10 = FUNC_2(VAR_6->queue);

 VAR_6->offset = 0;
 VAR_6->state = VAR_0;

 VAR_7->hdr.type = VAR_5;
 VAR_7->hdr.flags = VAR_1 | (VAR_8->nvme_sq.sqhd_disabled ?
      VAR_2 : 0);
 VAR_7->hdr.hlen = sizeof(*VAR_7);
 VAR_7->hdr.pdo = VAR_7->hdr.hlen + VAR_9;
 VAR_7->hdr.plen =
  FUNC_0(VAR_7->hdr.hlen + VAR_9 +
    VAR_6->req.transfer_len + VAR_10);
 VAR_7->command_id = VAR_6->req.cqe->command_id;
 VAR_7->data_length = FUNC_0(VAR_6->req.transfer_len);
 VAR_7->data_offset = FUNC_0(VAR_6->wbytes_done);

 if (VAR_8->data_digest) {
  VAR_7->hdr.flags |= VAR_3;
  FUNC_1(VAR_8->snd_hash, VAR_6);
 }

 if (VAR_6->queue->hdr_digest) {
  VAR_7->hdr.flags |= VAR_4;
  FUNC_3(VAR_8->snd_hash, VAR_7, sizeof(*VAR_7));
 }
}
