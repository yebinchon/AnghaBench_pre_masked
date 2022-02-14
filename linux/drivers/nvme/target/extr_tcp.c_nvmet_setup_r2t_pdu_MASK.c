
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nvmet_tcp_queue {int snd_hash; scalar_t__ hdr_digest; } ;
struct TYPE_7__ {scalar_t__ transfer_len; TYPE_2__* cmd; } ;
struct nvmet_tcp_cmd {struct nvmet_tcp_queue* queue; scalar_t__ rbytes_done; TYPE_3__ req; int state; scalar_t__ offset; struct nvme_tcp_r2t_pdu* r2t_pdu; } ;
struct TYPE_8__ {int hlen; int flags; void* plen; scalar_t__ pdo; int type; } ;
struct nvme_tcp_r2t_pdu {TYPE_4__ hdr; void* r2t_offset; void* r2t_length; int ttag; int command_id; } ;
struct TYPE_5__ {int command_id; } ;
struct TYPE_6__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (struct nvmet_tcp_queue*,struct nvmet_tcp_cmd*) ;
 int FUNC_2 (int ,struct nvme_tcp_r2t_pdu*,int) ;
 scalar_t__ FUNC_3 (struct nvmet_tcp_queue*) ;

__attribute__((used)) static void FUNC_4(struct nvmet_tcp_cmd *VAR_3)
{
 struct nvme_tcp_r2t_pdu *VAR_4 = VAR_3->r2t_pdu;
 struct nvmet_tcp_queue *VAR_5 = VAR_3->queue;
 u8 VAR_6 = FUNC_3(VAR_3->queue);

 VAR_3->offset = 0;
 VAR_3->state = VAR_0;

 VAR_4->hdr.type = VAR_2;
 VAR_4->hdr.flags = 0;
 VAR_4->hdr.hlen = sizeof(*VAR_4);
 VAR_4->hdr.pdo = 0;
 VAR_4->hdr.plen = FUNC_0(VAR_4->hdr.hlen + VAR_6);

 VAR_4->command_id = VAR_3->req.cmd->common.command_id;
 VAR_4->ttag = FUNC_1(VAR_3->queue, VAR_3);
 VAR_4->r2t_length = FUNC_0(VAR_3->req.transfer_len - VAR_3->rbytes_done);
 VAR_4->r2t_offset = FUNC_0(VAR_3->rbytes_done);
 if (VAR_3->queue->hdr_digest) {
  VAR_4->hdr.flags |= VAR_1;
  FUNC_2(VAR_5->snd_hash, VAR_4, sizeof(*VAR_4));
 }
}
