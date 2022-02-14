
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvme_tcp_request {int offset; int state; struct nvme_tcp_cmd_pdu* pdu; struct nvme_tcp_queue* queue; } ;
struct nvme_tcp_queue {int snd_hash; scalar_t__ data_digest; int sock; scalar_t__ hdr_digest; } ;
struct nvme_tcp_cmd_pdu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (struct nvme_tcp_queue*) ;
 int FUNC_3 (struct nvme_tcp_request*) ;
 int FUNC_4 (int ,struct nvme_tcp_cmd_pdu*,int) ;
 int FUNC_5 (struct nvme_tcp_queue*) ;
 int FUNC_6 (struct nvme_tcp_request*,int ) ;
 int FUNC_7 (struct nvme_tcp_cmd_pdu*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct nvme_tcp_cmd_pdu*) ;

__attribute__((used)) static int FUNC_10(struct nvme_tcp_request *VAR_6)
{
 struct nvme_tcp_queue *VAR_7 = VAR_6->queue;
 struct nvme_tcp_cmd_pdu *VAR_8 = VAR_6->pdu;
 bool VAR_9 = FUNC_3(VAR_6);
 int VAR_10 = VAR_1 | (VAR_9 ? VAR_3 : VAR_2);
 u8 VAR_11 = FUNC_5(VAR_7);
 int VAR_12 = sizeof(*VAR_8) + VAR_11 - VAR_6->offset;
 int VAR_13;

 if (VAR_7->hdr_digest && !VAR_6->offset)
  FUNC_4(VAR_7->snd_hash, VAR_8, sizeof(*VAR_8));

 VAR_13 = FUNC_1(VAR_7->sock, FUNC_9(VAR_8),
   FUNC_7(VAR_8) + VAR_6->offset, VAR_12, VAR_10);
 if (FUNC_8(VAR_13 <= 0))
  return VAR_13;

 VAR_12 -= VAR_13;
 if (!VAR_12) {
  if (VAR_9) {
   VAR_6->state = VAR_4;
   if (VAR_7->data_digest)
    FUNC_0(VAR_7->snd_hash);
   FUNC_6(VAR_6, VAR_5);
  } else {
   FUNC_2(VAR_7);
  }
  return 1;
 }
 VAR_6->offset += VAR_13;

 return -VAR_0;
}
