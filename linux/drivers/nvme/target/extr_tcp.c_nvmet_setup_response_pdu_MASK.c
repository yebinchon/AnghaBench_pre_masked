
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nvmet_tcp_queue {int snd_hash; scalar_t__ hdr_digest; } ;
struct nvmet_tcp_cmd {struct nvmet_tcp_queue* queue; int state; scalar_t__ offset; struct nvme_tcp_rsp_pdu* rsp_pdu; } ;
struct TYPE_2__ {int hlen; int flags; int plen; scalar_t__ pdo; int type; } ;
struct nvme_tcp_rsp_pdu {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct nvme_tcp_rsp_pdu*,int) ;
 scalar_t__ FUNC_2 (struct nvmet_tcp_queue*) ;

__attribute__((used)) static void FUNC_3(struct nvmet_tcp_cmd *VAR_3)
{
 struct nvme_tcp_rsp_pdu *VAR_4 = VAR_3->rsp_pdu;
 struct nvmet_tcp_queue *VAR_5 = VAR_3->queue;
 u8 VAR_6 = FUNC_2(VAR_3->queue);

 VAR_3->offset = 0;
 VAR_3->state = VAR_0;

 VAR_4->hdr.type = VAR_2;
 VAR_4->hdr.flags = 0;
 VAR_4->hdr.hlen = sizeof(*VAR_4);
 VAR_4->hdr.pdo = 0;
 VAR_4->hdr.plen = FUNC_0(VAR_4->hdr.hlen + VAR_6);
 if (VAR_3->queue->hdr_digest) {
  VAR_4->hdr.flags |= VAR_1;
  FUNC_1(VAR_5->snd_hash, VAR_4, sizeof(*VAR_4));
 }
}
